#include <iostream>
using namespace std;
int main()
{
	int terms;
	cout <<"Enter no " <<endl;
	cin>>terms;
	int i=1 , j=2,count=1 ;
	while (count<=terms)
	{
		while (count<=terms)
		{

			cout <<i; 
			cout <<"/"  ;
			cout <<j;
			cout <<"," ;
			j*=2 ;
			i=i*2 +1 ;
			count++ ;
		}



	}
	return 0;

}
