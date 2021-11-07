using System;
using System.Collections;
using System.Linq;
public class Program{
  static string[] names = { 
    "Life is Beautiful",
    "Arshika Agarwal",
    "Seven Pounds",
    "Rupali Agarwal",
    "Pearl Solutions",
    "Vamika Agarwal",
    "Vidya Vrat Agarwal",
    "C-Sharp Corner Mumbai Chapter"
  };
  public static void Main(){
    IEnumerable namesOfPeople = from name in names where name.Length <= 16 select name;
    foreach(var name in namesOfPeople){
      Console.WriteLine(name);
    }
  }
}
