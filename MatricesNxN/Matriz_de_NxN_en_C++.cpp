#include <iostream>

using namespace std;

int main ()
{
	int n=0;
	cout<<"Ingresa el tamaño de la matriz:  ";
	cin>>n;
	
	float matriz_a[n][n];
	float matriz_b[n][n];
	float matriz_c[n][n];


	for (int i=0; i<n; i++)
	{
		for (int j=0; j<n; j++)
		{
			cout<<"Ingresa un valor en la posicion ("<<i<<","<<j<<"):";
			cin>>matriz_a[i][j];	
		}
	}
	for (int i=0; i<n; i++) //mostrando matriz
	{
		cout<<"| ";
		for (int j=0; j<n; j++)
		{
			cout<<matriz_a[i][j];
			cout<<" ";
		}
		cout<<"| ";
		cout<<"\n";
	}
	for (int i=0; i<n; i++)
	{
		for (int j=0; j<n; j++)
		{
			cout<<"Ingresa un valor en la posicion ("<<i<<","<<j<<"):";
			cin>>matriz_b[i][j];	
		}
	}
	for (int i=0; i<n; i++) //mostrando matriz
	{
		cout<<"| ";
		for (int j=0; j<n; j++)
		{
			cout<<matriz_b[i][j];
			cout<<" ";
		}
		cout<<"| ";
		cout<<"\n";
	}
	//MULTIPLICACION
	for(int i=0; i<n; i++)
	{
		for (int j=0; j<n; j++)
		{
			matriz_c[i][j]=0;
			for (int k=0; k<n; k++)
		{
			matriz_c[i][j]+=(matriz_a[i][k]*matriz_b[k][j]);
		}
		
		}
	}
	cout<<"\n";
	cout<<"La matriz resultado es: \n";
	for (int i=0; i<n; i++) //mostrando matriz
	{
		cout<<"| ";
		for (int j=0; j<n; j++)
		{
			cout<<matriz_c[i][j];
			cout<<" ";
		}
		cout<<"| ";
		cout<<"\n";
	}
	return 0;
}

