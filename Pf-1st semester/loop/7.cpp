#include <iostream>
using namespace std;
int main()
{
int n;
cout <<"Enter no" <<endl;
cin >>n;

int i=1;
int sum=0;
while (i<=n)
{

if (i%2==0)
{
sum=sum+i ;
}
i++ ;

}

cout <<"Sum is" <<sum;
return 0;
}
