
#include <iostream>
using namespace std;

void sum(int x, int y)
{


int sum;
sum=x+y;
cout<<sum;
}	

void diff(int x, int y)
{


int diff;
diff=x-y;
cout<<diff;

}	
	
	
	

void pro(int x, int y)
{


int pro;
pro=x*y;
cout<<pro;
}

void div(int x, int y)

{
float div;
div=float(x)/y;
cout<<div;
}

int main()
{
	
int x;
int y;
cout<<"Enter Two Integer"<<endl;
cin >> x;
cin>> y;

char choice;
cout <<"Enter your choice" <<endl;
cout<<"Press + - * / as your choice"<<endl;
cin>> choice;

if (choice=='+')
{

sum(x,y);

}


if (choice=='-')
{

diff(x,y);

}


if (choice=='*')
{

pro(x,y);

}

if (choice=='/')
{

div(x,y);

}

}
	



