#include <iostream>
using namespace std;
int main()
{
int x,y,rows;
cout <<"Enter no of rows" <<endl;                                  
cin >>rows;

for (x=1 ; x<=rows ; x++)
{


for (y=x ; y<rows ; y++ )
{
cout <<"  " <<endl;
}

for (y=1 ; y<=(2*x -1 ) ; y++ )
{
cout <<"*" ;
}

cout <<endl;

}

return 0;

}
