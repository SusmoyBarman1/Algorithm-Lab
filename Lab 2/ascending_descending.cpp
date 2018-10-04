#include<bits/stdc++.h>
using namespace std;

int main()
{
	ifstream mainFile("mainFile.txt");
	ofstream ascend("ascend.txt");
	ofstream descend("descend.txt");
	
	int numbers[100];
	string line;
	
	if (mainFile.is_open())
  	{
  		int i=0;
  		
    	while ( getline (mainFile,line) && i<100)
    	{
      		stringstream geek(line);
      		int x = 0;
      		geek>>x;
      		numbers[i] = x;
      		i++;
   		}
  		mainFile.close();
  	}
  	else cout << "Unable to open file";
  	
  	for(int i=0;i<100;i++)
  	{
  		for(int j=i+1;j<100;j++)
		{
			if(numbers[i]>numbers[j])
			{
				int temp = numbers[i];
				numbers[i] = numbers[j];
				numbers[j] = temp;
			}  	
		}	
	}
	
	if (ascend.is_open())
  	{
  		for(int i=0;i<100;i++)
			ascend<<numbers[i]<<endl;
  		
		ascend.close();
  	}
  	else cout << "Unable to open file";
	
	if (descend.is_open())
  	{
  		for(int i=99;i>-1;i--)
			descend<<numbers[i]<<endl;
  		
		descend.close();
  	}
  	else cout << "Unable to open file";
	
	
//	string s = "12345"; 
//  
//    // object from the class stringstream 
//    stringstream geek(s); 
//  
//    // The object has the value 12345 and stream 
//    // it to the integer x 
//    int x = 0; 
//    geek >> x; 
//  
//    // Now the variable x holds the value 12345 
//    cout << "Value of x : " << x; 
//  
    return 0; 
	
	
}
