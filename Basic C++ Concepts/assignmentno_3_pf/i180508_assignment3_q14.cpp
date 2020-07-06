#include<iostream>
using namespace std;
int main()
{
	int p1,p2;
	cout <<"Welcome to game" <<endl;
	cout <<"Instructions " << endl <<"Press 1 for rock " <<endl <<"Press 2 for paper " << endl <<"Press 3 for scissor" << endl;
	cout <<"You are player one " <<endl << "Enter your choice" <<endl;
	cin>>p1;
	cout <<"You are player two " <<endl << "Enter your choice" <<endl;
	cin>>p2;
	switch (p1)			
	{

	case 1:
	if(p2==3)
	cout<<"player 1 wins" ;
	else if(p2==2)
	cout<<"player 2 wins" ;
	else if(p2==1)
	cout<<"Draw";
	break;
	case 2:
	if(p2==1)
	cout <<"Player 1 wins" ;
	if(p2==3)
	cout <<"Player 2 wins" ;
	if(p2==2)
	cout <<"Draw" ;
	break ;

	case 3:
	if(p2==1) 
	cout <<"Player 2 wins" ;
	if(p2==2)
	cout <<"Player 1 wins" ;
	if(p2==3)
	cout <<"Draw" ;
	break;


	} 



	return 0;

}

