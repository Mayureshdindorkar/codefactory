#include<iostream>
#include<string>
using namespace std;

class node
{   public:
	int prn;
	string name;
	node *next;

};

class list
{   private:node *nn;
	public: node *header;
		int n;
	static int count;

	list()
	{
		header=NULL;
	}


	void insertstart()
	{
		nn=new node;
		node *cn;

		cout<<" Enter the name of member ";
		cin>>nn->name;


		cout<<" Enter the prn number ";
		cin>>nn->prn;

		if(header==NULL)
		{
			header=nn;
			nn->next=NULL;
		}

		else
		{
			nn->next=header;
			header=nn;

		}

        put1();
	}

	void put1()
	{   node *temp;
	    cout<<" The linked list is : ";
		temp=header;
		while(temp!=NULL)
		{
			cout<<temp->name<<"\t";
			cout<<temp->prn<<endl;
			temp=temp->next;

		}

		count++;
	}

	void insertend()
	{
		node *cn;

		nn=new node;

		cout<<" Enter the name of member ";
		cin>>nn->name;



		cout<<" Enter the prn number "<<endl;
		cin>>nn->prn;


		if(header==NULL)
				{
					header=nn;
					nn->next=NULL;
				}

        cn=header;
		while(cn->next!=NULL)
		{
			cn=cn->next;

		}cn->next=nn;
		nn->next=NULL;

        put1();


    }



	void insertany()
	{
	    nn=new node;
		node *temp4;


		cout<<" Enter position at which you want to insert new member "<<endl;
                cin>>n;

		if(n==1)
		{
			insertstart();
		}


		else{   temp4=header;



		cout<<" Enter the name of member ";
		cin>>nn->name;


                cout<<" Enter the prn number "<<endl;
                cin>>nn->prn;

				for(int i=1;i<n-1;i++)
					{
						temp4=temp4->next;
					}nn->next=temp4->next;
					temp4->next=nn;

                     put1();

		     }



	}

    void delstart()
    {
        header=header->next;
        put2();
    }

    void put2()
    {
         node *temp1;
        cout<<" The linked list is : ";
						temp1=header;
						while(temp1!=NULL)
						{	cout<<temp1->name<<"\t";
							cout<<temp1->prn<<endl;
							temp1=temp1->next;

						}

			count--;
    }

 void delend()
    {
        node *cn;
        cn=header;

        while(cn->next->next!=NULL) //applicable only when list is of length greater than 2
        {
            cn=cn->next;
        }
        cn->next=NULL;

        put2();

    }
/*    void delend()
    {
        node *cn,*temp;

        cn=header->next;        //new invention
        temp=header;

        while(cn->next!=header)
        {
            cn=cn->next;
            temp=temp->next;
        }temp->next=header;

        put2();

    }
*/

 void delany()
    {   int m;
        node *cn;
        cn=header;
        cout<<" Enter position number of element you want to delete "<<endl;
        cin>>m;
        if(m==1)
        {
            delstart();
        }


     else {   for(int i=1;i<m-1;i++)
            {
                cn=cn->next;

            }cn->next=cn->next->next;

           put2();

          }
    }


	int retcount()
	{
		cout<<" Total number of members in the pinnacle group are "<<count<<endl;

	}





};int list::count;

int main()
{	list l1;
	int ch;
	char z;
	cout<<"\n**********SINGLY LINK LIST***********\n";

	do
{

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

			case 4:l1.delstart();
            break;

			case 5:l1.delend();
            break;

			case 6:l1.delany();
            break;

			case 7:l1.retcount();
			break;

            default :cout<<" !!!!SORRY!!!! ";
			break;


	}cout<<" \nEnter y for another operation else n "<<endl;
	cin>>z;

}while(z=='y' || z=='Y');

cout<<"cool";
}

