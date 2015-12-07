#include <stdlib.h>
#include <stdio.h>

typedef struct _nodo {
	int valor;
	struct _nodo *siguiente;
}tipoNodo;

typedef tipoNodo *pNodo;
typedef tipoNodo *Pila;

//Funciondes con pilas

void Push(Pila *l, int v);
int Pop(Pila *l);

int main (){
	Pila pila = NULL;
	
	Push (&pila, 20);
	Push (&pila, 10);
	printf ("%d,", Pop(&pila));
	Push (&pila, 40);
	Push (&pila, 30);
	
	printf ("%d,", Pop(&pila));
	printf ("%d,", Pop(&pila));
	
	Push (&pila, 90);
	printf ("%d,", Pop(&pila));
	printf ("%d,", Pop(&pila));
	
	getchar ();
	return 0;
}
void Push (Pila *pila, int v){
	pNodo nuevo;
	//Crear nodo nuevo
	nuevo = (pNodo)malloc(sizeof(tipoNodo));
	nuevo ->valor = v;
	
	nuevo->siguiente = *pila;
	*pila = nuevo;
}
int Pop(Pila *pila){
	pNodo nodo;//variable auxiliar para manipular el nodo
	int v;// variable aux para el retorno
	
	//Nodo apunta al primer elemnto de la pila
	nodo = *pila;
	if (!nodo) return 0; //si no hay nodos en la pila retornamos 0
	*pila = nodo->siguiente;
	v=nodo->valor;
	//Borrar el nodo
	free (nodo);
	return v;
}
