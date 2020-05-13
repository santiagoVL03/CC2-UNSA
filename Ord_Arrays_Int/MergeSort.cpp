#include<iostream>
using namespace std;

void merge(int arr[], int l, int m, int r)
{
    int i, j, k;
    int n1 = m - l + 1;
    int n2 =  r - m;
    /* creamos arrays temporales*/
    int L[n1], R[n2];
    /* copiamos la info a L[] y R[] */
    for (i = 0; i < n1; i++)
        L[i] = arr[l + i];
    for (j = 0; j < n2; j++)
        R[j] = arr[m + 1+ j];

    /* fusionar los arrays temporales en arr[l..r]*/
    i = 0; // Indice inicial del 1er subarray
    j = 0; // Indice inicial del 2de subarray
    k = l; // Indice inicial del 3er subarray
    while (i < n1 && j < n2){
        if (L[i] <= R[j]){
            arr[k] = L[i];
            i++;
        }
        else{
            arr[k] = R[j];
            j++;
        }
        k++;
    }
    /* Copia los elementos restantes de L
    si hay alguno */
    while (i < n1){
        arr[k] = L[i];
        i++;
        k++;
    }
    /* Copia los elementos restantes de L
    si hay alguno */
    while (j < n2){
        arr[k] = R[j];
        j++;
        k++;
    }
}

/* l es para el indice de la izquierda y r para el indice de la derecha del
    subarray que sera ordenado*/
void mergeSort(int arr[], int l, int r)
{
    if (l < r)
    {

        int m = l+(r-l)/2;

        // Ordenamos
        mergeSort(arr, l, m);
        mergeSort(arr, m+1, r);

        merge(arr, l, m, r);
    }
}

void printArray(int A[], int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%d ", A[i]);
    printf("\n");
}


int main()
{
    int arr[] = {12, 11, 13, 5, 6, 7};
    int arr_size = 6;

    cout<<"actual array \n";
    printArray(arr, arr_size);

    mergeSort(arr, 0, arr_size - 1);

    cout<<"array ordenado  ";
    printArray(arr, arr_size);
    return 0;
}
