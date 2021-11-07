using System;
public class A{
  public virtual void Stampa(){
    Console.WriteLine("OK");
  }
}
public class B:A{
  public override void Stampa(){
    Console.WriteLine("Ciao");
  }
}
public class Program{
  public static void Main(){
    B b=new B();
    b.Stampa();
  }
}
