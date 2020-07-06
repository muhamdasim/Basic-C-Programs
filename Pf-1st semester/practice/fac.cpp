#include <iostream>
using namespace std;
int main()
{
int n;
int fac=1, i=1 ;
cin >> n;
while (i<=n)
{
fac=fac*i;
i+=1 ;
}
cout <<"factorial is" << fac <<endl;

int sum=0;

int j=1;

while (j<=fac )
{
sum=sum+j;
j=j+1 ;
}
cout <<"Sum is" <<sum <<endl;

return 0;
}
