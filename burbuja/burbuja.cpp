#include <stdio.h>
#include <conio.h>
#define SIZE 5

int main (void)
{
	int vector(SIZE);
	int i,j,temp;//temp realizara los intercambios
	printf ("Ingrese los %d numeros que seran ordenados\n", SIZE);
	
	for (i=0; i<SIZE; i++)
	{
		printf("%d:", i+1);
		scanf("%d",&vector[i]);
		printf("\n");
	}
	for (i=0;i<SIZE;i++)
	{
		for (j=i+1;j<SIZE;j++)
		{
			if (vector[j]<vector[i])
			{
				temp=vector[j];
				vector[j]=vector[i];
				vector[i]=temp;
		}
	}
}
pinrtf ("Los numeros ordenados son:\n");
for (i=0;i<SIZE;i++)
{
	printf("%d", vector[i]);
	
}
printf ("\n");
getch ();
