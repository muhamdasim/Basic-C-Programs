#include <iostream>
using namespace std;
int main()
{
int n, i=1 , j=1 ,sum=0 , fac=1 ;
cout <<"Enter no" <<endl;
cin>>n;

while (i<=n)
{
while (i<=j)
{
fac=fac*i;
i+=1;
j=j+1;
sum=float (i)/j + sum ;
}
i+=1;
}
cout <<sum ;



return 0;
}
