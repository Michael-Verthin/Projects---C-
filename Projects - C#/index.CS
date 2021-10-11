using System;

public class Kata
{
  public static bool IsIsogram(string str) 
  {
    string test;
    for (int i = 0; i < str.length(); i++){
      test = str[i];
      for (int a = 1; a < str.length()-1; a++){
        if(test = str[a]){
          return false;
        }
        return true;
      }
    }
  }
  public test(){
    string test1 = "moose";
    string test2 = "isogram";
    IsIsogram(test1);
    IsIsogram(test2);
  }
}