

#include <iostream>
using namespace std;
int main()
{
	cout <<"Menu" <<endl;
	cout <<"Enter your choice " <<endl ;
	cout <<"• B=Burger " <<endl << "• F=French Fries" <<endl <<"• P=Pizza" <<endl <<"• S=Sandwiches" <<endl ;
	char choice ;
	cin >>choice ;
	char A,B,C,D ;
	int quan ;
	if (choice=='B')
	{
		int cat;
		cout <<"Chose your Type of food" <<endl <<"1. Burger 1 Rs 200" <<endl <<"2. Burger 2 Rs 250" <<endl <<"3. Burger 3 Rs 300" 		 	 <<endl <<"4. Burger 4 of Rs 350" <<endl ;
		cin >>cat ;
		if (cat==1 )
		{
			cout <<"Chose your quantity" <<endl <<"• For 1 Burger =Press 1 " <<"• For 2 Burgers = Press 2" <<endl <<"• For 4 				Burgers = Press 4" 		<<endl ;
			cin >>quan;

			cout <<"Your bill is" << quan*200 ;
		}
		if (cat==2 )
		{
			cout <<"Chose your quantity" <<endl <<"• For 1 Burger =Press 1 " <<"• For 2 Burgers = Press 2" <<endl <<"• For 4 				Burgers = 	Press 4" <<endl ;
			cin >>quan;
			cout <<"Your bill is" << quan*250 ;
		}
		if (cat==3 )
		{
			cout <<"Chose your quantity" <<endl <<"• For 1 Burger =Press 1 " <<"• For 2 Burgers = Press 2" <<endl <<"• For 4 				Burgers = Press 4" <<endl ;
			cin >>quan;
			cout <<"Your bill is" << quan*300 ;
		}
		if (cat==4 )
		{
			cout <<"Chose your quantity" <<endl <<"• For 1 Burger =Press 1 " <<"• For 2 Burgers = Press 2" <<endl <<"• For 4 				Burgers = Press 4" <<endl ;
			cin >>quan;
			cout <<"Your bill is" << quan*350 ;
		}
	}


	if (choice=='F')
	{
		int cat;
		cout <<"Chose your Type of food" <<endl <<"1. Fries 1 Rs 200" <<endl <<"2. Fries 2 Rs 250" <<endl <<"3. Fries 3 Rs 300" 		 	 <<endl <<"4. Fries 4 of Rs 350" <<endl ;
		cin >>cat ;
		if (cat==1 )
		{
			cout <<"Chose your quantity" <<endl <<"• For 1 Fries =Press 1 " <<"• For 2 Fries = Press 2" <<endl <<"• For 4 				Fries = Press 4" <<endl ;
			cin >>quan;

			cout <<"Your bill is" << quan*200 ;
		}
		if (cat==2 )
		{
			cout <<"Chose your quantity" <<endl <<"• For 1 Fries =Press 1 " <<"• For 2 Fries = Press 2" <<endl <<"• For 4 				Fries = 	Press 4" <<endl ;
			cin >>quan;
			cout <<"Your bill is" << quan*250 ;
		}
		if (cat==3 )
		{
			cout <<"Chose your quantity" <<endl <<"• For 1 Fries =Press 1 " <<"• For 2 Fries = Press 2" <<endl <<"• For 4 				Fries = Press 4" <<endl ;
			cin >>quan;
			cout <<"Your bill is" << quan*300 ;
		}
		if (cat==4 )
		{
			cout <<"Chose your quantity" <<endl <<"• For 1 Fries =Press 1 " <<"• For 2 Fries = Press 2" <<endl <<"• For 4 				Fries = Press 4" <<endl ;
			cin >>quan;
			cout <<"Your bill is" << quan*350 ;
		}
	}









if (choice=='P')
	{
		int cat;
		cout <<"Chose your Type of food" <<endl <<"1. Pizza 1 Rs 200" <<endl <<"2. Pizza 2 Rs 250" <<endl <<"3. Pizza 3 Rs 300" 		 	 <<endl <<"4. Pizza 4 of Rs 350" <<endl ;
		cin >>cat ;
		if (cat==1 )
		{
			cout <<"Chose your quantity" <<endl <<"• For 1 Pizza =Press 1 " <<"• For 2 Pizza = Press 2" <<endl <<"• For 4 				Pizza = Press 4" <<endl ;
			cin >>quan;

			cout <<"Your bill is" << quan*200 ;
		}
		if (cat==2 )
		{
			cout <<"Chose your quantity" <<endl <<"• For 1 Pizza =Press 1 " <<"• For 2 Pizza = Press 2" <<endl <<"• For 4 				Pizza = 	Press 4" <<endl ;
			cin >>quan;
			cout <<"Your bill is" << quan*250 ;
		}
		if (cat==3 )
		{
			cout <<"Chose your quantity" <<endl <<"• For 1 Pizza =Press 1 " <<"• For 2 Pizza = Press 2" <<endl <<"• For 4 				Pizza = Press 4" <<endl ;
			cin >>quan;
			cout <<"Your bill is" << quan*300 ;
		}
		if (cat==4 )
		{
			cout <<"Chose your quantity" <<endl <<"• For 1 Pizza =Press 1 " <<"• For 2 Pizza = Press 2" <<endl <<"• For 4 				Pizza = Press 4" <<endl ;
			cin >>quan;
			cout <<"Your bill is" << quan*350 ;
		}
	}







if (choice=='S')
	{
		int cat;
		cout <<"Chose your Type of food" <<endl <<"1. Pizza 1 Rs 200" <<endl <<"2. Pizza 2 Rs 250" <<endl <<"3. Pizza 3 Rs 300" 		 	 <<endl <<"4. Pizza 4 of Rs 350" <<endl ;
		cin >>cat ;
		if (cat==1 )
		{
			cout <<"Chose your quantity" <<endl <<"• For 1 Pizza =Press 1 " <<"• For 2 Pizza = Press 2" <<endl <<"• For 4 				Pizza = Press 4" <<endl ;
			cin >>quan;

			cout <<"Your bill is" << quan*200 ;
		}
		if (cat==2 )
		{
			cout <<"Chose your quantity" <<endl <<"• For 1 Pizza =Press 1 " <<"• For 2 Pizza = Press 2" <<endl <<"• For 4 				Pizza = 	Press 4" <<endl ;
			cin >>quan;
			cout <<"Your bill is" << quan*250 ;
		}
		if (cat==3 )
		{
			cout <<"Chose your quantity" <<endl <<"• For 1 Pizza =Press 1 " <<"• For 2 Pizza = Press 2" <<endl <<"• For 4 				Pizza = Press 4" <<endl ;
			cin >>quan;
			cout <<"Your bill is" << quan*300 ;
		}
		if (cat==4 )
		{
			cout <<"Chose your quantity" <<endl <<"• For 1 Pizza =Press 1 " <<"• For 2 Pizza = Press 2" <<endl <<"• For 4 				Pizza = Press 4" <<endl ;
			cin >>quan;
			cout <<"Your bill is" << quan*350 ;
		}
	

	

}








	return 0;
}









