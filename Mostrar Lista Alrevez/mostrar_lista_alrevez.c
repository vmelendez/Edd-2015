//MOSTRAR LISTA ALREVEZ

#include <stdio.h>
#include <stdlib.h>


struct Nodo{ //Nombre de la estructura 
	
	int dato;//el primer campo es el dato
	struct Nodo* sigNodo; // y el segundo hace referencia al siguiente nodo
	struct Nodo* antNodo;
};
void most_invert(struct Nodo* lleno)
{

	while (lleno->sigNodo!=NULL)
	{
		lleno = lleno->sigNodo;
	}
	while (lleno->antNodo!=NULL)
	{
		printf ("%d  ",lleno->dato );
		lleno = lleno->antNodo;
	}
}
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
		struct Nodo* antNodo=NULL;
		n=(struct Nodo*)malloc(sizeof(struct Nodo)); //tamaño de la estructura
			n-> dato = x;
			aux = n;
			inicio = n;
			n->sigNodo = NULL;
			n->antNodo=NULL;
	
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
			n->	antNodo=aux;
			aux = n;
			n->sigNodo =NULL;	
		}
	}

	mostrar (inicio);
	printf("\n");
	most_invert(inicio);
	return 0;
}
