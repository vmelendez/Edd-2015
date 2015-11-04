//BORRAR ELEMENTO

#include <stdio.h>
#include <stdlib.h>

struct Nodo{
	int dato;
	struct Nodo *siguiente;
};

int main (){
	int i;
	struct Nodo* n=NULL;
	struct Nodo* aux=NULL;
	struct Nodo* inicio=NULL;
	
	n=(struct Nodo*)malloc(sizeof(struct Nodo));
	n -> dato = 5;
	aux = n;
	inicio =n;
	n->siguiente =NULL;
	
	for (i=0; i<4; i++)
	{
		n=(struct Nodo*)malloc(sizeof(struct Nodo));
		n->dato = i*2;
		aux->siguiente =n;
		aux = aux->siguiente;
		n->siguiente =NULL;	
	}
	aux = inicio;
	while (aux){
		printf ("%d -> ", aux->dato);
		aux = aux->siguiente;
	}
	struct Nodo* borrar = inicio;
	aux = NULL;
	while (borrar && borrar -> dato != 4){
		aux = borrar;
		borrar = borrar->siguiente;
		
	}
	if (aux == NULL){
		aux = borrar->siguiente;
		inicio = borrar->siguiente;
	}else if (borrar == NULL){
		printf ("Nodo no encontrado");
	}else {
		aux->siguiente = borrar->siguiente;
		free (borrar);
	}
	printf ("\n\n");
	aux = inicio;
	while (aux){
		printf ("%d->", aux->dato);
		aux = aux->siguiente;
	}
}
