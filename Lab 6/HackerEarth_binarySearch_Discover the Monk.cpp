#include<bits/stdc++.h>
using namespace std;

long long binarySearch(long long arr[],long long low,long long high,long long key)
{
   while(low<=high)
   {
     	int mid=(low+high)/2;
     
     	if(arr[mid]<key)
     	{
        	 low=mid+1;
     	}
     	else if(arr[mid]>key)
     	{
        	 high=mid-1;
     	}
     	else
     	{
        	 return mid;
     	}
	}
   return -1;
 }
 
 int main()
 {
 	long long N,Q;
 	cin>>N>>Q;
 	long long arr[N];
 	
 	for(int i=0;i<N;i++)
 	{
		cin>>arr[i];
	}
	sort(arr, arr+N); 
	while(Q--)
	{
		long long key;
		cin>>key;
		long long check = binarySearch(arr,0,N-1,key);
		if(check!=-1)
		{
			cout<<"YES"<<endl;
		}
		else
		{
			cout<<"NO"<<endl;
		}
	}
 	
 	return 0;
 }
