#include<iostream>
#include<string>
using namespace std;

class node
{   public:
	int prn;
	string name;
	node *next;
    node *prev;
};

class list
{   private:node *nn;
	public: node *header;
		int pos;
	static int count;

	list()
	{
		header=NULL;
	}


	void insertstart()
	{
		nn=new node;


		cout<<" Enter the name of member ";
		cin>>nn->name;


		cout<<" Enter the prn number ";
		cin>>nn->prn;
        nn->next=nn->prev=NULL;

		if(header==NULL)
		{
			header=nn;

		}

		else
		{   nn->next=header;
            header->prev=nn;
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

				}

        cn=header;
		while(cn->next!=NULL)
		{
			cn=cn->next;

		}cn->next=nn;
		nn->prev=cn;
		nn->next=NULL;

        put1();


    }



	void insertany()
	{
	    nn=new node;
		node *cn;


		cout<<" Enter position at which you want to insert new member "<<endl;
        cin>>pos;

		if(pos==1)
		{
			insertstart();
		}


		else{   cn=header;

		cout<<" Enter the name of member ";
		cin>>nn->name;


        cout<<" Enter the prn number "<<endl;
        cin>>nn->prn;

				for(int i=1;i<pos-1;i++)
                {
                        cn=cn->next;
                }nn->next=cn->next;
                 cn->next->prev=nn;
                 cn->next=nn;
                 nn->prev=cn;

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
        node *cn,*temp;

        cn=header->next;    //new invention.
        temp=header;

        while(cn->next!=NULL)
        {
            cn=cn->next;
            temp=temp->next;
        }temp->next=NULL;


        put2();

    }

 void delany()
    {   int pos;
        node *cn;
        cn=header;
        cout<<" Enter position number of element you want to delete "<<endl;
        cin>>pos;

               if(pos==1)
               {

                    delstart();



               }

                for(int i=1;i<pos-1;i++)
                {
                        cn=cn->next;

                }cn->next=cn->next->next;
                 cn->next->next->prev=cn;

                put2();
    }


	void retcount()
	{
		cout<<" Total number of students are "<<count<<endl;

	}





};int list::count;

int main()
{	list l1;
	int ch;
	char z;

	cout<<"\n**********DOUBLY LINK LIST***********\n";


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

