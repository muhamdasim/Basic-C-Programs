#include <iostream>
using namespace std;
int main()
{
int n;
cout <<"Enter no of lines" <<endl;
cin >> n;
int i=1 ;
int j=1 ;

while (i<=n )
{
j=i;
while (j<=n )
{

cout <<" " ;
j=j+1;
}
j=1 ;
while (j<=i )
{

cout <<i ;
j=j+1;
}

cout <<endl;
i=i+1;
}
return 0;
}
