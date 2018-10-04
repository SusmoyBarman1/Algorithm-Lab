#include<iostream>
using namespace std;

void merge(int arr[], int l, int m, int r) 
{ 
    int i, j, k; 
    int n1 = m - l + 1; 
    int n2 =  r - m; 
  
    int L[n1], R[n2]; 
  
    for (i = 0; i < n1; i++)
    {
        L[i] = arr[l + i];
    }
         
    for (j = 0; j < n2; j++)
    {
        R[j] = arr[m + 1+ j];
    }
         
    i = 0; 
    j = 0;
    k = l; 
    while (i < n1 && j < n2) 
    { 
        if (L[i] <= R[j]) 
        { 
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

void mergeSort(int arr[], int l, int r) 
{ 
    if (l < r) 
    { 
        int m = l+(r-l)/2; 
  
        mergeSort(arr, l, m); 
        mergeSort(arr, m+1, r); 
  
        merge(arr, l, m, r); 
    } 
} 

int main()
{
    int t;
    cin>>t;
    
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        mergeSort(arr,0,n-1);
        int elements = n-m;
        int max_element = n-elements;
        int min_element = elements;
        int max_sum = 0;
        int min_sum = 0;
        int diff = 0;
        for(int i=n-1;i>=max_element;i--)
        {
        	max_sum += arr[i];
		}
		for(int i=0;i<min_element;i++)
		{
			min_sum += arr[i];
		}
		diff = max_sum - min_sum;
		//cout<<max_sum<<" "<<min_sum<<endl;
		cout<<diff<<endl;
	}
    return 0;
}
