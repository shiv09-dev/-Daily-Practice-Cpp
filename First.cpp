#include<iostream>
using namespace std;

int main()
{
	int num1,num2,num3;
	
	cout<<"Enter all 3 numbers : ";
	cin>>num1>>num2>>num3;
	
	if(num1>num2 and num1>num3)
	{
		cout<<num1<<"is bigger"<<endl;
	}
	
		else if(num2>num3)
		{
			cout<<num2<<" is bigger"<<endl;
		}
		
	else
	{
		cout<<num3<<" is bigger"<<endl;
	}
}
