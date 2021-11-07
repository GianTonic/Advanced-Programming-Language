using System;
class Program{ 
	static void Main(string [] args){
		Func <int,int, Boolean> fun = (x,y) => x > y;
		Console.WriteLine(fun(10,10));
	}
}
