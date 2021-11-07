using System;
using System.Collections.Generic; 
public class Measurements{
  public  Measurements(int hi, int low, int pressure){
    HiTemp=hi;
    LoTemp=low;
    AirPressure=pressure;
  }
  public int HiTemp { get; set; }
  public int LoTemp { get; set; }
  public double AirPressure { get; set; }

}
public class Program{
  private readonly List<Measurements> lista=new List<Measurements>();
  public Measurements this[int index]{
    get{
      return lista[index];
    }
    set{
      lista[index]=value;
    }
  }
  public static void Main(){
    Program p=new Program();
    p.lista.Add(new Measurements(10,101,10));
    Measurements x = p[0];
    Console.WriteLine(x.HiTemp);
    p[0].HiTemp=20;
    Console.WriteLine(p[0].HiTemp);
  }
}
