#include <iostream>

using namespace std;

void imprimirLis (int a[], int n)
{
    for (int i = 0 ; i<n; i++)
        cout << "EL numero a[" << i+1 << "] es " << a[i] << endl;
}

int getMax(int arr[], int n)
{
    int mx = arr[0];
    for (int i = 1; i < n; i++)
        if (arr[i] > mx)
            mx = arr[i];
    return mx;
}

void countSort(int arr[], int n, int exp)
{
    int output[n];
    int i, c[10] = {0};

    for (i = 0; i < n; i++)
        c[ (arr[i]/exp)%10 ]++;

    for (i = 1; i < 10; i++)
        c[i] += c[i - 1];

    for (i = n - 1; i >= 0; i--)
    {
        output[c[ (arr[i]/exp)%10 ] - 1] = arr[i];
        c[ (arr[i]/exp)%10 ]--;
    }

    for (i = 0; i < n; i++)
        arr[i] = output[i];
}


void radixsort(int arr[], int n)
{

    int m = getMax(arr, n);

    for (int exp = 1; m/exp > 0; exp *= 10)
        countSort(arr, n, exp);
}



int main ()
{
    int a[] = {88,995,12,53,44,37,16,105,208}, n = 9;

    radixsort ( a, n );
    imprimirLis (a,n);
    return 0;

}
