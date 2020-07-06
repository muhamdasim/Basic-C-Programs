#include <time.h>
#include <iomanip>
#include <iostream>
#include <cstdlib>
using namespace std;
int main()
{

srand(time(NULL));

int alpha=rand()%(26)+97;
int ord=rand() %2;

if (ord==1)
{
while (alpha>=97 && alpha<=122)
{
cout <<char(alpha);
alpha++;
}
}
else 
{
while (alpha>=97 && alpha<=122)
{
cout <<char(alpha);
alpha--;
}
}
return 0;
}

