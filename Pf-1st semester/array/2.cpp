#include <iostream>
using namespace std;
int main()
{
const int size=5;
int array[size];
int i;
for (i=0 ; i<5 ; i++)
{
	cin >> array[i] ;
	if (array[i] <0 )
		cout <<array[i];
	}
return 0;
}
