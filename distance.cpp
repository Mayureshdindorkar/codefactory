#include<iostream>
using namespace std;

class DB;
class DM
{	private:float m1,cm1;
	public: DM()
		{	cout<<" Enter the distance in metres and cm ";
			cin>>m1>>cm1;
			cout<<" Distance is m1="<<m1<<"metres and cm1="<<cm1<<" centimetres."<<endl;

		}
    friend void add(DM z1,DB z2);

};

	 class DB
	{  private:float feet2,inch2,f2,i2;

		public:DB()
		{	cout<<" Enter the distance in feet and inches ";
			cin>>feet2>>inch2;
           		cout<<" Distance is feet2= "<<feet2<<" and inch2= "<<inch2<<" inches."<<endl;
            		f2=(feet2)*0.305;
			i2=(inch2)*2.54;
			cout<<" Distance is f2= "<<f2<<" metres and i2= "<<i2<<" centimetres "<<endl;
		}
    friend void add(DM z1,DB z2);
};


    void add(DM z1,DB z2)
    {   float c,d;
        c=z1.m1+z2.f2;
        d=z1.cm1+z2.i2;
        cout<<" Distance is "<<c<<" metres and "<<d<<" centimeteres. ";

    }


int main()
{   DM z1;
    DB z2;
   add(z1,z2);


}
