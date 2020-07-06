#include <iostream>
using namespace std;
int main()
{
const int size=5;
int array[size];
int i=0;
int sum=0;
int sum1=0;
for (i=0 ; i<size ; i++)
{
cin >> array[i];

	if (array[i]%2==0 )
		sum=sum+array[i];
	if (array[i]%2!=0)
		sum1=sum1+array[i];
}
cout <<"Sum of even no " << sum << endl;
cout <<"Sum of odd no " << sum1 <<endl;

return 0;
}
