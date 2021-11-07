using System;
using System.Threading.Tasks;
public class AsyncProgram{
  public async Task<string> Hello(){
    return  await Task<string>.Run(()=>{return "Done";});
  }
  public async void fun(){
    Console.WriteLine(await Hello());
    //Console.WriteLine("return");
  }
}
public class Program{
  public static void Main(){
    new AsyncProgram().fun();
  }
}
