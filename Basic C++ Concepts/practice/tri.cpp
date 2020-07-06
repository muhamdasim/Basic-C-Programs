#include <iostream>
using namespace std;
int main ()
{
int i,j,n;
char y;
counter:
cout <<"Enter no" <<endl;

cin >> n ;
cout <<"Press y to exit " <<endl;
cin>>y ;


for (i=1 ; i<=n ; i++ )
{
if (n=='y') 
{
goto end;
}

for (j=1 ; j<=i ; j++ )
{
cout <<"*" ;
}
cout <<endl;

}

goto  counter ;

end:
return 0;

}
