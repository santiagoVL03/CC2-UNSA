#include <iostream>

using namespace std;

int ContarTamIte ( char A[] )
{
    int i=0;
    while ( A[i] != '\0' )
    {
        i=i+1;
    }
    return i;
}

int ContarTamRec ( int s, char A[] )
{
    if ( A[s] != '\0' )
    {
        s++;
        return ContarTamRec (s, A);
    }
    else
        return s;
}

int main ()
{
    char m[300];
    gets (m);

    cout << ContarTamIte (m) <<endl ;
    cout << ContarTamRec (0, m );
}

