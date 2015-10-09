#include <iostream>

using namespace std;

int main ()
{
	float matriz_a[3][3];
	float matriz_b[3][3];
	float matriz_c[3][3];

	for (int i=0; i<3; i++)
	{
		for (int j=0; j<3; j++)
		{
			cout<<"Ingresa un valor en la posicion ("<<i<<","<<j<<"): ";
			cin>>matriz_a[i][j];
		}
	}
	for (int i=0; i<3; i++) //mostrando matriz
	{
		cout<<"| ";
		for (int j=0; j<3; j++)
		{
			cout<<matriz_a[i][j]<<" ";
		}
		cout<<"|";
		cout<<"\n";
	}
	for (int i=0; i<3; i++)
	{
		for (int j=0; j<3; j++)
		{
			cout<<"Ingresa un valor en la posicion ("<<i<<","<<j<<")";
			cin>>matriz_b[i][j];	
		}
	}
	for (int i=0; i<3; i++) //mostrando matriz
	{
		cout<<"| ";
		for (int j=0; j<3; j++)
		{
			cout<<matriz_b[i][j]<<" ";
		}
		cout<<"|";
		cout<<"\n";
	}
	//MULTIPLICACION
	for(int i=0; i<3; i++)
	{
		for (int j=0; j<3; j++)
		{
			matriz_c[i][j]=0;
			for (int k=0; k<3; k++)
		{
			matriz_c[i][j]=(matriz_c[i][j]+(matriz_a[i][k]*matriz_b[k][j]));
		}
		
		}
	}
	cout<<endl<<"La matriz Resultado es: "<<endl;
	for (int i=0; i<3; i++) //mostrando matriz
	{
		cout<<"| ";
		for (int j=0; j<3; j++)
		{
			cout<<matriz_c[i][j]<<" ";
		}
		cout<<"|";
		cout<<"\n";
	}
	return 0;
}
