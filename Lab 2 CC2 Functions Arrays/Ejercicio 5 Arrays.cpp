#include <iostream>

using namespace std;

void Concatenar ( char A[], char B[], int a, int b )
{
    for (int i =0; i<a ; i++)
        B[ i+b ] = A [ i ];
}

int ContarTam ( char A[] )
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
    gets ( A ) ; gets ( B ) ;
    int TamA = ContarTam (A);
    int TamB = ContarTam (B);
    Concatenar ( A , B , TamA,TamB );
    cout << B ;

}
