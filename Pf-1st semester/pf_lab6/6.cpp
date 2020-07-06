#include <iostream>
using namespace std;
int main()
{
int i,j;
int n;
cout <<"Enter number of rows" <<endl;
cin >> n;

for (i=1 ; i<=n ; i++  )
{
for (j=i ; j<=n ; j++ )
{
if (i==1 || j==i || j==n)
{
cout <<"*" ;
}
else 
{
cout <<" " ;
}
}
cout <<endl;
}


for (i=1 ; i<=n ; i++  )
{
for (j=1 ; j<=n ; j++ )
{
if (j==1 || i==j || i==n)
{
cout <<"*" ;
}
else 
{
cout <<" " ;
}
}
cout <<endl;
}

return 0;

}

