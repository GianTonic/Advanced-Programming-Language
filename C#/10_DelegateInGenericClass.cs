using System;
public class Stack<T>{
	int num;
	T[] array;
	public delegate void del(T[] items);
}

public class Program{
	public static void Method(int[] items){}
	public static void Main(){
		Stack<int> s = new Stack<int>();
		Stack<int>.del d = Method;
	}
}
