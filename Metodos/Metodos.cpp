#include <cstdlib>
#include <iostream>
#include <cstdio>
#include<time.h>
#include<sys/time.h>

using namespace std;

int burbuja(){
int i,j,auxiliar,Dimension;
struct timeval ti, tf;
double tiempo;

cout<<"Dame las Dimensiones del Arreglo"<<endl;
cin>>Dimension;

int Arreglo[Dimension];//{6,7,1,5,2}

for(i = 0; i < Dimension; i++){
    cout<<"Dame los Valores del Arreglo: ";
    cin>>Arreglo[i];

}
cout<<"\n"<<endl;
for(i = 0; i < Dimension; i++){
    cout<<"Los Valores son: "<< Arreglo[i] <<endl;
}

cout<<"\n"<<endl;

 gettimeofday(&ti, NULL);   // Instante inicial

for ( i = 0; i < Dimension - 1; i++){
    for(j = i+1; j < Dimension ; j++){
        if (Arreglo[i] > Arreglo[j]){
            auxiliar = Arreglo[i];
            Arreglo[i] = Arreglo[j];
            Arreglo[j]= auxiliar;
        }
    }
}
system("cls");
 gettimeofday(&tf, NULL);   // Instante final
tiempo =(tf.tv_sec - ti.tv_sec)*1000 + (tf.tv_usec - ti.tv_usec)/1000.0;

for ( i = 0; i < Dimension; i++ ){
    cout<<"El Acomodo del Arreglo es: "<<Arreglo[i]<<endl;
}
printf("El metodo burbuja ha tardado: %g milisegundos\n", tiempo);

}

void seleccion_directa()
{
    struct timeval ti, tf;
    double tiempo;
    cout << "dame la dimension del arreglo"<<endl;
    int n;
    cin >> n;
    int a[n]; // {14,8,9,4,6,3,15,1,12,20,7,18,2,5,10,11,13,16,17,19};
    for (int cont = 0; cont < n; cont++)
    {
        cout << "Dame el valor para la posicion "<<cont+1<<endl;
        cin >> a[cont];
    }
	cout << "arreglo desordenado" << endl;
	for (int x = 0 ; x<n ; x++)
	{
		cout << a[x] <<endl;
	}
    gettimeofday(&ti, NULL);   // Instante inicial
    for (int i = 0; i<(n-1) ; i++)
	{
		int menor = a[i];
		int k = i;

		for (int j = (i+1) ; j < n ; j++)
		{
			if (a[j] < menor )
			{
				menor = a[j];
				k=j;
			}
		}
		a[k] = a[i];
		a[i] = menor;
	}
    system("cls");
    gettimeofday(&tf, NULL);   // Instante final
    tiempo =(tf.tv_sec - ti.tv_sec)*1000 + (tf.tv_usec - ti.tv_usec)/1000.0;
    cout << endl << "arreglo ordenado" << endl;
	for (int x = 0 ; x<n ; x++)
	{
		cout << a[x] <<endl;
	}
	printf("El metodo de seleccion directa ha tardado: %g milisegundos\n", tiempo);
}

void Insertion_directa()
{
    struct timeval ti, tf;
    double tiempo;
    int i, j, temp;
    int n;
    printf("ORDENACION POR INSERCION DIRECTA\n\n");
    printf("Tama\xA4o de Arreglo: ");
    scanf("%i", &n);

    int a[n];

    for(int i = 0; i < n; i++){
        printf("Numero %i: ", i+1);
        scanf("%i", &a[i]);
    }
    gettimeofday(&ti, NULL);   // Instante inicial
    for(i = 1; i < n; i++){

        temp = a[i];
        j = i-1;

        while((a[j]>temp)&&(j>=0)){
            a[j+1] = a[j];
            j--;
        }

        a[j+1] = temp;

        printf("\n");
        for(int i = 0; i < n; i++)
            {
            printf("%i ", a[i]);
            }
    }
    system("cls");
    gettimeofday(&tf, NULL);   // Instante final
    tiempo =(tf.tv_sec - ti.tv_sec)*1000 + (tf.tv_usec - ti.tv_usec)/1000.0;
     printf("Arreglo ordenado\n");
     for(int i = 0; i < n; i++)
            {
            printf("%i \n", a[i]);
            }
    printf("El proceso de inserccion directa ha tardado: %g milisegundos\n", tiempo);


}

void Shell_sort()
{
     struct timeval ti, tf;
    double tiempo;
    cout << "dame la dimension del arreglo"<<endl;
    int n;
    cin >> n;
    int array[n];
    for (int cont = 0; cont < n; cont++)
    {
        cout << "Dame el valor para la posicion "<<cont+1<<endl;
        cin >> array[cont];
    }
    int i1=0;

    cout <<"Datos sin ordenar"<<endl;
    for (int contador = 0; contador <= 4; contador++){
        cout <<array[contador]<<endl;
    }
    int i, j, increment, temp,number_of_elements=n;
    gettimeofday(&ti, NULL);   // Instante inicial
    for(increment = number_of_elements/2;increment > 0; increment /= 2)
        {
                for(i = increment; i<number_of_elements; i++)
                {
                        temp = array[i];
                        for(j = i; j >= increment ;j-=increment)
                        {
                                if(temp < array[j-increment])
                                {
                                        array[j] = array[j-increment];
                                }
                                else
                                {
                                        break;
                                }
                        }
                        array[j] = temp;
                }
        }
    system("cls");
    gettimeofday(&tf, NULL);   // Instante final
    tiempo =(tf.tv_sec - ti.tv_sec)*1000 + (tf.tv_usec - ti.tv_usec)/1000.0;
  cout<<"Datos Ordenados"<<endl;;
    for(i1=0;i1<n;i1++)
    {
        cout<<array[i1]<<endl;;
    }
    printf("El proceso Shelsort ha tardado: %g milisegundos\n", tiempo);
}

int HeapSort()
{
      struct timeval ti, tf;
    double tiempo;
    int j,item,temp,i,k,n;
    cout<<"Ingresa la cantidad de elementos del arreglo: ";
    cin>>n;
    int A[n];
    for(i=1;i<=n;i++){
    cout <<"Dame el valor para "<<i<<endl;
    cin >> A[i];
    }
    gettimeofday(&ti, NULL);   // Instante inicial
    for(k=n;k>0;k--)
    {
        for(i=1;i<=k;i++)
        {
            item=A[i];
            j=i/2;
            while(j>0 && A[j]<item)
            {
                A[i]=A[j];
                i=j;
                j=j/2;
            }
            A[i]=item;
        }
        temp=A[1];
        A[1]=A[k];
        A[k]=temp;
    }
    system("cls");
    gettimeofday(&tf, NULL);   // Instante final
    tiempo =(tf.tv_sec - ti.tv_sec)*1000 + (tf.tv_usec - ti.tv_usec)/1000.0;
    cout<<"El orden es:"<<endl;
    for(i=1;i<=n;i++)
    cout<<A[i] << endl;
    printf("El proceso Heap Sort ha tardado: %g milisegundos\n", tiempo);

    return 0;
}

void radixsort()
{
    struct timeval ti, tf;
    double tiempo;
    cout << "dame el numero de elementos"<<endl;
    int n;
    cin >>n;
    int arr[n];
    for (int i = 0; i < n; i++){
        cout <<"dame el valor para la posicion: "<<i+1<<endl;
        cin >>arr[i];
    }
    cout <<"Elementos sin ordenar"<<endl;
    gettimeofday(&ti, NULL);   // Instante inicial
    for (int i = 0; i < n; i++)
        cout <<arr[i]<<endl;

        int mx = arr[0];
        for (int i = 1; i < n; i++){
        if (arr[i] > mx){
            mx = arr[i];
            }
        }

    for (int exp = 1; mx/exp > 0; exp *= 10)
    {
         int output[n];
        int i, count[10] = {0};


    for (i = 0; i < n; i++)
        count[ (arr[i]/exp)%10 ]++;

    for (i = 1; i < 10; i++)
        count[i] += count[i - 1];

    for (i = n - 1; i >= 0; i--)
    {
        output[count[ (arr[i]/exp)%10 ] - 1] = arr[i];
        count[ (arr[i]/exp)%10 ]--;
    }

    for (i = 0; i < n; i++)
        arr[i] = output[i];
    }
    system("cls");
    gettimeofday(&tf, NULL);   // Instante final
    tiempo =(tf.tv_sec - ti.tv_sec)*1000 + (tf.tv_usec - ti.tv_usec)/1000.0;
     cout <<"Arreglo ordenado"<<endl;
    for (int i = 0; i < n; i++)
        cout << arr[i] <<endl;;
    printf("EL proceso Radix Sort ha tardado: %g milisegundos\n", tiempo);

}

void quickSort(int a[], int first, int last);
int pivot(int a[], int first, int last);
void swap(int& a, int& b);
void swapNoTemp(int& a, int& b);
void print(int array[], const int& N);

int main_quicksort()
{
    struct timeval ti, tf;
    double tiempo;
    cout <<"Dame la dimension del arreglo"<<endl;
    int N;
    cin >> N;
    int test[N];
    for (int i = 0; i < N; i++){
        cout <<"Dame el valor para la posiicion: "<<i+1<<endl;
        cin >> test[i];
    }

    cout << " Antes de ordenar : " << endl;
    print(test, N);
    gettimeofday(&ti, NULL);   // Instante inicial
    quickSort(test, 0, N-1);
    system("cls");
    gettimeofday(&tf, NULL);   // Instante final
    tiempo =(tf.tv_sec - ti.tv_sec)*1000 + (tf.tv_usec - ti.tv_usec)/1000.0;
    cout << endl << endl << " Despues de ordenar : " << endl;
    print(test, N);
    printf("Has tardado: %g milisegundos\n", tiempo);
    return 0;
}

void quickSort( int a[], int first, int last )
{
    int pivotElement;

    if(first < last)
    {
        pivotElement = pivot(a, first, last);
        quickSort(a, first, pivotElement-1);
        quickSort(a, pivotElement+1, last);
    }
}

int pivot(int a[], int first, int last)
{
    int  p = first;
    int pivotElement = a[first];

    for(int i = first+1 ; i <= last ; i++)
    {
        /* If you want to sort the list in the other order, change "<=" to ">" */
        if(a[i] <= pivotElement)
        {
            p++;
            swap(a[i], a[p]);
        }
    }

    swap(a[p], a[first]);

    return p;
}

void swap(int& a, int& b)
{
    int temp = a;
    a = b;
    b = temp;
}

void swapNoTemp(int& a, int& b)
{
    a -= b;
    b += a;// b gets the original value of a
    a = (b - a);// a gets the original value of b
}

void print(int a[], const int& N)
{
    for(int i = 0 ; i < N ; i++)
        cout << "array[" << i << "] = " << a[i] << endl;
}

void mergesort(int *v, int i, int f);
void merge(int *v, int i, int m, int f);

int main_mergesort() {

 struct timeval ti, tf;
 double tiempo;
 int *v, n;
 printf("Tamanio del arreglo: ");
 scanf("%d", &n);

 v = new int[n];
 for(int i=0; i<n; i++) {
  printf("Elemento %d: ", i+1);
  scanf("%d", &v[i]);
 }

 gettimeofday(&ti, NULL);   // Instante inicial
 mergesort(v, 0, n-1);
 system("cls");
 gettimeofday(&tf, NULL);   // Instante final
 tiempo =(tf.tv_sec - ti.tv_sec)*1000 + (tf.tv_usec - ti.tv_usec)/1000.0;
 cout<<"Despues de ordenar"<<endl;
 for(int i=0; i<n; i++)
 printf("%d \n", v[i]);
 printf("El proceso Merge Sort ha tardado: %g milisegundos\n", tiempo);
 return 0;
}

void mergesort(int *v, int i, int f) {
 if(i!=f) {
  int m = (i+f)/2;
  mergesort(v, i, m);
  mergesort(v, m+1, f);
  merge(v, i, m, f);
 }
}

void merge(int *v, int i, int m, int f) {
 int *aux = new int[m-i+1];
 for(int j=i; j<=m; j++)
  aux[j-i] = v[j];

 int c1=0, c2=m+1;
 for(int j=i; j<=f; j++) {
  if(aux[c1] < v[c2]) {
   v[j] = aux[c1++];
   if(c1==m-i+1)
    for(int k=c2; k<=f; k++)
     v[++j] = v[k];
  }
  else {
   v[j] = v[c2++];
   if(c2==f+1)
    for(int k=c1; k<=m-i; k++)
     v[++j] = aux[k];
  }
 }
}

void binaria()
{
     int v[10]={101,215,325,410,502,507,600,610,612,670};
    int n=10;
    int x;

    printf("----------BUSQUEDA BINARIA----------\n\n");
    printf("Arreglo = [101] [215] [325] [410] [502] [507] [600] [610] [612] [670]\n");
    printf("Posicion    0     1     2     3     4     5     6     7     8     9\n");
    printf("Ingresa el valor a buscar en el arreglo\n");
    scanf("%i",&x);
    int izq, der, cen;

    izq=1;
    der=n;
    cen=((izq+der)/2);

    while((izq <= der)&&(x!=v[cen-1]))
    {
        if(x > v[cen-1])
            izq=cen+1;
        else
            der=cen-1;

        cen=((izq+der)/2);
    };

    if(izq > der)
        printf("El valor no se encuentra en el arreglo\n");
    else
        printf("El valor se encuentra en la posicion %i del arreglo\n",cen-1);
}


int main()
{

    int opcion;
    int metodo;
    int metodo1;
    do
    {
         system("cls");
    cout << "Que quieres hacer? \n1.-Ordenamiento de un arreglo\n2.-Busqueda en un arreglo\n3.-Salir"<<endl;;
    cin >> opcion;
        switch (opcion)
        {
            system("cls");
            case 1: system("cls"); cout << "Ordenamiento de un arreglo"<<endl;
            cout << "Que metodo deseas utilizar?\n1.-Burbuja\n2.-Seleccion Directa\n3.-Inserccion Directa";
            cout<<"\n4.-QuickSort\n5.-Shell Sort\n6.-Heap Sort\n7.-Radix\n8.-Merge Sort"<<endl;
            cin >> metodo;
            system("cls");
            switch (metodo)
            {
                case 1: cout << "Burbuja"<<endl;
                        burbuja();
                        system("pause");
                break;
                case 2: cout << "Seleccion Directa"<<endl;
                        seleccion_directa();
                        system("pause");
                break;
                case 3: cout << "Inserccion Directa"<<endl;
                        Insertion_directa();
                        system("pause");
                break;
                case 4: cout << "Quick Sort"<<endl;
                        main_quicksort();
                        system("pause");
                break;
                case 5: cout << "Shell Sort"<<endl;
                        Shell_sort();
                        system("pause");
                break;
                case 6: cout << "Heap Sort"<<endl;
                        HeapSort();
                        system("pause");
                break;
                case 7: cout << "Radix"<<endl;
                    radixsort();
                    system("pause");
                break;
                case 8: cout << "Merge Sort"<<endl;;
                    main_mergesort();
                    system("pause");
                break;
                default: cout << "Error, no existe esa opcion,intentalo de nuevo"<<endl;
                 system("pause");
                break;


            }
            break; //break de la opcion 1
        case 2: system("cls"); cout << "Busqueda de un elemento"<<endl;
                cout <<"Que metodo deseas utilizar?"<<endl;
                cout <<"1.-Secuencial\n2.-Binaria\n3.-Hash"<<endl;
                cin >> metodo1;
                switch(metodo1)
                {
                    case 1: cout <<"Busqueda Secuencial"<<endl;
                    system("pause");
                    break;
                    case 2: cout <<"Busqueda Binaria"<<endl;
                            binaria();
                            system("pause");
                    break;
                    case 3: cout <<"Busqueda Hash"<<endl;
                    system("pause");
                    break;
                    default: cout <<"Error, no existe esa opcion, intentalo de nuevo"<<endl;
                    system("pause");
                    break;
                }
                break; //break de la opcion 2

        }
    }while (opcion != 3);
}
