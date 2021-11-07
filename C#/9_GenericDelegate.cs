using System;
public class Program{
  public delegate void Handler<T>(T items);
  public static void Metodo1(int numero){Console.WriteLine(numero);}
  public static void Main(){
    Handler<int> handler=new Handler<int>(Metodo1);
    handler(1);
  }
}
