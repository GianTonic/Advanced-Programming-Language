using System;
public class Lista<T>{
  
  private T[] s=new T[10];
  int top=0;
  public void Addi(T input){
    s[top+1]=input;
    top++;
  }
  public T Pop(){
    top--;
    return s[top+1];
  }
  
} 
public class Dog{
  private string nome;
  public string Nome{
    get{return nome;}
    set{nome=value;}
  }
  public Dog(string nome){
    this.nome=nome;
  }
}
public class Program{
  public static void Main(){
  Lista<int> l=new Lista<int>();
  l.Addi(1);
  l.Addi(2);
  int x=l.Pop();
  Console.WriteLine(x);  
  Lista<Dog> ld=new Lista<Dog>();
  ld.Addi(new Dog("Stefano"));
  ld.Addi(new Dog("Giovanni"));
  Dog d=ld.Pop();
  Console.WriteLine(d.Nome);
  }
}
