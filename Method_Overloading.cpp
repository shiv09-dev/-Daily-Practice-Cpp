#include<iostream>
using namespace std;

int addition(int num1, int num2)
{
	return num1 + num2;
}

float addition(int num1, float num2, int num3)
{
	return num1 + num2 + num3;
}

int main()
{
	int ans;
	float f_ans;
	
	ans = addition(23,45);
	f_ans = addition(45,23.45f,56);
	
	cout<<"Function 1 has output : "<<ans<<endl;
	cout<<"\n";
	cout<<"Function 2 has output : "<<f_ans<<endl;
}
