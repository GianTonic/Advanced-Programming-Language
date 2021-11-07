using System;
public interface Ipoint{
  int X{
    get;
    set;
  }
  int Y{
    get;
    set;
  }
  double Distance{
    get;
  }
}
public class Point:Ipoint{
    int x;
    int y;
    double distance;
    
    public int X{
      get{
        return x;
      }
      set{
        x=value;
      }
    }
    public int Y{
      get{
        return y;
      }
      set{
        y=value;
      }
    }
    public double Distance{get;set;}  
    
    public Point(int x, int y){
      X = x;
      Y = y;
    }
    
}
public class Program{
  public static void StampaPunto(Ipoint p){
    Console.WriteLine("Axis X={0} Axis Y={1}",p.X,p.Y);
  }
  public static void Main(){
    Ipoint p =new Point(3,4);
    StampaPunto(p);
  }
}
