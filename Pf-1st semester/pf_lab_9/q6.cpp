#include<iostream>
#include<cstdlib>
#include<time.h>
using namespace std;

int coinToss(int n, int t)
{
	srand(time(NULL));

	for(int i=1;i<=t;i++)
	{
		n= 1+ rand()%2;
	
		if(n==1)
		cout<<" HEADS "<<endl;

		if(n==2)
		cout<<" TAILS "<<endl;	
	}



}


int main()
{
	int n,t;
	cout<<" HOW MANY TIMES DO YOU WANT TO TOSS THE COIN? "<<endl;
	cin>>t;

	while (t<=0)
	{
	cout<<" CANNOT BE ZERO OR LESS THAN ZERO. "<<endl<<" PLEASE ENTER AGAIN "<<endl;
	cin>>t;
	} 

	int r=coinToss( n,t);
}

