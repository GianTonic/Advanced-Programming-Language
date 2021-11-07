using System;
[AttributeUsage(AttributeTargets.Class)]
public class AuthorAttribute: Attribute{
  private string name;
  private string cognome;
  public AuthorAttribute(string name){
    this.name=name;
  }
  public string Cognome{
    get{return cognome;}
    set{cognome=value;}
  }
}
[Author("Stefano", Cognome="Privitera")]
public class Libro{}
public class Program{
  public static void Main(){
   System.Attribute[] attrs = System.Attribute.GetCustomAttributes(typeof(Libro));  // Reflection.  
  
        // Displaying output.  
        foreach (System.Attribute attr in attrs)  
        {  
            if (attr is AuthorAttribute)  
            {  
                AuthorAttribute a = (AuthorAttribute)attr;  
                System.Console.WriteLine("   {0}", a.Cognome);  
            }  
        }  
  }
}
