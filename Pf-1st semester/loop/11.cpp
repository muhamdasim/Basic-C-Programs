#include <iostream>
using namespace std;
int main()
{

int n;
cout <<"Enter no" <<endl;
cin >>n;

int firstdigit;
firstdigit=n ;

n=n%10;

cout <<"Last digit" <<n <<endl;



while (firstdigit>=10 )
{
firstdigit=firstdigit/10 ;
}
cout <<"First digit" <<firstdigit <<endl ;




return 0;

}
