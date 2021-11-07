using System;
public class Frazione{
    private int _num,_den;
    Frazione(){} //there isn't need add public because Main() is inside this Class
    
    Frazione(int num, int den){
        if(den!=0){
            _num = num;
            _den = den;
        }
        else {
            throw new ArgumentException("Den cannot be 0");
        }
    }
    
    public int Num{
        get{return _num;}
        set {_num = value;}
    }
    
    public int Den{
        get => _den;
        set => _den = value;
    }
    
    public static void Main(){
        Frazione a = new Frazione ();
        a.Num = 1;
        a.Den = 2;
        Console.WriteLine("Num is {0} - Den is {1}",a.Num,a.Den);
    }
}
