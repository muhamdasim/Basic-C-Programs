
#include <iostream>
using namespace std;
int main()
{
float pro;
int x ;
int y ;
cout <<"Enter no" <<endl;
cin >>x;
cout <<"Enter no" <<endl;
cin>> y;
float result = 1;
for(int i=1 ; i <= y; ++i)
{
pro=float (1)/x ;
    result = result/pro;
}

cout << result << endl;

return 0;

}
