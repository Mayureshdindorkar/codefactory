#include<iostream>
using namespace std;
int main()
{   int i,j,a[10],n,c=0;
    cout<<" Enter the size of array "<<endl;
    cin>>n;
    cout<<" Enter the elements of array ";
    for(i=0;i<n;i++)
    {

        cin>>a[i];
    }


    for(i=0;i<n;i++)
    {
        c=1;
        for(j=0;j<n;j++)
        {
            if(a[i]==a[j]&&i!=j )
            {
                c++;
            }
        }
        if(c==1)
       { cout<<" Unique element is "<<a[i]<<endl;
       }


    }











}
