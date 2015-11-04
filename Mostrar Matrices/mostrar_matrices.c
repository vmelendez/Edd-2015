//MOSTRAR LISTA

#include <stdio.h>
#include <stdlib.h>

struct Nodo{ //Nombre de la estructura 
	
	int dato;//el primer campo es el dato
	struct Nodo* sigNodo; // y el segundo hace referencia al siguiente nodo
	
};
void mostrar (struct Nodo* p){
	struct Nodo* q;
	q=p;
	q=q->sigNodo;
	while (q!=NULL)
	{
		
		
		printf ("%d  ",q->dato);
		q=q->sigNodo;
	    
	}
}
int main ()
{
	int x=0;
		struct Nodo* n=NULL;
		struct Nodo* aux=NULL; //Nodos apuntando a NUL
		struct Nodo* inicio=NULL;
		n=(struct Nodo*)malloc(sizeof(struct Nodo)); //tamaño de la estructura
			n-> dato = x;
			aux = n;
			inicio = n;
			n->sigNodo = NULL;
			printf ("Inserta valores e inserta -1 para dejar de ingresar");
			printf ("\n");
	while (true)
	{
		printf ("Dame un valor: ");
		scanf ("%d",&x);
		if (x==-1)
	break;
		else
	   {
		n=(struct Nodo*)malloc(sizeof(struct Nodo));
			n-> dato = x;
			aux -> sigNodo = n;
			aux = n;
			n->sigNodo = NULL;	
		}
	}

	mostrar (inicio);
	return 0;
}
