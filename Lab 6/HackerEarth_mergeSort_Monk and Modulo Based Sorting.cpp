#include<iostream>
using namespace std;

void merge(long long arr[], long long l, long long m, long long r,long long mod) 
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
        if (L[i]%mod <= R[j]%mod) 
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
  
void mergeSort(long long arr[], long long l, long long r,long long k) 
{ 
    if (l < r) 
    { 
        // Same as (l+r)/2, but avoids overflow for 
        // large l and h 
        long long m = l+(r-l)/2; 
  
        // Sort first and second halves 
        mergeSort(arr, l, m,k); 
        mergeSort(arr, m+1, r,k); 
  
        merge(arr, l, m, r,k); 
    } 
} 

void printArray(long long arr[],long long n)
{
	long long i;
	printf("%lld",arr[0]);
	for(int i=1;i<n;i++)
	{
		printf(" %lld",arr[i]);
	}
	printf("\n");
}

int main()
{
	long long N;
	long long k;
	
	scanf("%lld %lld",&N,&k);
	long long arr[N];
	long long subArr[N];
	
	for(int i=0;i<N;i++)
	{
		scanf("%lld",&arr[i]);
		//subArr[i] = arr[i] % k;
	}
	mergeSort(arr,0,N-1,k);
	printArray(arr,N);
}
