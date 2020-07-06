



#include <iostream>
using namespace std;
int main()
{

int n;
int max=-10000000;
int min=100000000;


while (n!=99)
{



if (n>max)

max=n;
cin >> n;
if (n<min)
min=n;



}
cout <<"Largest no" <<max <<endl;
cout <<"Minimum no" <<min <<endl;

return 0;

}




  
