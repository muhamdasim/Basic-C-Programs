#include <iostream>
using namespace std;
int main()
{
	int array[2][2];
	int array2[2][2];
	int i=0;
	int j=0;
	int store[2][2];
	
	for (i=0; i<2 ; i++)
	{
		for (j=0 ; j<2 ; j++)
		{
			cin>>*(*(array+i)+j) ;
		}
	}

	for (i=0; i<2 ; i++)
	{
		for (j=0 ; j<2 ; j++)
		{
			cin>>*(*(array2+i)+j) ; 
		}
	}
	
	
	for (i=0; i<2 ; i++)
	{
		for (j=0 ; j<2 ; j++)
		{
			*(*(store+i)+j)=*(*(array+i)+j)+*(*(array2+i)+j) ;
		}
	}

for (i=0; i<2 ; i++)
	{
		for (j=0 ; j<2 ; j++)
		{	
			cout<<*(*(store+i)+j)<<endl;
		}
	}

}
