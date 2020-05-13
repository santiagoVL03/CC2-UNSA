
#include <iostream>

using namespace std;

void imprimirLis (int a[], int n)
{
    for (int i = 0 ; i<n; i++)
        cout << "EL numero a[" << i+1 << "] es " << a[i] << endl;
}


void SelectionSort (int a[], int n)
{
    int menor = 0, temp;
    for (int i = 0; i < n-1; i++ )
    {
        menor = i;
        for (int j=i+1; j < n; j++ )
        {
            if ( a[j] < a [menor] )
                menor = j;
        }
        temp = a [ i ];
        a [ i ] = a [ menor ];
        a [ menor ] = temp;
    }
}

int main ()
{
    int a[] = {88,995,12,53,44,37,16,105,208}, n = 9;

    SelectionSort( a , n );
    imprimirLis (a,n);
    return 0;

}

