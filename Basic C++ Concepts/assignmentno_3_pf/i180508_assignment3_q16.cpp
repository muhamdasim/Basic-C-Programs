#include <iostream>
using namespace std;
int main ()
{
	cout <<"Menu" <<endl;
	cout <<"Enter your choice " <<endl ;
	cout <<"• B=Burger " <<endl << "• F=French Fries" <<endl <<"• P=Pizza" <<endl <<"• S=Sandwiches" <<endl ;
	char choice ;
	cin >>choice ;
	switch (choice) 
	{
	case 'B':
	int menu;
	cout <<"Chose your Type of food" <<endl <<"1. Burger 1 Rs 200" <<endl <<"2. Burger 2 Rs 250" <<endl <<"3. Burger 3 Rs 300" 		  <<endl <<"4. Burger 4 of Rs 350" <<endl ;
	cin >>menu ;
	switch (menu)
	{

	case 1:
	char quantity;
	cout <<"Chose your quantity" <<endl <<"• For 1 Burger = A " <<"• For 2 Burgers = B" <<endl <<"• For 4 Burgers = C" <<endl ;
	cin >>quantity;
	switch (quantity)
	{
	case 'A': 
	cout <<"Bill is " <<200*1 ;
	break;
	case 'B':
	cout <<"Bill is " <<200*2 ;
	break;
	case 'C':
	cout <<"Bill is " <<200*4 ;
	break;
	}
	break ;
	case 2:
	cout <<"Chose your quantity" <<endl <<"• For 1 Burger = A " <<"• For 2 Burgers = B" <<endl <<"• For 4 Burgers = C" <<endl ;
	cin >>quantity;
	switch (quantity)
	{
	case 'A': 
	cout <<"Bill is " <<250*1 ;
	break;
	case 'B':
	cout <<"Bill is " <<250*2 ;
	break;
	case 'C':
	cout <<"Bill is " <<250*4 ;
	break;
	}
	break;

	case 3:
	cout <<"Chose your quantity" <<endl <<"• For 1 Burger = A " <<"• For 2 Burgers = B" <<endl <<"• For 4 Burgers = C" <<endl ;
	cin >>quantity;
	switch (quantity) 
	{
	case 'A': 
	cout <<"Bill is " <<300*1 ;
	break;
	case 'B':
	cout <<"Bill is " <<300*2 ;
	break;
	case 'C':
	cout <<"Bill is " <<300*4 ;
	break;
	}
	break;
	case 4:
	cout <<"Chose your quantity" <<endl <<"• For 1 Burger = A " <<"• For 2 Burgers = B" <<endl <<"• For 4 Burgers = C" <<endl ;
	cin >>quantity;
	switch (quantity)
	{
	case 'A': 
	cout <<"Bill is " <<350*1 ;
	break;
	case 'B':
	cout <<"Bill is " <<350*2 ;
	break;
	case 'C':
	cout <<"Bill is " <<350*4 ;
	break ;
	}
	break;
	}
	break;
	case 'F':
	cout <<"Chose your Type of food" <<endl <<"1. Fries 1 Rs 200" <<endl <<"2. Fries 2 Rs 250" <<endl <<"3. Fries  3 Rs 300" <<endl <<"4. 		Fries  4 of Rs 350" <<endl ;
	cin >>menu ; 
	switch (menu)
	{
	case 1:
	char quantity;
	cout <<"Chose your quantity" <<endl <<"• For 1 Fries  = A " <<"• For 2 Fries  = B" <<endl <<"• For 4 Fries  = C" <<endl ;
	cin >>quantity;
	switch (quantity)
	{
	case 'A': 
	cout <<"Bill is " <<200*1 ;
	break;
	case 'B':
	cout <<"Bill is " <<200*2 ;
	break;
	case 'C':
	cout <<"Bill is " <<200*4 ;
	break;
	}
	break;
	case 2:
	cout <<"Chose your quantity" <<endl <<"• For 1 Fries = A " <<"• For 2 Fries  = B" <<endl <<"• For 4 Fries  = C" <<endl ;
	cin >>quantity;
	switch (quantity)
	{
	case 'A': 
	cout <<"Bill is " <<250*1 ;
	break;
	case 'B':
	cout <<"Bill is " <<250*2 ;
	break;
	case 'C':
	cout <<"Bill is " <<250*4 ;
	break;
	}
	break;
	case 3:
	cout <<"Chose your quantity" <<endl <<"• For 1 Fries  = A " <<"• For 2 Fries  = B" <<endl <<"• For 4 Fries = C" <<endl ;
	cin >>quantity;
	switch (quantity)
	{
	case 'A': 
	cout <<"Bill is " <<300*1 ;
	break;
	case 'B':
	cout <<"Bill is " <<300*2 ;
	break;
	case 'C':
	cout <<"Bill is " <<300*4 ;
	break;
	}
	break;
	case 4:
	cout <<"Chose your quantity" <<endl <<"• For 1 Fries  = A " <<"• For 2 Fries  = B" <<endl <<"• For 4 Fries  = C" <<endl ;
	cin >>quantity;
	switch (quantity)
	{
	case 'A': 
	cout <<"Bill is " <<350*1 ;
	break;
	case 'B':
	cout <<"Bill is " <<350*2 ;
	break;
	case 'C':
	cout <<"Bill is " <<350*4 ;

	break ;
	}
	break;
	}
	break;
	case 'P':
	cout <<"Chose your Type of food" <<endl <<"1. Pizza 1 Rs 200" <<endl <<"2. Pizza 2 Rs 250" <<endl <<"3. Pizza  3 Rs 300" <<endl 		<<"4.Pizza  4 of Rs 350" <<endl ;
	cin >>menu ;
	switch (menu)
	{
	case 1:
	char quantity;
	cout <<"Chose your quantity" <<endl <<"• For 1 Pizza  = A " <<"• For 2 Pizza  = B" <<endl <<"• For 4 Pizza  = C" <<endl ;
	cin >>quantity;
	switch (quantity)
	{
	case 'A': 
	cout <<"Bill is " <<200*1 ;
	case 'B':
	cout <<"Bill is " <<200*2 ;
	case 'C':
	cout <<"Bill is " <<200*4 ;
	}
	break;

	case 2:


	cout <<"Chose your quantity" <<endl <<"• For 1 Pizza = A " <<"• For 2 Pizza  = B" <<endl <<"• For 4 Pizza  = C" <<endl ;
	cin >>quantity;
	switch (quantity)
	{
	case 'A': 
	cout <<"Bill is " <<250*1 ;
	break;
	case 'B':
	cout <<"Bill is " <<250*2 ;
	break;
	case 'C':
	cout <<"Bill is " <<250*4 ;
	break;
	}
	break;
	case 3:
	cout <<"Chose your quantity" <<endl <<"• For 1 Pizza  = A " 		<<"• 	For 2 Pizza  = B" <<endl <<"• For 4 Pizza = C" <<endl ;
	cin >>quantity;
	switch (quantity)
	{
	case 'A': 
	cout <<"Bill is " <<300*1 ;
	break;
	case 'B':
	cout <<"Bill is " <<300*2 ;
	break;
	case 'C':
	cout <<"Bill is " <<300*4 ;
	break;
	}
	break;
	case 4:


	cout <<"Chose your quantity" <<endl <<"• For 1 Pizza  = A " <<"• For 2 Pizza  = B" <<endl <<"• For 4 Pizza  = C" <<endl ;
cin >>quantity;
	switch (quantity)
	{
	case 'A': 
	cout <<"Bill is " <<350*1 ;
	break;
	case 'B':
	cout <<"Bill is " <<350*2 ;
	break;
	case 'C':
	cout <<"Bill is " <<350*4 ;
	break ;

	}
	break;
	}
	break;
	case 'S':

	cout <<"Chose your Type of food" <<endl <<"1. Sandwitches 1 Rs 200" <<endl <<"2. Sandwitches 2 Rs 250" <<endl <<"3. Sandwitches 3 Rs 300" <<endl <<"4.Sandwitches  4 of Rs 350" <<endl ;
	cin >>menu ;
	switch (menu)
	{
	case 1:
	char quantity;
	cout <<"Chose your quantity" <<endl <<"• For 1 Sandwitches  = A " <<"• For 2 Sandwitches  = B" <<endl <<"• For 4 Sandwitches  = C" <<endl ;
	cin >>quantity;
	switch (quantity)
	{
	case 'A': 
	cout <<"Bill is " <<200*1 ;
	break;
	case 'B':
	cout <<"Bill is " <<200*2 ;
	break;
	case 'C':
	cout <<"Bill is " <<200*4 ;
	break;
	}
	break;
	case 2:

 
	cout <<"Chose your quantity" <<endl <<"• For 1 Sandwitches = A " <<"• For 2 Sandwitches= B" <<endl <<"• For 4 Sandwitches  = C" <<endl ;
	cin >>quantity;
	switch (quantity)
	{
	case 'A': 
	cout <<"Bill is " <<250*1 ;
	break;
	case 'B':
	cout <<"Bill is " <<250*2 ;
	break;
	case 'C':
	cout <<"Bill is " <<250*4 ;
	break;
	}
	
	break;
	case 3:


	cout <<"Chose your quantity" <<endl <<"• For 1 Sandwitches  = A " <<"• For 2 Sandwitches  = B" <<endl <<"• For 4 Sandwitches= C" <<endl ;
	cin >>quantity;
	switch (quantity)
	{
	case 'A': 
	cout <<"Bill is " <<300*1 ;
	break;
	case 'B':
	cout <<"Bill is " <<300*2 ;
	break;
	case 'C':
	cout <<"Bill is " <<300*4 ;
	break;
	}
	break;
	case 4:


	cout <<"Chose your quantity" <<endl <<"• For 1 Sandwitches  = A " <<"• For 2 Sandwitches  = B" <<endl <<"• For 4 Sandwitches  = C" <<endl ;
	cin >>quantity;
	switch (quantity)
	{
	case 'A': 
	cout <<"Bill is " <<350*1 ;
	break;
	case 'B':
	cout <<"Bill is " <<350*2 ;
	break;
	case 'C':
	cout <<"Bill is " <<350*4 ;
	break ;

	}

	break;
	}


	}

	return 0;
}

