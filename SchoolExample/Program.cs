using System;

namespace CsLanguage
{   
    class Student{
        private string Name;
        private string Id;
        private int MathGrade;
        private int EnglishGrade;
        private int GrammerGrade;
        public Student(string name, string id,int MathGrade, int EnglishGrade, int GrammerGrade){
            this.Name = name;
            this.Id = id;
            this.MathGrade = MathGrade;
            this.EnglishGrade = EnglishGrade;
            this.GrammerGrade = GrammerGrade;
        }
        public string GetName(){
            return this.Name;
        }
        public string GetId(){
            return this.Id;
        }
        public int GetMathGrade(){
            return this.MathGrade;
        }
        public int GetEnglishGrade(){
            return this.EnglishGrade;
        }
        public int GetGrammerGrade(){
            return this.GrammerGrade;
        }
        public bool RaiseGrade(string subject, int points){
            if(subject == "english"){
                this.EnglishGrade += points;
                return true;
            }
            if(subject == "math"){
                this.MathGrade += points;
                return true;
            }
            if(subject == "grammer"){
                this.GrammerGrade += points;
                return true;
            }
            return false;
        }
        public void SetName(string name){
            this.Name = name;
        }
        public double Average(){
            int sum = this.EnglishGrade + this.GrammerGrade + this.MathGrade;
            return sum / 3.0;
        }
        public override string ToString()
        {
            string s = "";
            s += "name: " + this.Name + ", Id: " + this.Id + "\n"+ "Scores:\nMath: " + this.MathGrade + ", English: " + this.EnglishGrade + ", Grammer: " + this.GrammerGrade + "\n"; 
            return s;
        }
    }
    class Teacher{
        private string Name;
        private string Id;
        private int WorkYears;
        private bool HasDiploma;
        private int NumSubjects;
        private string[] Subjects;
        public Teacher(string name,string id, int workyears, bool hasdiploma, string firstsubject, int maxsubjects){
            this.Name = name;
            this.Id = id;
            this.WorkYears = workyears;
            this.HasDiploma = hasdiploma;
            this.Subjects = new string [maxsubjects];
            this.Subjects[0] = firstsubject;
            this.NumSubjects = 1;
        }
        public void IncrementWorkingYears(){
            this.WorkYears++;
        }
        public bool AddSubject(string subject){
            if(this.NumSubjects == this.Subjects.Length){
                return false;
            }
            this.Subjects[this.NumSubjects] = subject;
            this.NumSubjects ++;
            return true;
        }
        public bool TeachingSubject(string subject){
            for(int i=0;i<this.NumSubjects;i++){
                if(this.Subjects[i]==subject){
                    return true;
                }
            }
            return false;
        }
        public override string ToString()
        {
            string s = "";
            s += "Name: " + this.Name + ", Id: " + this.Id + "\nWorking Years: " + this.WorkYears + ", Has Diploma: " + this.HasDiploma + "\nSubjects: ";
            for(int i=0;i<this.NumSubjects;i++){
                s += this.Subjects[i] + ", ";
            }
            s += "\n";
            return s;
        }
    }
    class StudentClass{
        private char Level;
        private int Num;
        private Teacher Educator;
        private int NumStudents;
        private Student[] Students;
        public const int STANDART  = 42;
        public StudentClass(char level, int num, Teacher educator, int maxstudents){
            this.Level = level;
            this.Num = num;
            this.Educator = educator;
            this.NumStudents = 0;
            this.Students = new Student[maxstudents];
        }
        public StudentClass(char level, int number){
            this.Level = level;
            this.Num = number;
            this.NumStudents = 0;
            this.Students = new Student[STANDART];
        }
        public char GetLevel(){
            return this.Level;
        }
        public int GetNumber(){
            return this.Num;
        }
        public int GetNumStudents(){
            return this.NumStudents;
        }
        public void SetLevel(char level){
            this.Level = level;
        }
        public void SetEducator(Teacher educator){
            this.Educator = educator;
        }
        public bool AddStudent(Student stu){
            if(this.NumStudents==this.Students.Length){
                return false;
            }
            this.Students[this.NumStudents] = stu;
            this.NumStudents++;
            return true;
        }
        public string BestInClass(){
            Student BestStudent = this.Students[0];
            for(int i=0;i<this.NumStudents;i++){
                if(this.Students[i].Average()>BestStudent.Average()){
                    BestStudent = this.Students[i];
                }
            }
            return BestStudent.GetId();
        }
        public bool IsStudentInClass(string id){
            return GetStudent(id) != null;
        }
        public string StudentDetails(string id){
            Student stu = GetStudent(id);
            if(stu != null){
                return stu.ToString();
            }
            return null;
        }
        public Student GetStudent(string id){
            for(int i=0;i<this.NumStudents;i++){
                if(this.Students[i].GetId()==id){
                    return this.Students[i];
                }
            }
            return null;
        }
        public bool RaiseGrade(string id, string subject, int points){
            Student stu = GetStudent(id);
            if(stu == null){
                return false;
            }
            stu.RaiseGrade(subject, points);
            return true;
        }
        public override string ToString()
        {
            string s = "Class: " + this.Level + this.Num;
            s += "\nEducator: " + this.Educator;
            s += "\nStudent List:\n";
            for(int i =0;i<this.NumStudents;i++){
                s += this.Students[i];
            }
            return s;
        }
    }
    class Program{
        static void Main(string[] args){
            Program p = new Program();
            Console.WriteLine("// Hello World\n");  
            Student ArikCohen = new Student("Arik Cohen", "13546", 12, 45, 45);
            Student AviMasaka = new Student("Avi Masaka", "4856", 78, 0, 45);
            Teacher AmitChoen = new Teacher("Amit Choen", "202020" , 12, true, "english", 3);
            AmitChoen.AddSubject("Math");
            StudentClass ClassA1 = new StudentClass('A',1,AmitChoen,10);
            ClassA1.AddStudent(AviMasaka);
            ClassA1.AddStudent(ArikCohen);
            Console.WriteLine(ClassA1.ToString());
            Console.WriteLine("\n// Best in class");
            Console.WriteLine(ClassA1.BestInClass());
            Console.WriteLine("\n//Raise grade");
            ClassA1.RaiseGrade("4856", "math", 5);
            ClassA1.RaiseGrade("13546", "math", 10);
            Console.WriteLine(ClassA1.ToString());
            Console.WriteLine("// Exiting software");         
        }
    }
}
