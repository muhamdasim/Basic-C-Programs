	

#include <iostream>
using namespace std;
int main()
{
	int n;
	cout <<"Enter no of integer" <<endl;
	cin >> n;
	int sum=0;
	int k;
	while (n!=0)
	{	
		k=n%10 ;
		n=n/10 ;
		sum=sum+k ;
		cout <<k;	
	}	


	cout <<"\nSum is" << sum ;
return 0;
}
