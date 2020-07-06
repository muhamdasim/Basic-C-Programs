
#include <iostream>
using namespace std;
int main()
{
const int size=10;
int A[size];
int B[size];
int C[size];
int D[size];
int i;
for (i=0 ; i <size ; i++)
	{
		cin >>A[i];
		cin >>B[i] ;
	}
	
for (i=0 ; i<size ; i++)
	{
		C[i]=A[i]-B[i];
		D[i]=B[i]-A[i];
	}
	
for (i=0 ; i<size ; i++)
	{	
	cout <<C[i] <<endl;
	cout <<D[i] <<endl;
	}
return 0;

}
