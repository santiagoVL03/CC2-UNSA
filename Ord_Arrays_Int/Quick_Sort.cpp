#include <iostream>
using namespace std;

void swap(int a[], int b[]){
	int t = a[0];
	a [0] = b[0];
	b [0] = t;
}

int Quick (int arr[], int a, int b) {
	int piv = arr[b];
	int i = (a - 1);

	for (int j = a; j <= b - 1; j++) {
		if (arr[j] < piv) {
			i++;
			swap(&arr[i], &arr[j]);
		}
	}
	swap(&arr[i + 1], &arr[b]);
	return (i + 1);
}

void Quicksort(int arr[], int a, int b){
	if (a < b){
		int pi = Quick(arr, a, b);
		Quicksort(arr, a, pi - 1);
		Quicksort(arr, pi + 1, b);
	}
}

void printArray(int arr[], int n)
{
	int i;
	for (i = 0; i < n; i++)
		cout << arr[i] << " ";
	cout <<'\n';
}

int main()
{
	int arr[] = {10, 7, 8, 9, 1, 5};
	int n = 6;
	Quicksort(arr, 0, n - 1);
	cout << "Arreglo Ordenado: \n";
	printArray(arr, n);
	return 0;
}

