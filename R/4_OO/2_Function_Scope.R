#Le regole di Scoping determinano come un valore è associato con una "free" variable in un funzione. Possiamo avere LEXICAL SCOPING O STATIC SCOPING
#Lexical scoping : il valore della free variable sono ricercate nell'environment nella quale la funzione è definita. Ogni environment può avere parent environment.

makepower=function(n){
  wrapped=function(x){
    x^n 
  }
  wrapped  
}
cube=makepower(3)
square=makepower(2)
cube(3)
square(3)
