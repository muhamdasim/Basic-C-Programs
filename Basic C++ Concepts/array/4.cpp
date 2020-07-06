#include <iostream>
using namespace std;
int main()
{
const int size=5;
int array[size];
int i=0;
int max=-10000;
int min=10000;

for (i=0 ; i<size ; i++)
{
cin >>array[i];
if (array[i]>max)
max=array[i];
else 
min=array[i];
}
cout <<"Max" <<max <<endl;

cout <<"Min" <<min;

return 0;
}
