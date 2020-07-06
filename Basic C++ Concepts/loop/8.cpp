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

sum=sum+i;
i=i+2 ;

}

cout <<"Sum is" <<sum;
return 0;
}
