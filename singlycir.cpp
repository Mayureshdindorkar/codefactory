#include<iostream>
#include<string>

using namespace std;

struct node
{
    int roll;
    string name;
    node *next;

};

class singlycir
{
    private:node *header;
            node *nn;
    public:int i,pos;
           static int count;
    singlycir()
    {
        header=NULL;
    }


        void insertstart()
    {
        nn=new node;
        cout<<" Enter name of student"<<endl;
        cin>>nn->name;


        cout<<" Enter roll number of student"<<endl;
        cin>>nn->roll;

        if(header==NULL)
        {   header=nn;
            nn->next=header;        //main thing

        }

        else
        {
            nn->next=header;
            header=nn;

        }

        put1();

    }




    void insertend()
    {   nn=new node;
        node *cn;
        cout<<" Enter name of student"<<endl;
        cin>>nn->name;


        cout<<" Enter roll number of student"<<endl;
        cin>>nn->roll;

        if(header==NULL)
        {   header=nn;
            nn->next=header;

        }



        else
        {

        cn=header;
        while(cn->next!=header)
        {
            cn=cn->next;
        }nn->next=cn->next;
         cn->next=nn;

        }
         put1();

    }


    void insertany()
    {   cout<<" Enter the position at which you want to insert \n";
        cin>>pos;

        if(pos==1)
		{
			insertstart();
		}

        else
    {
        nn=new node;
        cout<<" Enter name of student"<<endl;
        cin>>nn->name;


        cout<<" Enter roll number of student"<<endl;
        cin>>nn->roll;
        node *cn;

        cn=header;
        for(i=1;i<pos-1;i++)
        {
            cn=cn->next;
        }nn->next=cn->next;
         cn->next=nn;

    }
        put1();

    }

    void delstart()
    {   node *cn,*temp;
        temp=header;
        header=header->next;
        cn=header;
        while (cn->next!=temp)
        {
            cn=cn->next;
        }cn->next=header;

       put2();

    }

    void delend()
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

    void delany()
    {
        node *cn;
        cn=header;
        cout<<" Enter the position at which you want to delete \n";
        cin>>pos;
        if(pos==1)
        {
            delstart();
        }
       else{    for(i=1;i<pos-1;i++)
                {
                cn=cn->next;
                }cn->next=cn->next->next;

                put2();
           }
    }

    void stucount()
    {
        cout<<" Number of students are : "<<count<<endl;

    }


    void put1()
    {
        node *cn;

        cn=header;
        do
        {   cout<<cn->name<<"\t";
            cout<<cn->roll<<"\n";
            cn=cn->next;

        }while(cn!=header);


        count++;
    }

    void put2()
    {
        node *cn;

        cn=header;
        do
        {   cout<<cn->name<<"\t";
            cout<<cn->roll<<"\n";
            cn=cn->next;

        }while(cn!=header);


        count--;
    }

};int singlycir::count;

int main()
{   int ch;
    char z;
    singlycir l1;

    do
{
			cout<<"\n**********SINGLY CIRCULAR LINK LIST***********\n";

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

			case 7:l1.stucount();
			break;

            default :cout<<" !!!!SORRY!!!! ";
			break;


	}cout<<" \nEnter y for another operation else n "<<endl;
	cin>>z;

}while(z=='y' || z=='Y');

cout<<"cool";
}
