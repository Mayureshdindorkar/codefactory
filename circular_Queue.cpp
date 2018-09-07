#include<iostream>
using namespace std;
#define SIZE 3

struct queue
{
    int front ;
    int rear;
    int arr[SIZE];

}Q;

class circular
{
    private :

    public:
        int Qfull()
        {
            if(Q.front==(Q.rear+1)%SIZE)
                return 1;

            else
                return 0;
        }

        int Qempty()
        {
           if(Q.front==-1)
                return 1;

           else
            return 0;
        }

        void insert(int x)     //VERY IMPORTANT
        {
                if(Qfull()==1)
                {
                    cout<<"\nQueue is full.";
                }
                else
                {
                    if(Q.front==-1)
                    {Q.front=Q.rear=0;}
                    else
                    {Q.rear=(Q.rear+1)%SIZE;}

                    Q.arr[Q.rear]=x;
                }
        }

        void deletef()
        {
            if(Qempty()==1)  //Q.front==-1 then Q empty.
            cout<<"\nQueue is empty.";
            else
            {
                cout<<"\nDeleted element is :"<<Q.arr[Q.front];

                if(Q.front==Q.rear)
                {                             //If there is only one element in Queue.
                    Q.front=Q.rear=-1;       //This makes Q totally empty.
                }
                else
                    Q.front=(Q.front+1)%SIZE;

            }
        }

        void displayall()
        {   if(Qempty()==1)
            {
                cout<<"\nQueue empty.";
            }
            else
            {
                cout<<"\nAll Queue elements are :";
                int i=Q.front;
                while(i!=Q.rear)
                {
                    cout<<Q.arr[i]<<"\t";
                    i=(i+1)%SIZE;
                }
                cout<<Q.arr[i];
            }
        }
};

int main()
{

    Q.front=-1;     //for circular queue
    Q.rear=-1;       //for circular queue
    circular c1;
    int item,ch;
    char z;

    cout<<"\n*****CIRCULAR QUEUE*****\n";

    do
    {
        cout<<"\nEnter \n1.To add element in Queue \n2.To delete element from Queue \n3.To display whole queue :";
        cin>>ch;

        switch(ch)
        {
            case 1:	cout<<"\nEnter the number you want to insert :";
            		cin>>item;
					c1.insert(item);
            break;

            case 2: c1.deletef();
            break;

            case 3: c1.displayall();
            break;

            default:cout<<"\nSORRY";
            break;

        }cout<<"\nEnter Y to continue else N :";
         cin>>z;
    }while(z=='Y'||z=='y');

}
