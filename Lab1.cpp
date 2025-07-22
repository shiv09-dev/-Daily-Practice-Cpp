#include<iostream>
using namespace std;

class student
{
	int age ,i;
	string name;
	
	public:
			student()
			{
				cout<<"This constructor has no arguements"<<endl;
				cout<<"\n";
				
				age = 0;
				name = "null";
			}
			
			student(int age1, string name1)
			{
				age = age1;
				name = name1;
			}
			
			void getData(int age1, string name1)
			{
				for(i=0;i<num;i++)
				{
					cout<<"Enter name of the student : ";
					cin>>name;
				
					cout<"\n";
				
					cout<<"Enter Age of the student : ";
					cin>>age;
					
					cout<<"\n \n ";	
				}
			}
			
			void display()
			{
				cout<<name<<"\t"<<age<<endl;
			}
};

int main()
{
	int age2;
	string name2;
	
	student s;
	//s.display();
	
	student s1;
	s1.getData(age2,name2);
	s1.display();
}
