using System;
using System.IO;
using System.Text;
public class Program{
  static string numbers=@"One
  Two
  Three
  Four.";
  static string letters=@"A
  B
  C  
  D.";
  public static void Main(){
    using (StringReader left = new StringReader(numbers),right = new StringReader(letters)){
      string item="";
      do {
        
          item = left.ReadLine();
          if(item!=null){
            Console.Write(item);
            Console.Write(" ");
          }
          else{continue;}
          item = right.ReadLine();
          if(item!=null){
            Console.Write(item);
            Console.Write(" ");
          }
          else{continue;}
          
      } while(item!= null);
    }
  }
}
