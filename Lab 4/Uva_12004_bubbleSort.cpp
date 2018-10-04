#include<iostream>
using namespace std;

int main()
{
	long long test;
	cin>>test;
	
	for(int i=0;i<test;i++)
	{
		long long num;
		cin>>num;
		
		long long ans = num*(num-1);
		if(ans%4==0)
		{
			cout<<"Case "<<i+1<<": "<<ans/4<<endl;
		}
		else
		{
			cout<<"Case "<<i+1<<": "<<ans/2<<"/2"<<endl;
		}
	}
	
	return 0;
}
