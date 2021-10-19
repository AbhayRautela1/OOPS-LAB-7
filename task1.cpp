#include<iostream>
using namespace std;
int main()
{
int ch;
cout<<"PRESS 1 FOR CURRENT YEAR"<<endl;
cout<<"PRESS 2 FOR CURRENT MONTH"<<endl;
cout<<"PRESS 3 FOR CURENT DAY"<<endl;
cout<<"PRESS 4 FOR CURRENT YEAR"<<endl;
cout<<"ENTER YOUR CHOICE"<<endl;
cin>>ch;
switch(ch)
{
case 1:
	cout<<"2021"<<endl;
break;
case 2:
	cout<<"OCTOBER"<<endl;
break;
case 5:
	cout<<"19"<<endl;
break;
case 4:
	cout<<"NOT APPLICABLE"<<endl;
break;
default:
	cout<<"INVALID INPUT !!"<<endl;
}
return 0;
}
