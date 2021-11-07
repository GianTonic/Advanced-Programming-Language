using System;
//Record is a Reference type and it is a value-based equality. Do override of equality's operators/methods. The compile synthesize parameter's init proprierties/constructor and more method
public class Program{
  public record Temperature(int grade,int day);
  public static void Main(){
    Temperature t1 =new Temperature(19,1);
    Temperature t2 =new Temperature(19,1);
    Console.WriteLine("Grade: {0} Day : {1} ", t1.grade, t1.day);
    Console.WriteLine(t1==t2);
  }
}
