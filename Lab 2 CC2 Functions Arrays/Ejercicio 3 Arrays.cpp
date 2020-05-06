#include <iostream>

using namespace std;

void ImprimirA ( int A[ 50 ] , int n )
{
    for (int i = 0; i < n; i++)
        cout << A[i] << "\t" ;
    cout << endl;
}

void Ordenar (int A[], int n)
{
    int c;

    for (int i = 0 ; i < n ;i++)
    {
        for (int j = i+1 ; j < n; j++)
        {
            if ( A[ i ] > A [ j ] )
            {
                c = A [ i ];
                A [ i ] = A [ j ];
                A [ j ] = c;
            }
        }
    }
}

int main ()
{
    int n;
    cin >> n;

    int Array1 [50 ];

    for (int i = 0 ; i<n ; i++ )
        cin >> Array1[i];

    ImprimirA ( Array1 , n );
    Ordenar (Array1, n);
    ImprimirA ( Array1 , n );
}
