#include <iostream>
using namespace std; 
  
int insertionSort(int arr[], int n) 
{ 
   int key;
   int count=0;
   int j; 
   for (int i = 1; i < n; i++) 
   { 
       key = arr[i]; 
       j = i-1; 
  
       while (j >= 0 && arr[j] > key) 
       { 
           arr[j+1] = arr[j]; 
           count++;
           j = j-1; 
       } 
       arr[j+1] = key; 
   } 
   return count;
} 
  
void printAns(int n) 
{ 
	cout<<"Optimal train swapping takes "<<n<<" swaps."<<endl;
} 
  
int main() 
{ 
    int n;
    cin>>n;
    while(n--)
    {
    	int size;
    	cin>>size;
    	int arr[size];
    	for(int i=0;i<size;i++)
    	{
    		cin>>arr[i];
		}
		int count = insertionSort(arr, size); 
    	printAns(count);
	} 
  
    return 0; 
} 
