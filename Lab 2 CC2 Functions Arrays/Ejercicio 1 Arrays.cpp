#include <iostream>

using namespace std;

void ImprimirA ( int A[ 50 ] , int n )
{
    for (int i = 0; i < n; i++)
        cout << A[i] << "\t" ;
    cout << endl;
}

int SumArrIter (int A[ 50 ], int n)
{
    int s = 0 ;
    for (int i = 0; i < n; i++ )
        s += A[i];
    return s;
}

int SumArrRec (int cont,int sum, int A[], int n)
{
    if ( cont == n )
        return sum;
    else
    {
        sum = sum + A[cont];
        SumArrRec ( cont+1, sum, A, n );
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
    cout << SumArrIter ( Array1, n )<< endl;
    cout << SumArrRec ( 0, 0, Array1, n )<< endl;
    return 0;
}

