#include <iostream>
using namespace std;
int main ()


{

int n;
cout <<"Enter no " << endl;
cin >> n;
int fac=1;
int counter=1;


while (counter<=n)
{

fac=counter*fac ; 
counter ++ ;

}


cout <<"Factorial is" << fac ;

return 0;

}
