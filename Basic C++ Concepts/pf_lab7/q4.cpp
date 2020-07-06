
#include <iostream>
using namespace std;
int main()
{
	const int size=10;
	int array[size];
	int i=0;
	
	int n;
	
	
	for (i=0 ; i<size ; i++ )
	{
		cin >> array[i];
	}
	
	for (i=0 ; i<size ; i++)
	{
	cout << array[i] <<endl;
	}
	
cout <<"Enter no " <<endl;
	cin >> n;
	
	int count=0;

	for (i=0 ; i<size ; i++)
	{
	if (array[i]==n )
	count=count+1 ;
	}

cout <<"No of time" << count <<endl;
return 0;

}
