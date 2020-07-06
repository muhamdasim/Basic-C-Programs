#include <iostream>
using namespace std;
int main()
{
	char store[20]={'A','C','A','A','D','B','C','A','C','B','A','D','C','A','D','C','B','B','D','A'};
	char ans[20];
	int count=0;	
	int i=0;
	
	
// checking user seletion
	cout <<"Enter your ans" <<endl;
	for (int i=0 ; i<20 ; i++ )
	{	
		cin >>ans[i];
	}
// checking pass or fail
	for (int i=0 ; i<20 ; i++)
	{	
		if (ans[i]==store[i] )
		{		
			count++;
		}
		
	}
	cout <<count <<endl;
	if (count>=15)
	{
		cout <<"Passed" <<endl;
	}
	else
	{
		cout <<"Failed" <<endl;
	}		
		
// checking correct and incorrect ans;
	for (i=0 ; i<20 ; i++)
	{

		if (ans[i]==store[i])
		{
			cout <<"For Question no" << i+1 <<" Ans is correct " <<endl;
		}

		if (ans[i]!=store[i])
		{
			cout <<"For Question no" << i+1 <<" Ans is  incorrect " <<endl;
		}
	}

return 0;

}















