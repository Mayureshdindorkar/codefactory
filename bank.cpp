#include<iostream>
#include<string>
using namespace std;

class bank
{	private:	char name[20],toa[10];	
			float acno,bal;

	public:		void get()
			{
				cout<<" Enter the name "<<endl;
				cin>>name;
				cout<<" Enter account no. "<<endl;
				cin>>acno;
				cout<<" Enter the  type of account "<<endl;
				cin>>toa;
				cout<<" Enter the balance in account "<<endl;
				cin>>bal;
			}

		void deposit()
		{	int a;
			cout<<" \nEnter the amount you want to deposit "<<endl;
			cin>>a;
			bal=bal+a;
			cout<<"new balance is "<<bal<<endl;
		}

		void withdraw()
		{	int b;
			cout<<"The available balance is "<<bal;
			cout<<"Enter the amount you want to withdraw "<<endl;
			cin>>b;
			bal=bal-b;
			cout<<"The new available balance is "<<bal<<endl;
		}
		
		void present()
		{	
			cout<<"Your name is "<<name<<" and balance is "<<bal<<endl;

		}

		
		

};

int main()
{	
	int n,i=1;
	while(i==1)
{
	bank b[10];
	b[i].get();
	int j=1;	
	while(j==1)
    {   cout<<" Press 1.deposit 2.withdraw 3.name & balance "<<endl;
	cin>>n;
	switch(n)
	{	case 1:b[i].deposit();
		break;		

		case 2:b[i].withdraw();
		break;		
		
		case 3:b[i].present();
		break;		
	}
	cout<<" Enter 1 for another transaction else 0  "<<endl;
        cin>>j;

    }
cout<<" Enter 1 for another account else press 0 "<<endl;
cin>>i;
}
}
		







