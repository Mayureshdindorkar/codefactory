#include<iostream>
#include<string>
using namespace std;

class game
{
	private:int x,y,u[50],a[10],b[10],u1[20],in[20],i,j,k,onc[20],onb[20],ncnb[20],n;
            static int count;

	public:
	    void get1()
	    {
            cout<<" Enter total number of students in SE "<<endl;
            cin>>n;

            //int u[n];
            cout<<" Enter roll number of students in SE "<<endl;
             for(j=0;j<n;j++)
           {

            cin>>u[j];
            }//j=n

            cout<<" Total no. of students in SE are {";
            for(i=0;i<n;i++)
            {
            cout<<u[i]<<",";
            }
            cout<<" }."<<endl;

	    }

	    void get()
        {


            cout<<" \nEnter number of students playing cricket "<<endl;
            cin>>x;
            cout<<" Enter roll number of students playing cricket "<<endl;
            for(i=0;i<x;i++)
           {

            cin>>a[i];
            }

            cout<<" \nEnter number of students playing badminton ";
            cin>>y;
            cout<<" Enter roll number of students playing cricket "<<endl;
             for(i=0;i<y;i++)
            {
            cin>>b[i];
            }
        }

        void display()
        {
            cout<<" \nTotal no. of students playing cricket are {";
            for(i=0;i<x;i++)
            {
            cout<<a[i]<<",";
            }
            cout<<" }."<<endl;


            cout<<" \nTotal no. of students playing badminton are {";
            for(i=0;i<y;i++)
            {
            cout<<b[i]<<",";
            }
            cout<<" }."<<endl;
        }

        void unionf()
        {
            j=0;

            for(i=0;i<x;i++)//adding a
            {
                u1[j]=a[i];
                j++;
            }

            int flag=0;

           for(k=0;k<y;k++)
            {
                for(i=0;i<x;i++)//comparing and adding b
                {
                      if(b[k]==a[i])
                      {
                            flag=1;

                      }

                }
                if(flag==0)
                {
                    u1[j]=b[k];
                    j++;

                }
                flag=0;
            }

              cout<<" \nThe union is {";
              for(i=0;i<j;i++)
              {cout<<u1[i]<<",";}
              cout<<"}.";
              count=j-1;
        }
        void intersect()
        {k=0;
            for(i=0;i<x;i++)
            {
                for(j=0;j<y;j++)
                {
                    if(a[i] == b[j])

                        {
                            in[k] = b[j];
                        k++;
                        }
                }
            }
        }

        void disp()
        {
            cout<<"\nIntersection is:\t{";
            for(i=0;i<k;i++)
                cout<<in[i]<<",";
                cout<<"}";
        }

        void cricket()
        {
            k=0;
	    int flag=1;
            for(i=0;i<x;i++)
            {   for(j=0;j<y;j++)
               {

                        if(a[i]==b[j])
                        {
                            flag=0;

                        }

               }

		if(flag==1)
		{
			onc[k]=a[i];
                            k++;
		}flag=1;
            }
        }

        void dispc()
        {


                cout<<" \nStudents who play only cricket are {";
                for(j=0;j<k;j++)
                {
                    cout<<onc[j]<<",";
                }cout<<"}.";

        }

	void badminton()
	{
            k=0;
	    int flag=1;
            for(i=0;i<y;i++)
            {   for(j=0;j<x;j++)
               {

                        if(a[j]==b[i])
                        {
                            flag=0;

                        }

               }

                if(flag==1)
                {
                    onb[k]=b[i];
                    k++;
                }flag=1;
            }

	}

	 void dispb()
        {


                cout<<" \nStudents who play only badminton are {";
                for(j=0;j<k;j++)
                {
                    cout<<onb[j]<<",";
                }cout<<"}.";

        }

        int neithercb()
        {       k=0;
            int flag=0;
            for(i=0;i<n;i++)//universal
            {
                flag=0;
                for(j=0;j<count+1;j++)//union
               {

                        if(u[i]==u1[j])
                        {
                            flag=1;
                            break;

                        }

               }

                if(flag==0)
                {
                    ncnb[k]=u[i];
                    k++;
                }
            }
        return k;
        }

         void dispncnb()
        {

                int x=neithercb();
                cout<<" \nStudents who neither play cricket nor badminton are {";
                for(j=0;j<x;j++)
                {
                    cout<<ncnb[j]<<",";
                }cout<<"}.";

        }

};int game::count;




int main()
{
    int j,n,i;

            game a;

    a.get1();
    a.get();
    a.display();
    a.unionf();
    a.intersect();
    a.disp();
    a.cricket();
    a.dispc();
    a.badminton();
    a.dispb();
    a.dispncnb();


}
