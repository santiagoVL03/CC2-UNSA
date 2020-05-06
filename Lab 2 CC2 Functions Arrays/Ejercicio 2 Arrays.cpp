#include <iostream>

using namespace std;

void ImprimirA ( int A[] , int n )
{
    for (int i = 0; i < n; i++)
        cout << A[i] << "\t" ;
    cout << endl;
}

void InvertirIte ( int A[] , int n )
{
    int B;
    for (int i = 0; i < ( n + 1 )/2 ; i++)
    {
        B = A [ i ];
        A [ i ] = A [ n - i - 1 ];
        A [ n - i - 1 ] = B ;
    }
    ImprimirA ( A , n );
}

void InvertirRec (int A[] , int n , int k )
{
    if ( k < ( n + 1 )/2 )
    {
        int B = A [ k ];
        A [ k ] = A [ n - k - 1 ];
        A [ n - k - 1 ] = B ;
        k++;
        InvertirRec( A , n , k );
    }
    else
        ImprimirA ( A , n );
}

int main ()
{
    int n;
    cin >> n;

    int Array1[50];
    for (int i = 0 ; i<n ; i++ )
        cin >> Array1[i];
    ImprimirA (Array1 ,n );
    //InvertirIte ( Array1 , n);        lo he puesto como comentario porque sino el InvertirRec volvera a invertir el array
    InvertirRec (Array1 , n, 0 );
}
