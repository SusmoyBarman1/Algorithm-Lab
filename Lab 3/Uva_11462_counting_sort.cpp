#include<iostream>
using namespace std;

int main()
{
	//freopen("input.txt","r",stdin);
	//freopen("output.txt","w",stdout);
	long long n;
	
	while(cin>>n && n)
	{
		long long i,count=0;
	
		long long arr1[110];
		for(i=0;i<110;i++)
		{
			arr1[i] = 0;
		}
		
		for(i=0;i<n;i++)
		{
			long long a;
			cin>>a;
			arr1[a]++;
		}
	
		for(i=0;i<110;i++)
		{
			if(arr1[i]>0)
			{
				for(int j=0;j<arr1[i];j++)
				{
					if(count>0)
					{
						cout<<" ";
					}
					cout<<i;
 					count++;
				}
			}
		}
		cout<<endl;
	}
	
	return 0;
	
}
