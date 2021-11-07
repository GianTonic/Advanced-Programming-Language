using System;
public class Program{
	public delegate void del(string s);
	public static void Method1(string s){Console.WriteLine("I'm on Method1 {0}", s);}
	public static void Method2(string s){Console.WriteLine("I'm on Method2 {0}", s);}
	public static void Main(){
		del d1 = Method1;
		del d2 = Method2;
		del all= d1+d2;
		all("Hello");
	}
	
}
