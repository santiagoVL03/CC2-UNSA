#include<iostream>
using namespace std;
int k=0;

void Counting_Sort(int A[],int B[],int n)
{
	int C[k];
	for(int i=0;i<k+1;i++)
        /*Inicializamos c en 0*/
		C[i]=0;

	for(int j=1;j<=n;j++)
		/*Esto contara cada ocurrencia de todos los elementos x en A
		e incrementara en una posicion x en C*/
		C[A[j]]++;

	for(int i=1;i<=k;i++)
        /*Esto almacenara la ultima posicion del elemento i */
		C[i]+=C[i-1];

	for(int j=n;j>=1;j--)
	{

        /*Colocara los elementos en su indice respectivo*/

		B[C[A[j]]]=A[j];

		/*Apoya si hay elementos repetidos*/

		C[A[j]]=C[A[j]]-1;
	}
}
int main()
{
	int n;
	cout<<"Ingrese N :";
	cin>>n;

	/*A almacena los num del usuario */
	/*B Almacenara momentaneamente el array ordenado*/
	int A[n],B[n];

	for(int i=1;i<=n;i++)
	{
		cin>>A[i];
		if(A[i]>k)
		{
			k=A[i];
		}
	}
	Counting_Sort(A,B,n);

	for (int i=1;i<=n;i++)
        A[i]=B[i];

	for(int i=1;i<=n;i++)
	{
		cout<<A[i]<<" ";
	}

	cout<<endl;
	return 0;
}
