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
				cout<<"Enter value of x : ";
				cin>>x;
				
				cout<<"Enter value of y : ";
				cin>>y;
				
				cout<<"\n \n";
			}
			
			void displayAdd()
			{
				cout<<"Addition of Both objects is : "<<endl<<"X : "<<x<<endl<<"Y : "<<y<<endl;
				//cout<<"Multiplication of Both objects is : "<<endl<<"X : "<<x<<endl<<"Y : "<<y<<endl;
				//cout<<z<<endl
			}
			
			void displayMulti()
			{
				cout<<"Multiplication of Both objects is : "<<endl<<"X : "<<x<<endl<<"Y : "<<y<<endl;
				//cout<<"Multiplication of Both objects is : "<<endl<<"X : "<<x<<endl<<"Y : "<<y<<endl;
				//cout<<z<<endl
			}
			
			point operator+(point a)
			{
				point p3;
				//cout<<"operator + : "<<x<<"\t"<<a.y<<endl;
				p3.x = x + a.x;
				p3.y = y + a.y;
				return p3;
			}
			
			point operator*(point b)
			{
				point p4;
				//cout<<"operator + : "<<x<<"\t"<<a.y<<endl;
				p4.x = x * b.x;
				p4.y = y * b.y;
				return p4;
			}
};


int main()
{
	int x2,y2;
	
	point p1;
	p1.getData(x2,y2);
	//p1.display();
	
	point p2;
	p2.getData(x2,y2);
	//p2.display();
	
	point p;
	p = p1 + p2;
	p.displayAdd();
	
	cout<<"\n \n";
	
	point p5;
	p5 = p1 * p2;
	p5.displayMulti();
}
