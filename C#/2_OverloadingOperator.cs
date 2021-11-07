using System;
public class Frazione{
    private int _num,_den;
    
    public Frazione(){}
    
    public Frazione(int num, int den){
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
    public static Frazione operator+(Frazione a, Frazione b){
        return new Frazione((a.Num*b.Den)+(b.Num*a.Den),a.Den*b.Den);
    }
    
}
public class Program{
	public static void Main(){
        	Frazione a = new Frazione (1,2);
        	Frazione b = new Frazione (3,4);
        	Frazione c = a + b;
        	Console.WriteLine("Frazione c has Num:{0} - Den:{1}",c.Num,c.Den);
    }
}

