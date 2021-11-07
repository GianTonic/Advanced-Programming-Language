x <- c(1,2,NA,4,NA)
y = complete.cases(x)
y #vettore di booleani : T T F T F
x[y] #1 2 4
y= is.na(x) 
y #vettore di booleani : F F T F T
x[!y] #1 2 4
