using System;
public delegate void Notify(); //DELEGATE
public class Process{
	public event Notify ProcessCompleted; //EVENT
	public void startProcess(){
		Console.WriteLine("Process start...");
		OnProcessCompleted();
	}
	public void OnProcessCompleted(){
		ProcessCompleted.Invoke(); //Method Invoke of EVENT
	}
}

public class Program{
	public static void Main(){
		Process p = new Process();
		p.ProcessCompleted += Handler; 
		p.startProcess();
	}
	public static void Handler(){
		Console.WriteLine("Process ending...");
	}
}
