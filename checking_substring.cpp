#include<iostream>
#include<cstdio>
using namespace std;

int main()
{
    int ch;
    do{

    char str1[50],str2[50];
    int i,j,l;

    while(getchar()!='\n');
    cout<<"\nEnter the bigger string :";
    cin.getline(str1,50);       //another syntax for getline.
    cout<<str1;

    while(getchar()!='\n');
    cout<<"\nEnter the smaller string :";
    cin.getline(str2,50);
    cout<<str2;

                                                                //length of string2
    for(l=0;str2[l]!='\0';l++);

    for(i=0,j=0;str1[i]!='\0' && str2[j]!='\0';i++)
    {
        if(str1[i]==str2[j])
        {
            j++;
        }
        else
        {
            j=0;
        }
    }
    if(j==l)
    {   cout<<"\nSubstring is found. ";
    }
    else
    {
        cout<<"\nNo Substring is found. ";
    }
        cout<<"\nEnter 1 for another operation else 0. ";
        cin>>ch;

    }while(ch==1);
}
