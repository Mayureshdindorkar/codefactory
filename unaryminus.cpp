#include<iostream>
using namespace std;

class unary_operator
{
    private:int a,b,c;
    public: void get()
            {   cout<<" Enter the values of a,b,c "<<endl;
                cin>>a>>b>>c;
            };

    void display()
    {
        cout<<" Value of a "<<a<<endl;
        cout<<" Value of b "<<b<<endl;
        cout<<" Value of c "<<c<<endl;
    }

    unary_operator operator-()
    {
        a=-a;
        b=-b;
        c=-c;
    }

};

int main()
{
    unary_operator u1;
    u1.get();
    u1.display();
    cout<<" \nValues of a,b,c after unary minus are "<<endl;
    -u1;
    u1.display();
    return 0;
}
