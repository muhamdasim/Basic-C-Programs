#include <iostream>
using namespace std;
int main()
{
const int size=5;
int array[size];
int i=0;
int count=0;

for (i=0 ; i<size ; i++)
{
cin >>array[i];
if (array[i] <0 )
	{
count=count+1;
}
}
cout <<count ;

return 0;
}
