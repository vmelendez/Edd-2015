#include <stdio.h>

//PROGRAMA EN C QUE MULTIPLICA MATRICES DE 3x3

int main ()
{
	float matriz_a[3][3];
	float matriz_b[3][3];
	float matriz_c[3][3];

	for (int i=0; i<3; i++)
	{
		for (int j=0; j<3; j++)
		{
			printf ("Ingresa un valor en la posicion (%d,%d):",i,j);
			scanf ("%f",&matriz_a[i][j]);	
		}
	}
	for (int i=0; i<3; i++) //mostrando matriz
	{
		printf ("| ");
		for (int j=0; j<3; j++)
		{
			printf ("%.2f  ",matriz_a[i][j]);
		}
		printf ("|");
		printf ("\n");
		
	}
	for (int i=0; i<3; i++)
	{
		for (int j=0; j<3; j++)
		{
			printf ("Ingresa un valor en la posicion (%d,%d):",i,j);
			scanf ("%f",&matriz_b[i][j]);	
		}
	}
	for (int i=0; i<3; i++) //mostrando matriz
	{
		printf ("| ");
		for (int j=0; j<3; j++)
		{	
			printf ("%.2f  ",matriz_b[i][j]);
		}
		printf ("|");
		printf ("\n");
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
	printf ("\n");
	printf ("La Matriz resultado es:\n");
	for (int i=0; i<3; i++) //mostrando matriz
	{
		printf ("| ");
		for (int j=0; j<3; j++)
		{
			printf ("%.2f  ",matriz_c[i][j]);
		}
		printf ("|");
		printf ("\n");
	}
	return 0;
}
