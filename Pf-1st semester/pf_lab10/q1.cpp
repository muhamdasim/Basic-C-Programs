#include <iostream>
using namespace std;
int doSomething(int &x, int &y)
{
	int temp = x;
	x = y * 10;
	y = temp * 10;
	return x + y;
}

int main()
{
int x;
cin>>x;

int y;
cin>>y;
cout <<doSomething(x,y);
}

