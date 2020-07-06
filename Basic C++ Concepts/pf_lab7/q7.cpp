
	
#include <iostream>
using namespace std;
int main()
{
const int size=10;
int array[size];
int i=0;

for (i=0 ; i<size ; i++)
{
	cin >> array[i];
}

for (i=0 ; i<size ; i++)
	{

	if (array[i]%2==0 )
	cout <<array[i] <<endl;

	
}

for (i=0 ; i<size ; i++)
	{

	if (array[i]%2!=0 )
	cout <<array[i] <<endl;
	
}

}
