//OPERACIONES

#ifndef _LIST
#define _LIST

typedef struct snodo{
	int dato;
	snodo *siguiente;
}nodo;

typedef struct{
	nodo *inicio;
	int capacidad;
}list;

void inicializar (list &);
nodo *nodonuevo (int );
bool vacia(list &);
bool insertarFinal (list &, int );
void imprimir (list & );
bool insertarInicio(list &, int);
void busqueda (list &, int , int );
void eliminarUno (list &, int);
void Borrar (list &);
#endif 
