#include <iostream>
using namespace std;
int main()
{
int n ,i=1 , sum=0 ;
cin>>n ;
int j=1 ,fac=1 ;

while (i<=n)
{
sum=sum+i;
i+=1;



while (j<=n)
{
fac=fac*j;
j+=1;
}
}

cout <<"Result is" << float (sum)/fac <<endl;

return 0;
}
