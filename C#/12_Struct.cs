using System;
public interface ICounter{
  void Increment();
}
public struct Counter:ICounter{
  int val;
  public override string ToString(){
    return val.ToString();
  }
  void ICounter.Increment(){
    val++;
  }
}
public class Program{
  static void Test<T>() where T: ICounter,new(){
    T x=new T();
    Console.WriteLine(x);
    x.Increment();
    Console.WriteLine(x);
    Console.WriteLine(((ICounter)x));
    ((ICounter)x).Increment();  //Modify boxed copy of x
    Console.WriteLine(x);
  }
  public static void Main(){
    Test<Counter>(); 
  }
}
