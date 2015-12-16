#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <conio.h>

using namespace std;

typedef char TipoDato;


struct nodo {
   TipoDato Info;
   struct nodo *Izq;
   struct nodo *Der;
};

typedef struct nodo *Lista;


void CargarNodo(Lista &n)
{
  TipoDato infor;
  int Resp;
  Lista otro;
  
  // comienza el programa
  cout << "Escribe el valor del nodo:  ";
  cin >> infor;
  n->Info= infor;
  
  // preguntar si existe un nodo en la parte izquierda
  cout <<"Hay un nodo en la parte izquierda de: " << n->Info << " 1=Si, 2=No:  " ;
  cin >> Resp;

  if (Resp == 1 )
  {
    otro= new nodo;
    n->Izq= otro;
    CargarNodo(n->Izq);
  }
  else
    n->Izq= NULL;

  // preguntar si es que hay nodo
  cout << "Hay un nodo en la parte derecha:  " << n->Info << " 1=Si, 2=No: " ;
  cin>> Resp;


  if (Resp == 1)
    {
     otro= new nodo;
     n->Der= otro;
     CargarNodo( n->Der );
    }
  else
    n->Der= NULL;

 }



void Preorden(Lista n)
{
  if (n!=NULL)
    {
     cout << n->Info;
     Preorden( n->Izq );
     Preorden( n->Der );
    }
}

void Inorden(Lista n)
{
  if (n!=NULL)
    {
     Inorden( n->Izq );
     cout << n->Info;
     Inorden( n->Der );
    }
}

void Postorden(Lista n)
{
  if (n!=NULL)
    {
     Postorden( n->Izq );
     Postorden( n->Der );
     cout << n->Info;
    }
}

int main()
{
  system("cls");
  Lista x;
  x= new nodo;
  
  CargarNodo( x );
 

 cout << "Preorden: " << endl;
  Preorden( x );
  cout << endl << endl;
  cout << "Inorden: " << endl;
  Inorden( x );
  cout << endl << endl;
  cout << "Postorden: " << endl;
  Postorden( x );
  cout << endl << endl;

  system("pause");
  return 1;
}



