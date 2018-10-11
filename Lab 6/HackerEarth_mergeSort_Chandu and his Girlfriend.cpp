#include<iostream>
using namespace std;

void merge(long long arr[], long long l, long long m, long long r) 
{ 
    long long i, j, k; 
    long long n1 = m - l + 1; 
    long long n2 =  r - m; 
  
    
    int L[n1], R[n2]; 
  
    
    for (i = 0; i < n1; i++) 
        L[i] = arr[l + i]; 
    for (j = 0; j < n2; j++) 
        R[j] = arr[m + 1+ j]; 
  
    
    i = 0;  
    j = 0;  
    k = l; 
    while (i < n1 && j < n2) 
    { 
        if (L[i] <= R[j]) 
        { 
        	//cout<<L[i]<<endl;
            arr[k] = L[i]; 
            i++; 
        } 
        else
        { 
            arr[k] = R[j]; 
            j++; 
        } 
        k++; 
    } 
  
    while (i < n1) 
    { 
        arr[k] = L[i]; 
        i++; 
        k++; 
    } 
  
    while (j < n2) 
    { 
        arr[k] = R[j]; 
        j++; 
        k++; 
    } 
} 
  
void mergeSort(long long arr[], long long l, long long r) 
{ 
    if (l < r) 
    { 
        // Same as (l+r)/2, but avoids overflow for 
        // large l and h 
        long long m = l+(r-l)/2; 
  
        // Sort first and second halves 
        mergeSort(arr, l, m); 
        mergeSort(arr, m+1, r); 
  
        merge(arr, l, m, r); 
    } 
} 

void printArray(long long arr[],long long n)
{
	printf("%lld",arr[n-1]);
	for(int i=n-2;i>=0;i--)
	{
		printf(" %lld",arr[i]);
	}
	printf("\n");
}

int main()
{
	long long N;
	cin>>N;
	
	while(N--)
	{
		long long k;
		cin>>k;
		long long arr[k];
	
		for(int i=0;i<k;i++)
		{
			scanf("%lld",&arr[i]);
		}
		mergeSort(arr,0,k-1);
		printArray(arr,k);
	}
	
	return 0;
}
