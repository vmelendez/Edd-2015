#include <iostream>
int fibonacci(int n)
{
    if (n<2)
        return n;
    else
        return fibonacci(n-1) + fibonacci(n-2);
}
int main()
{
    int num=0,res=0;
    printf("SERIE FIBONACCI\n");
    printf("Ingresa el numero de valores que se imprimiran:\n");scanf("%i",&num);
    printf ("\n");
    for(int i=0;i<=num-1;i++)
    {
        res = fibonacci(i);
        printf("%i  ", res);
    }
    return 0;
}
