#include<iostream>
using namespace std;
int main()
{
    long int binum,denum=0,rem,i=1,octnum=0,c;
    cout<<"Enter the binary number";
    cin>>binum;
    while(binum!=0)
    {
    rem=binum%10;
    denum=denum+(rem*i);
    i=i*2;
    binum=binum/10;


    }
    cout<<"Decimal number is "<<denum<<endl;
    int j=1;
    while(denum!=0)
    {
        long int c;
        c=denum%8;
        octnum=octnum+c*j;
        denum=denum/8;
        j=j*10;


    }
    cout<<" Its octal number is "<<octnum<<endl;
}
