
#include<iostream>
using namespace std;
#define SIZE 5

struct queue
{
    int front;
    int rear;
    int arr[SIZE];
}Q;

class simple
{
private:
public:
    int Qempty()
    {
        if((Q.front==-1) ||(Q.front>Q.rear))
            return 1;

        else
            return 0;
    }

    int Qfull()
    {
        if(Q.rear>=SIZE-1)
           { return 1;
           }
        else
		{return 0;
		}
    }

    void insert( int x )
    {
        if(Qfull()==1)
        {   cout<<"\n Queue is full.";

        }
        else
        {
            if(Qempty()==1)
            {
                Q.front=0;  //Initial condition
            }

                Q.arr[++Q.rear]=x;


        }
    }

    void deletef()
    {
        if(Qempty())
        {
            cout<<"\nQueue is empty.";
        }
        else
        {
            int x=Q.arr[Q.front];
            cout<<"\nDeleted element is :"<<x;
            Q.front++;
        }
    }

    void displayall()
    {
    	cout<<"\nAll elements of queue are :";
                for(int i=Q.front;i<=Q.rear;i++)
                {
            		cout<<Q.arr[i]<<"\t";
                }

    }

};

int main()
{
    Q.front=Q.rear=-1;
    simple s1;
    int item,ch;
    char z;

    cout<<"\n*****SIMPLE QUEUE*****\n";

    do
    {
        cout<<"\nEnter \n1.To add element in Queue \n2.To delete element from Queue \n3.To display whole queue :";
        cin>>ch;

        switch(ch)
        {
            case 1:	cout<<"\nEnter the number you want to insert :";
            		cin>>item;
					s1.insert(item);
            break;

            case 2: s1.deletef();
            break;

            case 3: s1.displayall();
            break;

            default:cout<<"\nSORRY";
            break;

        }cout<<"\nEnter Y to cintinue else N :";
         cin>>z;
    }while(z=='Y'||z=='y');



    return 0;
}


