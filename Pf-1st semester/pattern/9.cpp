#include <iostream>
using namespace std;
int main()
{
int n;
cout <<"Enter no of lines " <<endl;
cin >> n;
int i=1;
int j=1;
for (i=1 ; i<=n ; i++ )
{
for (j=1 ; j<=i ; j++ )
{
if (j==1 || i==j || i==n)
{
cout <<"*" ;
}
else 
{
cout << " " ;
}

}
cout <<endl;
}
return 0;
}
