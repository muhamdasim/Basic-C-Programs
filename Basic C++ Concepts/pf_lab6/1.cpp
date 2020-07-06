


#include <iostream>
using namespace std;
int main()
{
int n1;
int n2;
cout <<"Enter no " <<endl;
cin >> n1;
cout <<"Enter no 2 " << endl;
cin >> n2;
int choice ;
float pro;
int i=1;
int fac=1;
float result=1;
cout <<"Press 1 for n1^n2" << " Press 2 for n1!+n2! " << endl;
cin >> choice;
if (choice==1 )
{

for(int i=1 ; i <= n2; ++i)
{
pro=float (1)/n1 ;
    result = result/pro;
}

cout << result << endl;

}


if (choice==2)
{

	while (i<=n1)
	{

pro=float (1)/n1 ;
    result = result/pro;

	}
cout <<"factorial is" << fac <<endl;
}
return 0;

}






















return 0;
}
