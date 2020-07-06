#include <iostream>
using namespace std;
int main()
{
const int size=5;
int array[size];
int i=0;
float avrg;
int sum=0;

for (i=0 ; i<size ; i++ )
{
	cin >> array[i];
	sum=sum+array[i];
}
avrg=float(sum)/5 ;
cout <<"Average is" << avrg << endl;
return 0;
}
