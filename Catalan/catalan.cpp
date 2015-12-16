#include <iostream>

using namespace std;
int n;
int catalan (int n)
{
	if (n == 1)
	{
		return 1;
	}
	else
	{
		for (int i = 1 ; i < n ; i++)
		{
			return (2 * (2*n - 1) * catalan(n - 1)) / (n + 1); 
		}	
	}
}

int main ()
{
	cout << "posicion catalan : ";
	cin >> n;
	
	cout << catalan(n);
	return 0;
}
