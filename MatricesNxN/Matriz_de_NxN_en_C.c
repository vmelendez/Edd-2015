#include <stdio.h>

int main ()
{
	int 
	n=0;
	printf ("Ingresa el tamanio de la matriz: ");
	scanf ("%d",&n);
	
	float matriz_a[n][n];
	float matriz_b[n][n];
	float matriz_c[n][n];


	for (int i=0; i<n; i++)
	{
		for (int j=0; j<n; j++)
		{
			printf ("Ingresa un valor en la posicion (%d,%d):",i,j);
			scanf ("%f",&matriz_a[i][j]);	
		}
	}
	for (int i=0; i<n; i++) //mostrando matriz
	{
		printf ("| ");
		for (int j=0; j<n; j++)
		{
			printf ("%.2f  ",matriz_a[i][j]);
		}
		printf ("| ");
		printf ("\n");
	}
	for (int i=0; i<n; i++)
	{
		for (int j=0; j<n; j++)
		{
			printf ("Ingresa un valor en la posicion (%d,%d):",i,j);
			scanf ("%f",&matriz_b[i][j]);	
		}
	}
	for (int i=0; i<n; i++) //mostrando matriz
	{
		printf ("| ");
		for (int j=0; j<n; j++)
		{
			printf ("%.2f  ",matriz_b[i][j]);
		}
		printf ("| ");
		printf ("\n");
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
	printf ("\n");
	printf ("La matriz resultado es: \n");
	for (int i=0; i<n; i++) //mostrando matriz
	{
		printf ("| ");
		for (int j=0; j<n; j++)
		{
			printf ("%.2f  ",matriz_c[i][j]);
		}
		printf ("| ");
		printf ("\n");
	}
	return 0;
}
