#include<iostream>
#include<cstring>

using namespace std;

class stringop
{
    private:char str[20];

    public:
        friend istream& operator>>(istream&in,stringop&m)
        {
            cout<<" Enter the string "<<endl;
            in>>m.str;
        }

        friend ostream& operator<<(ostream&out,stringop&n)
        {
            out<<n.str;
        }

        void operator+(stringop p)
        {
            strcat(str,p.str);
            cout<<" Concatination of given strings is "<<str;

        }

        void operator==(stringop q)
        {
                if(strcmp(str,q.str)==0)
                {cout<<" Strings are same \n";}

            else{cout<<" Strings are not same \n";}
        }

};
int main()
{
    stringop z1,z2,z3;
    int ch;

    cout<<" Enter 1.string insert & string display 2.string concatenate 3.string compare\n";
    cin>>ch;

    switch(ch)
    {

        case 1: cin>>z1;
                cout<<z1;
                break;
        case 2: cin>>z2;
                cout<<z2;
                cin>>z3;
                cout<<z3;
                z2+z3;

                break;
        case 3: cin>>z2;
                cout<<z2;
                cin>>z3;
                cout<<z3;
                z2==z3;
                break;
        default:cout<<" Wrong.";
            break;


    }
}
