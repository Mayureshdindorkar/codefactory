#include<iostream>
using namespace std;

int main(int argc,char* argv[])
{       int i;
	if(argc!=0)
	cout<<"\nYou have entered "<<argc<<" number of arguments.";
	
	cout<<"\nEntered arguments are :\n";
	for(i=0;i<argc;i++)
	cout<<argv[i]<<"\t";
	
	 return 0;

}
