#include <iostream>
using namespace std;
void date_fun(char date[],int size)
{



	
	cout<<"CONVERTED FORM IS"<<endl;
	
	if (date[0]=='0' && date[1]=='1')
	{
		cout<<"January "<<""<<date[3] <<date[4] <<" , " <<date[6] <<date[7] << date[8] <<date[9]<<endl;                               
	}

	if (date[0]=='0' && date[1]=='2')
	{
		cout<<"FEBUARY "<<""<<date[3] <<date[4] <<" , " <<date[6] <<date[7] << date[8] <<date[9]<<endl;                               
	}

	if (date[0]=='0' && date[1]=='3')
	{
		cout<<"MARCH "<<""<<date[3] <<date[4] <<" , " <<date[6] <<date[7] << date[8] <<date[9]<<endl;                               
	}

	if (date[0]=='0' && date[1]=='4')
	{
		cout<<"APRIL "<<""<<date[3] <<date[4] <<" , " <<date[6] <<date[7] << date[8] <<date[9]<<endl;                               
	}
	if (date[0]=='0' && date[1]=='5')
	{
		cout<<"MAY "<<""<<date[3] <<date[4] <<" , " <<date[6] <<date[7] << date[8] <<date[9]<<endl;                               
	}
	if (date[0]=='0' && date[1]=='6')
	{
		cout<<"JUNE "<<""<<date[3] <<date[4] <<" , " <<date[6] <<date[7] << date[8] <<date[9]<<endl;                               
	}
	if (date[0]=='0' && date[1]=='7')
	{
		cout<<"JULY "<<""<<date[3] <<date[4] <<" , " <<date[6] <<date[7] << date[8] <<date[9]<<endl;                               
	}

	if (date[0]=='0' && date[1]=='8')
	{
		cout<<"AUGUST "<<""<<date[3] <<date[4] <<" , " <<date[6] <<date[7] << date[8] <<date[9]<<endl;                               
	}
	if (date[0]=='0' && date[1]=='9')
	{
		cout<<"SEPTEMBER "<<""<<date[3] <<date[4] <<" , " <<date[6] <<date[7] << date[8] <<date[9]<<endl;                               
	}
	if (date[0]=='1' && date[1]=='0')
	{
		cout<<"OCTOBER "<<""<<date[3] <<date[4] <<" , " <<date[6] <<date[7] << date[8] <<date[9]<<endl;                               
	}
	if (date[0]=='1' && date[1]=='2')
	{
		cout<<"DECEMBER "<<""<<date[3] <<date[4] <<" , " <<date[6] <<date[7] << date[8] <<date[9]<<endl;                               
	}

}


int main()
{

char date[11];
cout<<"Enter date in the format mm/dd/yyyy"<<endl;
cin.getline(date,11);
date_fun(date ,11);
}



