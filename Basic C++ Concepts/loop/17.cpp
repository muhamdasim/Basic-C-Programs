#include <iostream>
using namespace std;
int main()
{
int n;
cout <<"Enter no" <<endl;
cin >> n;
int org=n;

int rev;

while (n!=0)
{
rev=n%10;
n=n/10;
cout << rev;

if (rev==org)
{
cout <<"Pal" ;
}

}




}
