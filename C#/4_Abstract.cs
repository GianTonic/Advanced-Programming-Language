using System;
public abstract class A
{
public abstract void Method1();
}
public class B:A{
  public override void Method1(){
      Console.WriteLine("ciao");
  }
}
public class Program{
  public static void Main(){
    B b =new B();
    b.Method1();
  }  
}
