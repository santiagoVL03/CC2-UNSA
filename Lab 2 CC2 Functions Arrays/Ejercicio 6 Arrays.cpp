#include <iostream>

using namespace std;

void Copiar ( char A[], char B[], int a )
{
    for ( int i = 0; i < a ; i++ )
        B[ i ] = A [ i ];
}

int ContarTamIte ( char A[] )
{
    int i=0;
    while ( A[i] != '\0' )
    {
        i=i+1;
    }
    return i;
}


int main ()
{
    char A[300], B [300];
    gets ( A ) ;
    int TamA = ContarTamIte (A);
    Copiar ( A , B, TamA );
    cout << B ;

}
