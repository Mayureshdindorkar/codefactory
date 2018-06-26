#include<iostream>
using namespace std;
int main()
{
    int num,revnum=0,reminder;
    cout<<" Enter the positive nonzero  number ";
    cin>>num;
    while(num!=0)
    {
    reminder=num%10;
    revnum=(revnum*10)+reminder;
    num=num/10;
    }
    cout<<"reverse no. is "<<revnum;
    return 0;
}
