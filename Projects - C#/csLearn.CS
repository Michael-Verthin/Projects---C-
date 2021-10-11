using System;

public class Kata
{
  public static bool IsIsogram(string str) 
  {
    bool answer = true;
    string test;
    for (int i = 0; i < str.length(); i++){
      test = str[i];
      for (int a = 1; a < str.length()-1; a++){
        if(test == str[a]){
          answer = false;
        }
      }
      console.printline(answer);
    }
  }
}