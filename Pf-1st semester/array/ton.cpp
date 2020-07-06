#include <iostream>
using namespace std;
int main()
{
	const int size=10;
	int array[size];
	int i=1;
	int n;
	cout <<"Enter no" <<endl;
	cin >>n;
	int j=1;
	for (i=1 ; i<=size ; i++)
	{
	array[i]=i;
		while (j==i)
		{
			cout <<n << "*" << array[i] <<  "=" << n*array[i] <<endl;; 
			j++;
		}
	}

return 0;
} 
