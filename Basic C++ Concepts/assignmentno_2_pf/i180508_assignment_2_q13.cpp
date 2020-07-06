#include <iostream>
using namespace std;

int main()
{
	double principal, rate, rrate, amount;
	int t;

	cout << "Principal : ";
	cin >> principal;
	cout << "Interest rate : ";
	cin >> rate;
	rrate = (rate / 4.0)*41;
	cout << "Times compounded : ";
	cin >> t;

	amount = principal * (1 + rrate / t) *t;


	cout << "Interest Rate : " << rate ;
	cout << "\nTimes Compounded : " << t ;
	cout << "\nInterest rate   :  " << rrate ;
	cout << "\nPrincipal : $" << principal ;
	cout << "\nAmount in saving $" << principal + rrate ;

return 0;
}
