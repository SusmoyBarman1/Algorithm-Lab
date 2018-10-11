#include<bits/stdc++.h>
using namespace std;

int binarySearch(int arr[],int low,int high,int key)
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
	int test;
	cin>>test;
	int arr[test];
	
	for(int i=0;i<test;i++)
	{
		cin>>arr[i];
	}
	//sort(arr,arr+test);
	
	int test2;
	cin>>test2;
	
	while(test2--)
	{
		int index;
		int key;
		long long sum=0;
		int count = 0;
		cin>>key;
		
		for(int j=0;j<test;j += 100)
		{
			int bound;
			if(j+99>=test)
			{
				bound = test - j-1;
			}
			else
			{
				bound = j+99;
			}
			if(key>arr[bound])
			{
				for(int i=j;i<=bound && i<test;i++)
				{
					sum += arr[i];
					count++;
				}
			}
			else
			{
				index = binarySearch(arr,j,bound,key);
			
				for(int i=j;i<=bound && i<=index && test;i++)
				{	
					//cout<<"i = "<<i<<endl;
					sum += arr[i];
					count++;
				}	
			}	
			//cout<<"j = "<<j<<" index: "<<index<<" bound: "<<bound<<" count = "<<count<<endl;
		}
		cout<<count<<" "<<sum<<endl;
	}
	
	return 0;
}
