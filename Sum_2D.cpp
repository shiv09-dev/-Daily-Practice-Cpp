#include<iostream>

using namespace std;

int main()
{
	int row,col;
	cout<<"Enter size of the array : ";
	cin>>row>>col;
	
	int arr_1[row][col];
	int i,j,sum = 0;
	
	cout<<"\n";
	for(i=0;i<row;i++)
	{
		cout<<"\n";
		for(j=0;j<col;j++)
		{
			cout<<"Enter elements in the array :["<<i<<"]["<<j<<"] : ";
			cin>>arr_1[i][j];
		}
	}
	
	cout<<"Array is : "<<endl;
	for(i=0;i<row;i++)
	{
		cout<<"\n";
		for(j=0;j<col;j++)
		{
			cout<<"\t"<<arr_1[i][j];
		}
	}
	
	cout<<"\n";
	for(i=0;i<row;i++)
	{
		cout<<"\n";
		for(j=0;j<col;j++)
		{
			sum += arr_1[i][j];
		}
	}
	cout<<"Sum of elements of array is : "<<sum<<endl;
}
