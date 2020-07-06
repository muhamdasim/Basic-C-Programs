#include <iostream>
using namespace std;
int main()
{
int n;
cout<<"Enter your no" ;
cin >> n;

int counter=1 ;
int sum=0;

while (counter<=n) 
{

sum=sum+counter;
counter++ ;

}

cout <<"Sum is " << sum ;

return 0;

}
