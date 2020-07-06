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
	


int counter1=1;
int sum=0;

while (counter1<=fac)
{

sum=sum+counter1;
counter1=counter1+1;
}

cout <<"Sum is" << sum ;

return 0;

}
