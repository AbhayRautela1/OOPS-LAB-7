#include<iostream>
using namespace std;
int main()
{
	char arr[4][4];
	for(int i=0;i<4;i++)
	{
		for(int j=0;j<4;j++)
		{
			if(j<4-i-1)
				arr[i][j]=' ';
			else
				arr[i][j]='*';
		}
	}
	for(int i=0;i<4;i++)
	{
		for(int j=0;j<4;j++)
		{
			cout<<arr[i][j];
		}
		cout<<'\n';
	}
	return 0;
}
