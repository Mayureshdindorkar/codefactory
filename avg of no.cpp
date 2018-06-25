#include<iostream>
using namespace std;
int main()
{   int n1,n2,n3;

    void avg(int a,int b,int c);
    cout<<"Enter three no.";
    cin>>n1>>n2>>n3;
    avg(n1,n2,n3);



}

void avg(int a,int b,int c)
{
    int d; float av;
    d=a+b+c;
    av=d/3.0;
    cout<<"average of no. is="<<av;
}
