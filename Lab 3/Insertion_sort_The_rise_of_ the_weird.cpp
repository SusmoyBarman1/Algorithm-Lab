#include<iostream>
using namespace std;

void insertionSort(int arr[],int n)
{
   int i, key, j;
   for (i = 1; i < n; i++)
   {
       key = arr[i];
       j = i-1;
 
       while (j >= 0 && arr[j] > key)
       {
           arr[j+1] = arr[j];
           j = j-1;
       }
       arr[j+1] = key;
   }
}

int main()
{
	int n;
	cin>>n;
	int arr[n];
	int num;
	int totalEven=0;
	int totalOdd=0;
	
	for(int i=0;i<n;i++)
	{
		cin>>num;
		arr[i] = num;
		if(num%2==0)
		{
			totalEven += num;
		}
		else
		{
			totalOdd += num;
		}
	}
	insertionSort(arr,n);
	int count=0;
	for(int i=0;i<n;i++)
	{
		if(count>0)
		{
			cout<<" ";
		}
		if(arr[i]%2==0)
		{
			cout<<arr[i];	
		}
		count++;
	}
	cout<<" "<<totalEven<<endl;
	
	for(int i=0;i<n;i++)
	{
		if(count>0)
		{
			cout<<" ";
		}
		if(arr[i]%2==1)
		{
			cout<<arr[i];	
		}
		cout<<arr[i];
		count++;
	}
	cout<<" "<<totalOdd;
	
	
	return 0;
}
