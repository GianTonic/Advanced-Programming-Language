using System;
public class GenericsList<T>{
  public void add(T input){}
  
}
public class Dog{}
public class Program{
  public static void Main(){
    GenericsList<int> gli=new GenericsList<int>();
    GenericsList<Dog> gnc=new GenericsList<Cane>();
    gli.add(7);
    gnc.add(new Cane());
  }  
}
