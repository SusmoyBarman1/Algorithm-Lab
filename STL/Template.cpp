#include<iostream>
using namespace std;

/*
int add(int a,int b)
{
	return a+b;
}

double add(double a,double b)
{
	return a+b;
}
*/

template<typename T>
T add(T a,T b){
	return a+b;
}

int main()
{
	int a = 10;
	int b = 20;
	//cout<<add(a,b)<<endl;
	cout<<add<int>(a,b)<<endl;
	
	double x = 10.10;
	double y = 20.20;
	//cout<<add(x,y)<<endl;
	cout<<add<double>(x,y)<<endl;
}
