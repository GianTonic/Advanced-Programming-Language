using System;

public class Program{
	public delegate void Del(string sd);
	public static void Method(string sm){
		Console.WriteLine(sm);
	}
	public static void Main(){
		Del d = Method;
		//Del d = new Del(Method);
		//Del d = delegate(string s){Console.WriteLine(s);};
		//Del d = (x) => Console.WriteLine(x);
		d("Hello");
	}
}
