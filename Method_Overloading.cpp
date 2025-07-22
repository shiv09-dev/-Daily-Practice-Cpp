#include<iostream>
using namespace std;

class Person
{
	int id, contact_no;
	string name,address;
	
	public:
			Person()
			{
				cout<<"This constructor has no value , its just printing the sentence "<<endl;	
				id = 0;
				contact_no = 0;
				name = "NULL";
				address = "NULL";
			}
			
			Person(int id1, int c_no)
			{
				id = id1;
				contact_no = c_no;	
			}
			
			Person(int id1, string name1, string address1)
			{
				id = id1;
				name = name1;
				address = address1;	
			}
			
			void display()
			{
				cout<<id<<"\t"<<contact_no<<name<<"\t"<<address<<"\t"<<endl;	
			}	
};


int main()
{
	Person p;
	
	Person p1(01,23456);
	p1.display();
	
	Person p2(02,"Shivam" , "Ahmedabad");
	p2.display();
}
