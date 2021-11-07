using System;
//public delegate void Notify();
public class Process{
	public event EventHandler<bool> ProcessCompleted; //EventHandler is built-in delegate type
	public void StartProcess(){
    		Console.WriteLine("Begin");
   		try{
    			Console.WriteLine("Process Started!");
      			OnProcessCompleted(true);
    		}
    		catch(Exception ex){
      			OnProcessCompleted(false);
    		}
    	}
    		
	public void OnProcessCompleted(bool isSuccessful){
	ProcessCompleted.Invoke(this, isSuccessful); //This is the sender. isSuccessfull is tha data
	}
}

public class Program{
	public static void Main(){
		Process p =new Process();
		p.ProcessCompleted += Handler;
		p.StartProcess();
	}
	public static void Handler(object sender, bool IsSuccessful){
		Console.WriteLine("Process " + (IsSuccessful? "Completed Successfully":"failed"));
	}
}

