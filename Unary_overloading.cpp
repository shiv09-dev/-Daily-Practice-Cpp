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
			
			point operator++()
			{
				point p1;
				//point p5;
				
				p1.x = ++x;
				p1.y = ++y;
				return p1;
			}
			
			void display()
			{
				cout<<endl<<"X : "<<x<<endl<<"Y : "<<y<<endl;	
			}			
};

int main()
{
	int x2,y2;
	
	point p2;
	p2.getData(x2,y2);
	
	point p3;
	p3 = p2++;
	cout<<"Value of X and Y before Unary Operation (Postfix) : "<<endl;
	p3.display();
	
	cout<<"\n";
	
	cout<<"Value of X and Y after Unary Operation (Postfix) :"<<endl;
//	p2++;
	p2.display();
	
	cout<<"\n \n";

	cout<<"Value of X and Y before Unary Operation (Prefix) :"<<endl;
	p2.display();

	//??????????
	cout<<"\n";
	
	point p4;
	p4 = ++p2;
	cout<<"Value of X and Y after Unary Operation (Prefix) :"<<endl;
	p4.display();
}
