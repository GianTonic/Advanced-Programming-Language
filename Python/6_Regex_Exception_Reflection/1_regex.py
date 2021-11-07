#Regular expressions are special character sequences that represent a set of strings. They are a coincise way to express a set of strings using formal syntax
import re
	
x="ciao\n" 
#To use a regular expression, we first have to compile it. This creates a pattern object which has methods for searching and matching
p = re.compile('c') #compila un espressione regolare in un oggetto pattern
q=p.match(x)  #match(string) determina se l'espressione regolare matcha dall'inizio della stringa
print(q.group(0)) #group() ritorna il sottogruppo del match. group(0) torna l'intero match
r = re.compile( r'\$([1-9][0-9])\.([0-9]{2})')
s = r.search("$10.95") #search(string) method scans the string, looking for any instance where the regular exp can be matched
print(s.group(0))
l = re.findall('.',x)
print(l)

