#include <iostream>
using namespace std;

void reserve_seat()
{
	char name[50];
	char status;
	int passport;
	char choice;
	int pass;
	cout <<"             Welcome to Ticket Booking" <<endl;
	cout <<" Flight Available " <<endl;
	cout <<" pk12                Lahore " <<endl;
	cout <<" pk13                Karachi " <<endl;
	
	cout <<"               Departure from Islamabad only at the moment " <<endl;
	cout <<" Choose your Destination flight " <<endl;
	cout <<"Press K for karachi " <<endl;
	cout <<"Press L for Lahore " <<endl;
	cin>>choice;
	
	if (choice=='L' || choice=='l')
	{
		cout <<"Enter your name" <<endl;
		cin>>name;
		cout <<"Enter your passport no " <<endl;
		cin>>passport;
		cout <<endl;
		cout <<"               Your flight details " <<endl;
	
		cout <<"Name:"<<name <<"              " <<"Passport No"<<passport <<endl;
		cout <<"Arrival Time: 4 PM " <<endl;
		cout <<" Ticket Price: 20,000 " <<endl;
		cout <<"Your Destination Lahore :) " <<endl;
		cout <<endl;
		cout <<"                                    Thank You " <<endl;
		
	}

	if (choice=='K' || choice=='k')
	{
		cout <<"Enter your name" <<endl;
		cin>>name;
		cout <<"Enter your passport no " <<endl;
		cin>>passport;
		cout <<endl;
		cout <<"               Your flight details " <<endl;
		cout <<"Name:"<<name <<"              " <<"Passport No:"<<passport <<endl;
		cout <<"Arrival Time: 4 PM " <<endl;
		cout <<" Ticket Price: 45,000 " <<endl;
		cout <<"Your Destination Karachi :) " <<endl;
		cout <<endl;
		cout <<"                                    Thank You " <<endl;
	}

	//status check;;;;;;

	cout <<"Do you Want to check Flight Status" <<endl;
	cout <<"Press Y to continue" <<endl;
	cin>>status;
	if (status=='Y' || status=='y')
	{
		cout <<"Enter you passport no" <<endl;
		cin>>pass;
		
		if (pass==passport)
		{
			cout <<"You have already booked your flight " <<endl;
		}
	}
	
	
	
		

}
	
	


int main()
{
	
	int choice;
	cout <<"Press 1 for Reserve seat" <<endl;
	cout <<"Press 2 to calculate affairs"<<endl;
	cin>>choice;
	
	switch (choice)
	{
		case 1:
		
			reserve_seat();

		break;
			
		
	}

}
