#include <iostream>
using namespace std;
int main()
{
const int size=5;
int array[size];

int i=0;
int count=0;
int count1=0;
int max=-1000;
for (i=0 ; i<size; i++)
{
	cin >> array[i];
	
if (array[i]%2==0)
count=count+1;

else

count1=count1+1;
}
cout <<"Even " <<count <<endl;
cout <<"Odd " <<count1 <<endl;

return 0;

}
