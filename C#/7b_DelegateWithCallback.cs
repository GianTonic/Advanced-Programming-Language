using System;
public class Program{
  public delegate void Handler(string s);
  public static void Metodo(string s ){
    Console.WriteLine(s);
  }
  public static void Metodo1(String s, Handler handler){
    Console.WriteLine(s);
    handler("Hello");
  }
  public static void Main(){
    Handler handler=Metodo;
    Metodo1("Bob",handler);
  }
}
