#include <iostream>
using namespace std;
int main()
{
	const int size=5;
	int array[size];
	int max;
	int i=0;
	for (i=0 ; i<size ; i++ )
	{
		cin >> array[i];

		if (array[i]>max)
		max=array[i];

	}
	cout <<"Max " <<max ;
return 0;
}
