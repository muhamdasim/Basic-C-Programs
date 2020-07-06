#include <iostream>
using namespace std;
int main()
{
	int i,j,n;
	cout <<"Enter no of rows" <<endl;
	cin >> n;
	for (i=1 ; i<=n*2-1 ; i++)
	{
		for (j=1 ; j<=n*2-1 ; j++)
		{
			if (j==i || j==n*2-i )
			cout <<"*"  ;
			else
			cout <<" " ;
		}

	cout <<endl;

	}


	for (i=1 ; i<=n*2-1 ; i++)
	{
		for (j=1 ; j<=n*2-1 ; j++)
		{
			if (j==i || j==n*2-i )
			cout <<"*"  ;
			else
			cout <<" " ;
		}

	cout <<endl;

	}

	for (i=1 ; i<=n*2-1 ; i++)
	{
		for (j=1 ; j<=n*2-1 ; j++)
		{
			if (j==i || j==n*2-i )
			cout <<"*"  ;
			else
			cout <<" " ;
		}

	cout <<endl;

	}
	return 0;

}
