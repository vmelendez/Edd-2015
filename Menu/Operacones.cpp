//OPERACIONES

#include <cstdio>
#include <iostream>
#include "Operaciones.h"

using namespace std;

void inicializar (list &lista){
	lista.inicio = NULL;
	lista.capacidad = 0;
	
}

nodo *nodonuevo (int dato){
	nodo * nuevo = new nodo;
	nuevo -> dato = dato;
	nuevo -> siguiente = NULL;
	return nuevo;
}

bool vacia(list &lista){
	if (lista.capacidad == 0)
		return true;
	else return false;
}
bool insertarInicio (list &lista, int dato){
	nodo *p, *q, *aux;
	p=lista.inicio;
	
	if (vacia (lista)){
		lista.inicio = nodonuevo (dato);
		lista.capacidad++;
	}
	else{
		aux  = nodonuevo(dato);
		lista.inicio = aux;
		aux -> siguiente =p;
		lista.capacidad ++;
	}
}
bool insertarFinal (list &lista, int dato){
	nodo *p, *q, *aux;
	p=lista.inicio;
	
	if (vacia (lista)){
		lista.inicio = nodonuevo (dato);
		lista.capacidad++;
	}
	else{
		while (p != NULL){
			q=p;
			p=p->siguiente;
		}
		aux  = nodonuevo(dato);
		q->siguiente = aux;
		lista.capacidad ++;
	}
}

void imprimir (list &lista){
	nodo *p = lista.inicio;
	while (p != NULL){
		std::cout<<p->dato<<" ";
		p=p->siguiente;
	}
}
void busqueda (list &lista, int busq, int dato){
	nodo *p = lista.inicio, *q, *aux;
	
	while(p->dato != busq){
		p=p->siguiente;
		if (p == NULL){
			std::cout<<"No esta"<<std::endl;
			break;
		}
	}
	if (p->dato == busq){
		q=p;
		p=p->siguiente;
		aux = nodonuevo(dato);
		q->siguiente = aux;
		aux -> siguiente =p;
	}
}
void eliminarUno (list &lista, int busq){
	nodo *p = lista.inicio, *q, *aux;
	
	while(p->dato != busq){
		q=p;
		p=p->siguiente;
		if (p == NULL){
			std::cout<<"No esta"<<std::endl;
			break;
		}
	}
	if (p == lista.inicio){
		lista.inicio = p;
		delete (q);
	}
	else if (p->dato == busq){
		aux =p;
		p=p->siguiente;
		q->siguiente = p;
		aux -> siguiente =p;
		delete (aux);
		lista.capacidad --;
	}
}
void Borrar (list &lista){
	nodo * aux;
	
	while (lista.inicio != NULL){
		aux = lista.inicio;
		lista.inicio = aux->siguiente;
		delete (aux);
	}
	lista.inicio =NULL;
	lista.capacidad =0;
}
