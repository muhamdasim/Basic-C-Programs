#include <iostream>
using namespace std;
int main()
{
int n;
cout <<"Enter no of lines" <<endl;
cin >> n;
int i=1 ;
int j=1 ;

for (i=1 ; i<=n ; i++ )
{

for (j=i ; j<=n ; j++ )
{
cout <<" " ;
}

for (j=1 ; j<=i ; j++ )
{
cout <<"*" ;
}

cout <<endl;
}
return 0;
}
