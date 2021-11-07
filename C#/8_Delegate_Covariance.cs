using System;
public class Dog{}
public class Mammals:Dog{}
public class Program{
  public delegate Dog HandlerMethod(); //return base class Dog
  public static Mammals HandlerMammals(){return null;}
  public static Dog HandlerDog(){return null;}
  HandlerMethod doghandler=HandlerMammals; 
  HandlerMethod mammalshandler=HandlerDog;
  public static void Main(){;}
}
