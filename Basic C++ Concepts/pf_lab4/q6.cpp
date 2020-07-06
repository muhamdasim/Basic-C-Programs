#include <iostream>
using namespace std;
int main ()
{
	char a;
	cout <<"Please enter Y, y , N , or n " ;

	cin >> a;
	while (a=='Y' || a=='y' || a=='N' || a=='n' )
	{
		cout <<"Please enter Y, y , N , or n " ;
	cin >> a;
	}
terminate ;

	return 0;
}
