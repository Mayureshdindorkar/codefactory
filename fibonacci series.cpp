#include<iostream>
using namespace std;
int main()
{
    int a=0,b=1,n,i=0,c;
    cout<<"Enter no. of terms ";
    cin>>n;
    if(i==0)
    {
        cout<<a<<endl<<b<<endl;
    }

    for(i=1;i<=n-2;i++)
    {
        c=a+b;
        cout<<c<<endl;
        a=b;
        b=c;
    }


}
