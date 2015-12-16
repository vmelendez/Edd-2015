#include <iostream>
#include <stdlib.h>

using namespace std;
int n;
int factorial_rec(int n)
{
	int fac = 1;
	if (n<2)
	{
		fac =  fac * 1;
	}
	else
	{
		fac = n * factorial_rec(n-1);
	}
	return fac;
}

int main ()
{
	cout << "ingrese el numero para obtener el factorial";
	cin >> n;
	cout << factorial_rec(n);
	return 0;
}
