#include<bits/stdc++.h>
using namespace std;

int main()
{
	ofstream mainFile("mainFile.txt");
	
	//int numbers[100];
	//string line;
	
	if (mainFile.is_open())
  	{
  		//int i=0;
  		
    	for(int i=0;i<100;i++){
    		mainFile<< rand() % 100 <<endl;		
		}
  		mainFile.close();
  	}
  	else cout << "Unable to open file";
}
