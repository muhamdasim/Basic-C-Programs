
#include <iostream>
using namespace std;
int main()
{
char a;
cout <<"Enter character " << endl;
cin >> a;

int n;
cout <<"Enter integer" <<endl;
cin >> n;

int i,j;
for (i=1 ; i<=n ; i++ )
{
for (j=1 ; j<i ; j++ )
{
cout <<" "; 
}
for (j=1 ; j<=n*2 - (2*i-1) ; j++ )
{
cout <<a;
}
cout <<endl;
}
return 0;
}
