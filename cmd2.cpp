#include<iostream>
#include<string.h>
using namespace std;

int main(int argc,char** argv)
{	int i;

	if(argc==3)
	{
		i=strcmp(argv[1],argv[2]);
		
		if(i==0)
		{
			cout<<"\nStrings are same.";
		}
		else
		{
			cout<<"\nStrings are NOT same.";
		}
	
	}
	else
	{
		cout<<"\nLess number of arguments!!";
	}


}
