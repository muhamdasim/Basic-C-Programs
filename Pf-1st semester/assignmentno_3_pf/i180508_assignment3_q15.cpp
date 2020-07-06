#include<iostream>
using namespace std;
int main()
{
	int p1,p2;
	cout <<"Welcome to game" <<endl;
	cout <<"Instructions " << endl <<"Press 1 for rock " <<endl <<"Press 2 for paper " << endl <<"Press 3 fpr scissor" << endl;
	cout <<"You are player one " <<endl << "Enter your choice" <<endl;
	cin>>p1;
	cout <<"You are player two " <<endl << "Enter your choice" <<endl;
	cin>>p2;
	if (p1<1 || p1 >3 || p2<1 || p2>3 )
	{
		cout <<"You have chose a wrong option" ;
	}

	else if(p1==1 && p2==2 || p1==2 && p2==1 )
	{	
	cout<<"Player 2 Wins";
	}
	else if(p1==1 && p2==3 || p1==3 && p2==1 )
	{
		cout<<"Player 1 Wins";
	}
	else if(p1==2 && p2==3 || p1==3 && p2==2)
	{
		cout<<"player 3 wins";
	}
	else 
	{
		cout <<"Draw" ;
	}

return 0;

}

