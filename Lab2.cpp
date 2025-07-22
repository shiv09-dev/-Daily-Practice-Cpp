#include<iostream>
using namespace std;

class compare
{
	int x,y;
	
	public:
			compare()
			{
				
			}
			
			compare(int x1 , int y1)
			{
				x = x1;
				y = y1;	
			}
			
			void getData(int x1, int y1)
			{
				cout<<"Enter valu of x : ";
				cin>>x;
				
				cout<<"Enter value of y : ";
				cin>>y;
				
				cout<<"\n \n ";	
			}
			
			bool operator<=(compare a)
			{
				//comapre c3;
				if(x <= a.x and y <= a.y )
				{
					return true;
				}
				else
				{
					return false;
				}	
			}
			
			bool operator>=(compare b)
			{
				if(x>=b.x and y>=b.y)
				{
					return true;
				}
				else
				{
					return false;	
				}
			}
			
			void displayMin()
			{
				cout<<"Minimum between two objects is :"<<endl; 
			}
			
			void displayMax()
			{
				cout<<"Maximum between two objects is :"<<endl; 
			}
};


int main()
{
	int x2 ,y2;
	
	compare c1;
	c1.getData(x2,y2);
	
	compare c2;
	c2.getData(x2,y2);
	
	compare c;
	c.displayMin();
	if(c1 <= c2)
	{
		cout<<"Object C1 is Minimum";
	}
	else
	{
		cout<<"Object C2 is Minimum";
	}
	
	cout<<"\n \n";
	
	compare c3;
	c3.displayMax();
	if(c1 >= c2)
	{
		cout<<"Object C1 is Maximum";
	}
	else
	{
		cout<<"Object C2 is Maximum";
	}
}



