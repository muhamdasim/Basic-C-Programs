#include <iostream>
using namespace std;
int main()
{
const int size=5;
int array[size];
int i=0;
int max1,max2;
for (i=0 ; i<size ; i++)
{
cin >>array[i];
if (array[i]>max1)
{
max2=max1;
max1=array[i];
}
else if(array[i]>max2 )
max2=array[i];
}
cout <<"Max " <<max1;
cout <<"Min " <<max2;
return 0;
}
