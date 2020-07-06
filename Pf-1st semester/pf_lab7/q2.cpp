

#include <iostream>
using namespace std;
int main()
{
	const int size=10;
	int array[size];
	int max;
	int b[size];
	int i=0;
	int n;
	cout <<"Enter no " <<endl;
	cin >> n;

	for (i=0 ; i<size ; i++ )
	{

		cin >> array[i];

		if (array[i]>n )
			
		b[i]=array[i];
	

	}
		
	for (i=0 ; i<size ; i++)
		
	{
		
	cout << b[i] << endl;
		
	}
	
	
	return 	0;


}
	
	

