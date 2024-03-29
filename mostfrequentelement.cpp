#include <iostream>
using namespace std;

int mostfrequentelement(int arr[],int n)
{
	
}




int main()
{
	int n;
	cout<<"enter the size of the array:";
	cin>>n;
	int arr[n];
	cout<<"enter the array elements:";
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	int freq=mostfrequentelement(arr,n);
	cout<<"mostfrequent:"<<freq;
}

