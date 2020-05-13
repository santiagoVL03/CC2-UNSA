#include <iostream>

using namespace std;

void imprimirLis (int a[], int n)
{
    for (int i = 0 ; i<n; i++)
        cout << "EL numero a[" << i+1 << "] es " << a[i] << endl;
}

void InsertionSort (int a[],int n)
{
    int k, j;
    for (int i = 1; i < n; i++)
    {
        k = a [ i ] ;
        j = i - 1;

        while (j >= 0 && a[ j ] > k)
        {
            a[j + 1] = a[j];
            j = j - 1;
        }
        a[j + 1] = k;
    }
}

int getMax(int arr[], int n)
{
    int mx = arr[0];
    for (int i = 1; i < n; i++)
        if (arr[i] > mx)
            mx = arr[i];
    return mx;
}




int main ()
{
    int a[] = {88,995,12,53,44,37,16,105,208}, n = 9;

    InsertionSort( a , n );
    imprimirLis (a,n);
    return 0;

}
