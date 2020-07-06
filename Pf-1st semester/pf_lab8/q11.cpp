#include <iostream>
using namespace std;

int fact(int x )
{
	int i=1;
	while (x!=0)
	{
		i=i*x;
		x--;
	}

return i;
}
int ncr(int n,int r)
{
	cout <<"Enter the value of N " <<endl;
	cin>>n;
	cout <<"Enter the value of r" <<endl;
	cin>>r;
	int nc;  
	nc=fact(n)/(fact(r)*fact(n-r));
	return nc;
}

int main()
{
int n,r;
cout <<ncr(n,r);
}

	
