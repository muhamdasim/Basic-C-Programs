
#include <iostream>
using namespace std;
int main()
{
	double s[12];	
	double average[12];
	int i=0;
	int j=0;
	int sum=0;
	int temp;
	initial:
	for (i=0 ; i<12 ; i++ )
	{
		cout <<"Enter rainfall of month " << i+1 <<":" <<endl;
		cin >>s[i];   //input taking
		sum=sum+s[i];  //total rainfall
 			if (s[i]<0 )   //input check 
			{
				cout <<"Please Enter postive values" <<endl;	
				goto initial;
			}			

	}
	
	//monthly average //monthly average //monthly average
	
	for (i=0 ; i<12 ; i++)
	{
		average[i]=s[i]/30;    
	}
	
	//Max and min month find 
	
	for (i=0 ; i<12 ; i++ )
	{
		for (j=0 ; j<12 ; j++)
		{
			if (s[i]>s[j])
			{
				temp=s[i];
				s[i]=s[j];
				s[j]=temp;
			}
		}
	}
	
	
//each month average 

for (i=0 ; i<12 ; i++ )
		{	
			cout <<i+1<<" Month Average: " << average[i] <<endl;
		}
//Max and mini

cout <<"Month with highest rainfall: " <<s[0] <<endl;
cout <<"Month with minimum rainfall: " <<s[11] <<endl;


//total rarinfall 

cout <<"Total Rainfall: " <<sum <<endl;

return 0;
}
