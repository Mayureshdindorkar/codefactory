#include<iostream>
#include<string>
using namespace std;


class student
{	private:int r,b;
		static int count;
		string name;

	public:student()
	{	
		cout<<" Enter name of student and roll no ";
		cin>>name>>r;
		count++;
	}

	void display()
	{	cout<<" Total number of students is "<<count;


	}

};	int student::count;




int main()
{	int i,n;
	cout<<" Enter number of students "<<endl;
	cin>>n;	
	student s[n];
	for(i=0;i<n;i++)
	{	student s[i];
	
	}
	s[2].display();
	
}	
	


