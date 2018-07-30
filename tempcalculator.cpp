#include<iostream>
using namespace std;

template<class T>
class calc
{	private:T a,b;
	public: calc()
	{	
		a=b=0;	
	}

	T add(T a,T b)
	{	
		return (a+b);
                
	}

	T sub(T a,T b)
	{	
		return (a-b);	
	
	}

	T mul(T a,T b)
	{	
		return(a*b);
	}

	T div(T a,T b)
	{	return(a/b);
	}


};
int main()
{	char z,i;
	int w,a=1;	
	cout<<" \nEnter i. for integer f.Float d.Double "<<endl;
	cin>>i;
	
   if(i=='d'||i=='D')
	
   {	calc<double>q;
	double m,n;
	while(a==1)
	{		
		cout<<"\nEnter 1.addition 2.sub 3.mul "<<endl;
		cin>>w;	

	switch(w)

	{	case 1:cout<<" \nEnter numbers you want to add."<<endl;
		       cin>>m>>n;
		       cout<<" Addition is ="<<q.add(m,n);
		break;
		
		
		case 2:cout<<" \nEnter numbers you want to subtract."<<endl;
		       cin>>m>>n;
		       cout<<" Subtraction is ="<<q.sub(m,n);
		break;
		

                case 3:cout<<" \nEnter numbers you want to multiply."<<endl;
		       cin>>m>>n;
		       cout<<" Multiplication is ="<<q.mul(m,n);
		break;
		
		
		default :cout<<"\nwrong"<<endl;
		break;

	}

    
	  cout<<"\nEnter 1 to continue else enter 0 for continue with double"<<endl;
		cin>>a;	
	}     

    }

    else if(i=='f'||i=='F')
    	{	calc<float>q;
		float m,n;
	while(a==1)
	{		
		cout<<"\nEnter 1.addition 2.sub 3.mul "<<endl;
		cin>>w;	

	switch(w)

	{	case 1:cout<<" \nEnter numbers you want to add."<<endl;
		       cin>>m>>n;
		       cout<<" Addition is ="<<q.add(m,n);
		break;
		
		
		case 2:cout<<" \nEnter numbers you want to subtract."<<endl;
		       cin>>m>>n;
		       cout<<" Subtraction is ="<<q.sub(m,n);
		break;
		

                case 3:cout<<" \nEnter numbers you want to multiply."<<endl;
		       cin>>m>>n;
		       cout<<" Multiplication is ="<<q.mul(m,n);
		break;
		
		
		
		default :cout<<"\nwrong"<<endl;
		break;

	}

    
	  cout<<"\nEnter 1 to continue else enter 0 for continue with float"<<endl;
		cin>>a;	
	}     
    	}
    
    	else if(i=='i'||i=='I')
    		{	calc<int>q;
			int m,n;
			while(a==1)
				{		
				cout<<"\nEnter 1.addition 2.sub 3.mul 4.div"<<endl;
				cin>>w;	

		switch(w)

		{	 case 1:cout<<" \nEnter numbers you want to add."<<endl;
		      	 cin>>m>>n;
		      	 cout<<" Addition is ="<<q.add(m,n);
			break;
		
		
			case 2:cout<<" \nEnter numbers you want to subtract."<<endl;
		       	cin>>m>>n;
		       	cout<<" Subtraction is ="<<q.sub(m,n);
			break;
		

                	case 3:cout<<" \nEnter numbers you want to multiply."<<endl;
		       	cin>>m>>n;
		       	cout<<" Multiplication is ="<<q.mul(m,n);
			break;
		
			case 4:cout<<" \nEnter numbers you want to divide."<<endl;
		       	cin>>m>>n;
		       	cout<<" Division is ="<<q.div(m,n);
			break;
		
			default :cout<<"\nwrong"<<endl;
			break;

		}
    
	  cout<<"\nEnter 1 to continue else enter 0 for continue with integer"<<endl;
		cin>>a;	
			}     
    		
    		}
    		
    		
}

