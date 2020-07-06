#include <iostream>
using namespace std;
int main()
{
	int n;
	cout <<"Enter no of integer" <<endl;
	cin >> n;
	int b=1 ,sum=0;

	int k;
	while (n!=0)
	{	
		k=n%10 ;
		sum=sum+k*b ;
		b=b*2 ;
		n=n/10 ;


	}	

	cout <<"Decimal is " << sum;
	
return 0;
}
