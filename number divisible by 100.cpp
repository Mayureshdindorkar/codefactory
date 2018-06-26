#include<iostream>
using namespace std;

int main()
{
    int i,j,r,sum=0;
    cout<<"All no. from 1 to 100 divisible by 100 are ";

    for(i=1;i<=100;i++)
    {
        if(i%4==0)
        {   sum=sum+i;
            cout<<i<<endl;

        }

    }   cout<<"sum is="<<sum;
}
