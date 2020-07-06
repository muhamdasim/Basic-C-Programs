#include <iostream>
using namespace std;
int main()
{
	int n, counter=1,fac=1 ;
	cout <<"Enter no" ;
	cin >> n ;
	while (counter<=n)
	{
		fac=fac*counter ;
		counter=counter+1 ;

	}
	cout <<"Factorial is:" << fac ;
	return 0;

}
