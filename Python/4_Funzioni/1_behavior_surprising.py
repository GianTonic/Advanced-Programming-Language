def add_item(item, item_list = []):
	item_list.append(item)
	print (item_list)	
if __name__ == "__main__":
	add_item(1)
	add_item(2)
	
#out: [1]
#     [1, 2]  ---> Dovrebbe spuntarmi solo [2], questo xk la lista viene inizializzata una volta sola (quando la funzione è definita)
#Se vengono fatti cambiamenti in un argomento di default mutabile , questi cambiamenti saranno riflessi nelle future chiamate di funzioni

	
