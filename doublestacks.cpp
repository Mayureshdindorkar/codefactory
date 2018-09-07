#include<iostream>
using namespace std;
#define SIZE 80
int stackno;

struct stack
{
    int arr[SIZE];
    int top1,top2;

}s1;

void push(int x,int stackno)
{
    if(stackno==1)
    {
        if(s1.top1+1==s1.top2)
        {
            cout<<"\nStack1 is full\n";
        }
        else
            {
                s1.top1++;
                s1.arr[s1.top1]=x;
            }
    }
    if(stackno==2)
        {
            if(s1.top2-1==s1.top1)
            {
                cout<<"\nStack2 is full\n";
            }
            else
            {
             s1.top2--;
             s1.arr[s1.top2]=x;

            }
        }
}
        int pop(int stackno)
        {
            if(stackno==1)
            {
                if(s1.top1==-1)
                {
                    cout<<"\nStack1 is empty. \n";

                }

                else
                {
                    int x;
                    x=s1.arr[s1.top1];
                    s1.top1--;
                    return x;

                }
            }
            else
            {
                if(s1.top2==SIZE)
                {
                    cout<<"\nStack2 is empty. \n";

                }
                else
                {
                    int x;
                    x=s1.arr[s1.top2];
                    s1.top2++;
                    return x;

                }

            }
        }

        void display()
        {
            int n=0;
            cout<<"\nEnter 1.for first stack 2.for second stack\n";
            cin>>n;

            if(n==1)
            {
                if(s1.top1==-1)
                {
                    cout<<"\nStack is empty. \n";

                }
                else
                {
                    for(int i=s1.top1;i>=0;i--)
                    {
                        cout<<"\nValues of stack 1 are"<<s1.arr[i];

                    }
                }
            }
            if(n==2)
            {
                if(s1.top2==SIZE)
                {
                    cout<<"\nStack is empty. \n";

                }
                else
                {
                    for(int i=s1.top2;i<SIZE;i++)
                    {
                        cout<<"\nValues of stack 2 are"<<s1.arr[i];

                    }
                }



            }
        }
int main()
{   int h=0,ch,m;
     s1.top1=-1;
     s1.top2=SIZE;
    char j;

   do
    {

        cout<<"\nOperations of 2 stacks in single array.\n";
        cout<<"\n Enter 1.push 2.pop 3.display 4.exit.\n";
        cin>>ch;

        switch(ch)
        {
            case 1:cout<<"\nEnter value that you want to push\n";
                   cin>>h;

                   cout<<"\nEnter 1.for first stack 2.for second stack\n";
                   cin>>stackno;
                       push(h,stackno);


            break;

            case 2:cout<<"\nEnter 1.for first stack 2.for second stack\n";
                   cin>>stackno;
                   m=pop(stackno);
                    cout<<"\nPoped value is"<<m<<"\n";

                    break;

            case 3:display();
            break;

            default:cout<<"\nWRONG.\n";
            break;
        }
        cout<<"\nDo you want to continue? (y/n)";
        cin>>j;
    }while(j=='y'||j=='Y');
}
