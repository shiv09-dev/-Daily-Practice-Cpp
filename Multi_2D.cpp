#include<iostream>
using namespace std;

int main()
{
	int row,col;
	cout<<"Enter rows and columns of both Arrays : ";
	cin>>row>>col;
	cout<<"\n";
	
	int i,j;
	int arr_1[row][col], arr_2[row][col], multi[row][col];
	
	for(i=0;i<row;i++)
	{
		cout<<"\n";
		for(j=0;j<col;j++)
		{
			cout<<"Enter elements in array 1 ["<<i<<"]["<<j<<"] : ";
			cin>>arr_1[i][j];
		}
	}
	cout<<"\n \n";
	for(i=0;i<row;i++)
	{
		cout<<"\n";
		for(j=0;j<col;j++)
		{
			cout<<"Enter elements in array 2 ["<<i<<"]["<<j<<"] : ";
			cin>>arr_2[i][j];
		}
	}
	
	
	for(i=0;i<row;i++)
	{
		cout<<"\n";
		for(j=0;j<col;j++)
		{
			multi[i][j] = arr_1[i][j] * arr_2[i][j];
		}
	}
	
	
	cout<<"\n \n";
	cout<<"Multiplied Array is : "<<endl;
	for(i=0;i<row;i++)
	{
		cout<<"\n";
		for(j=0;j<col;j++)
		{
			cout<<"\t"<<multi[i][j];
		}
	}
}
