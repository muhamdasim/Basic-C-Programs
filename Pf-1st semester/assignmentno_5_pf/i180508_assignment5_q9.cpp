

#include <iostream>
#include <cstdlib>
using namespace std;
int main()
{	
	int lottery[5];	
	int user[5];\
	int random;
int i=0;
	int count=0;
	for(i=0 ; i<5 ; i++)
	{
			random=rand() % 10;
		lottery[i]=random;
	}

	

	for(i=0 ; i<5 ; i++)
	{
			cin>>user[i];
	}
	
	for(i=0 ; i<5 ; i++)
	{
		if(lottery[i]==user[i])
		{
			count++;
		}
	}

//random

	cout <<"Random Digits are" <<endl;
	for(i=0 ; i<5 ; i++)
	{
				cout<<lottery[i] <<endl;
	}

	cout <<"Digits Matching are: " << count  <<endl;
	
	if (count==5)
	{
		cout<<"Grand PrizeWinner" <<endl;
	}

}
