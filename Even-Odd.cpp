#include<iostream>
using namespace std;

int main()
{
	int i,num;
	
	cout<<"Enter the Size of the Array : ";
	cin>>num;
	
	cout<<"\n";
	
	int arr_1[num];
	for(i=0;i<=num;i++)
	{
		cout<<"Enter elements in the array : ";
		cin>>arr_1[i];
	}
	cout<<"\n";
	
	for(i=0;i<=num;i++)
	{
		cout<<"Elements of the Array :"<<arr_1[i]<<endl;
	}
	cout<<"\n";
	
	for(i=0;i<=num;i++)
	{
		if(arr_1[i] % 2==0)
		{
			cout<<arr_1[i]<<" is Even"<<endl;
		}
		else
		{
			cout<<arr_1[i]<<" is Odd"<<endl;
		}
	}
}
