#include <iostream>
using namespace std;
int main()
{
 
int n,m;
cout <<"enter no " <<endl;
cin >> n;
int sum=1;
while (n!=0)
{
sum=sum *( n%10) ;

n=n/10 ;

}

cout <<"Sum is: " <<sum ;







 










return 0;

}
