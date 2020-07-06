#include<iostream>
using namespace std;
int main()
{
float x;
float y;
int o;

float A;
float S;
float M;
float D;

cout<<"CALCULATOR\n\n";
initial:
cout<<"Enter first number"<<endl;
cin>>x;
cout<<"Enter second number"<<endl;
cin>>y;

cout<<"Enter number as according\n 1 for +,2 for -,3 for *,4 for /";
cin>>o;

if (o==1)
   	{
	A=x+y;
	cout<<A<<endl;
	}


else if (o==2)
	{
	S=x-y;
	cout<<S<<endl;
	}


else if (o==3)
	{
	M=x*y;
	cout<<M<<endl;
	}


else if(o==4)
	{
	D=x/y;
	cout<<D<<endl;
	}

goto initial;

return 0;
}
