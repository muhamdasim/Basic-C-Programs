#include <iostream>
using namespace std;
int main ()
	{
	int n;
	int sum=0;
	int counter1=1 ,counter2=0;
	cout <<"Enter number" ;
	cin >> n;
	while (counter1<=n )

	{

	cout <<counter1 << endl ;
	counter1=counter1+1 ;

	}

	while (counter2<=n)
	
	{

	sum=sum+counter2 ;

	cout <<sum <<"," ;

	counter2=counter2+1 ;
	}
	return 0;

}





