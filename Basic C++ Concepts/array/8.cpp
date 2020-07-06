#include <iostream>
using namespace std;
int main()
{
const int size=5;
int a[size];
int b[size];

int i=0;

for (i=0 ; i<size ; i++)
{
cin >> a[i];

}
for (i=0 ; i<size ; i++) 
{
b[i]=a[i];
}
for (i=0 ; i<size ; i++)
{
cout <<b[i];
}



return 0;
}
