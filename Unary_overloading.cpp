#include<iostream>
using namespace std;

class point
{
	int x,y;
	
	public:
			point()
			{
				
			}
			
			point(int x1, int y1)
			{
				x = x1;
				y = y1;
			}
			
			void getData(int x1, int y1)
			{
				cout<<"Enter value of X : ";
				cin>>x;
				
				cout<<"Enter value of Y : ";
				cin>>y;
				
				cout<<"\n \n ";
			}
			
			point operator++(int a)
			{
				point p;
				//point p3;
				
				p.x = x++;
				p.y = y++;
				return p;
			}
			
			void display()
			{
				cout<<"Value of X nad Y after Unary Operation :"<<endl<<"X : "<<x<<endl<<"Y : "<<y<<endl;	
			}			
};

int main()
{
	int x2,y2;
	
	point p1;
	p1.getData(x2,y2);
	
//	point p2;
//	p2 = p1++;
//	cout<<"Value of X and Y before Unary Operation : "<<endl;
//	p2.display();
	
	
//	cout<<"\n \n";

	p1++;
	p1.display();
}
