#include<iostream>
using namespace std;

template<class T>
class addition{
	public:
		//int a,b;
		T a,b;
		addition();
		T add();
		//int add();
};

template<class T>
addition<T>::addition()
{
	cin>>a>>b;
}

template<class T>
T addition<T>::add()
{
	return a+b;
}

int main()
{
	addition<float> add;
	cout<<add.add()<<endl;
}
