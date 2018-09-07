#include<iostream>
#include<string>
using namespace std;

struct node
{	
	node *prev;
	string name;
	int roll;
	node *next;
	
};

class list
{
	
	private:node *header;
			int pos;
			static int count;
	public:list()
		{	
			header=NULL;
		
		}
	
	void insertstart()
	{	node *nn;
		nn=new node;
		node *cn;
		cn=header;
		
		cout<<"\nEnter name ";
		cin>>nn->name;
		cout<<"\nEnter roll number.";
		cin>>nn->roll;
		
		nn->prev=nn->next=NULL;
		
		if(header==NULL)
		{	
			header=nn;
			nn->next=nn->prev=header;
		}
		
		else
		{
			nn->next=header;
			header->prev=nn;
			header=nn;
		
				
			cn->next=nn;
			nn->prev=cn;
		}
		
		put1();
	}
	
	void insertend()
	{
		node *cn,*nn;
		cn=header;
		
		nn=new node;
		
		cout<<"\nEnter name ";
		cin>>nn->name;
		cout<<"\nEnter roll number.";
		cin>>nn->roll;
		
		nn->prev=nn->next=NULL;
		
		nn->next=header;
		nn->prev=cn->prev;
		cn->prev->next=nn;
		header->prev=nn;
		
		put1();
		
	}
	
	void insertany()
	{
		node *cn,*nn;
		nn=new node;
		cn=header;
	
		cout<<" Enter the position at which you want to insert new node .\n";
		cin>>pos;
		
		
		cout<<"\nEnter name ";
		cin>>nn->name;
		cout<<"\nEnter roll number.";
		cin>>nn->roll;
		
		nn->prev=nn->next=NULL;
		
		
		
		if(pos==1)
	  {
	  	insertstart();
	  }
	  	
	  	else
	  {
	  	
		for(int i=1;i<pos-1;i++)
		{
			cn=cn->next;
			
		}
			nn->next=cn->next;
			cn->next->prev=nn;
			nn->prev=cn;
			cn->next=nn;
	  
		put1();
	  }
	}
	
	void deletestart()
	{	
		node *cn;
		cn=header;
		header=header->next;
		cn->prev->next=header;
		header->prev=cn->prev;
		
		delete cn;
		put2();
		
	}
	
	void deleteend()
	{
		node *cn;
		cn=header;
		cn->prev->prev->next=header;
		header->prev=cn->prev->prev;
		
		put2();
		
		
	}
	
	void deleteany()
	{
		node *cn;
		cn=header;
		cout<<" Enter the position at which you want to insert new node .\n";
		cin>>pos;
		
		if(pos==1)
		{
			deletestart();
		}
		else
		{
			for(int i=1;i<pos-1;i++)
			{
				cn=cn->next;
			}
			cn->next->next->prev=cn;
			cn->next=cn->next->next;
			
			put2();
			
		}

	}


	void put1()
	{	node *cn;
		cn=header;
		
		do
		{
			cout<<"\n Name is :"<<cn->name<<endl;
			cout<<" Roll number is :"<<cn->roll<<endl;
			cn=cn->next;
			
		}while(cn!=header);
		
		count++;			
	}
	void put2()
	{	node *cn;
		cn=header;
		
		do
		{
			cout<<"\n Name is :"<<cn->name<<endl;
			cout<<" Roll number is :"<<cn->roll<<endl;
			cn=cn->next;
			
		}while(cn!=header);
		
		count--;			
	}
	
	void presentcount()
	{
		cout<<" \nTotal candidates present are = "<<count<<endl;
		
	}

};int list::count;
	
int main()
{	
	int ch;
	char z;
	list l1;
	do
{
	cout<<"\n**********DOUBLY CIRCULAR LINK LIST***********\n";
	
	cout<<" \nEnter \n1.Insert at start. \n2.Insert at end. \n3.Insert at any position. \n4.Delete at start. \n5.Delete at end. \n6.Delete any particular position. \n7.To display total number of students."<<endl;
	cin>>ch;


	switch(ch)
	{
            case 1:l1.insertstart();
            break;

            case 2:l1.insertend();
            break;

            case 3:l1.insertany();
            break;

			case 4:l1.deletestart();
            break;

			case 5:l1.deleteend();
            break;

			case 6:l1.deleteany();
            break;

			case 7:l1.presentcount();
			break;

            default :cout<<" !!!!SORRY!!!! ";
			break;


	}cout<<" \nEnter y for another operation else n "<<endl;
	cin>>z;

}while(z=='y' || z=='Y');

cout<<"cool";
	
	
}	
