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

int main()
{
	int N;
	cin>>N;
	long long arr_1[N];
	long long arr_2[N];
//	long long checking_arr[N];
	
	for(int i=0;i<N;i++)
	{
		cin>>arr_1[i];
	}
	for(int i=0;i<N;i++)
	{
		cin>>arr_2[i];
	}
	mergeSort(arr_1,0,N-1);
	mergeSort(arr_2,0,N-1);
	bool check = false;
	
	for(int i=0;i<N && !check;i++)
	{
		if(arr_1[i] != arr_2[i])
		{
			check = true;
		}
	}
	if(!check)
	{
		cout<<"Yes"<<endl;
	}
	else 
	{
		cout<<"No"<<endl;
	}
	
	return 0;
}
