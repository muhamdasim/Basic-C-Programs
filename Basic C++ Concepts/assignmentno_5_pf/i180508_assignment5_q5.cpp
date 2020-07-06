#include <iostream>
using namespace std;
int main()
{
	int empid[6];
	empid[0]=5658845;
	empid[1]=4520125;
	empid[2]=7895122;
	empid[3]=8777541;
	empid[4]=8451277;
	empid[5]=1302850;
	empid[6]=7580489;	
	int hour[7];
	double pr[7];
	double wage[7];
	int i=0;
	initial:
	for (i=0 ; i<7 ; i++)
	{
		cout <<"Employe No: " << i+1 << " ID No:  " <<empid[i]  <<endl;
		cout <<"Enter Hours rate of employee: " << i+1 << endl;
		cin >>hour[i];
		if (hour[i]<0)
		{
			cout <<"Do not enter negative values" <<endl;
			cout <<"Please enter Postive values" <<endl;
			goto initial;
		}
		cout <<"Enter Pay Rate of employee: " << i+1 << endl;
		cin >>pr[i];
		
		if (pr[i]<6)
		{
			cout <<"Enter Pay rate greater than 6" <<endl;
			goto initial;
		}
		
		wage[i]=hour[i]*pr[i];
	}


	for (i=0 ; i<7 ; i++)
	{
		cout <<"Employe No: " << i+1 << " ID No:  " <<empid[i]  <<endl;

		cout <<"Gross wage: " << i+1 <<" is " << wage[i] <<endl;
	}

}



	
