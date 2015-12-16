#include <iostream>

using namespace std;

int resultado,n,m;

int ackerman (int m,int n)
{
	if (m==0)
	{
		return resultado = (n+1);
	}
	else
	{
		if(n==0)
		{
			return resultado = ackerman(m-1,1);
		}
		else
		{
			return resultado = ackerman(m-1,ackerman(m,n-1));
		}
	}
}

int main()
{
	cout << "funcion de ackerman:";
	cin >> m;
	cin >> n;
	
	cout << ackerman(m,n);
	return 0;
}
