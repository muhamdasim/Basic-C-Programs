#include <iostream>
using namespace std;
int main()
{
const int size=5;
int array[size];
int i=0;
int sum=0;
for (i=0 ; i<5 ; i++)
{
cin >> array[i];
sum=sum+array[i];
}
cout <<"sum is" <<sum ;

return 0;

}
