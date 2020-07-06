#include <iostream>
using namespace std;
int main()
{
int a,b,c;
cin >> a;
cin >> b;
cin >> c;

int max;

max= (a>b && a>c) ? a : (b>a && b>c )? b : c ;
cout <<"Max " << max ;
return 0;

}

