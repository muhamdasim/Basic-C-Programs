
#include <iostream>
using namespace std;
int main()
{
	int n;
	cout <<"Enter no" <<endl;
	cin>>n;

	int i=n , j=n;
	
	for (i=n ; n<=i ; i-- )
	{
	for (j=n ; n<=i ; j-- )
	{
		if (i==j)
		{
			cout <<"1" ;
		}
		else 
		{
			cout <<"0" ;

		}

	}
		cout <<endl;
	}
	return 0;

}
