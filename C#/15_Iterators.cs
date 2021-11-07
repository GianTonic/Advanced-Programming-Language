using System;
using System.Collections.Generic;

public class Program{

  public static IEnumerable<int> returnYield(int []a){
		foreach(int x in a){
			yield return x;
		}
  }	

  public static void Main(){
    int[]array=new int[10]{1,2,3,4,5,6,7,8,9,10};
    foreach(int x  in array){
      Console.WriteLine(x);
    }
    for(int i=0;i<10;i++){
      Console.WriteLine(array[i]);
    }
    //PERFORM ITERATOR
    foreach(int x in returnYield(array)){
      Console.WriteLine(x);
    }
  }
   
}

