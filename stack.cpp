#include<iostream>
using namespace std;
#define SIZE 10

struct stack
{
    int arr[SIZE];
    int top;

}s1;


    int stackfull()
    {
        if(s1.top>=SIZE-1)
       {return 1;}

       else {return 0;}
    }


    int stackempty()
    {
        if(s1.top==-1)
       {return 1;}

       else {return 0;}
    }

    void push(int x)
    {
        s1.top++;
        s1.arr[s1.top]=x;
    }

    int pop()
    {
        int z;
        z=s1.arr[s1.top];
        s1.top--;
        return z;
    }


    void display()
    {
        if(stackempty())
        {
            cout<<"\n Stack is empty.\n";
        }
        else
        {
            for(int i=s1.top;i>=0;i--)
            {
                cout<<s1.arr[i]<<"\t";
            }
        }
    }

int main()
{

    int x,ch,m;
    char j;
    s1.top=-1;  //IMPORTANT


    do
    {                   cout<<"\n******Operations of stack.*****\n";
        cout<<"\n Enter 1.push 2.pop 3.display 4.exit.\n";
        cin>>ch;

        switch(ch)
        {
            case 1:cout<<"\nEnter value that you want to push\n";
                   cin>>x;
                   if(stackfull())
                   {
                       cout<<"\n Stack is full\n";
                   }
                   else
                   {
                       push(x);

                   }
            break;

            case 2:if(stackempty())
            {
                cout<<"n Stack is empty\n";
            }
            else
            {
                m=pop();
                cout<<"\n Poped value is "<<m<<endl;
            }
            break;

            case 3:display();
            break;

            default:cout<<"\nWRONG.\n";
            break;
        }N
        cout<<"\nDo you want to continue? (y/n)";
        cin>>j;
    }while(j=='y'||j=='Y');

}
