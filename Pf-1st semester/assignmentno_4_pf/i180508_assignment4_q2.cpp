#include <iostream>
using namespace std;
int main()
{
	int score , sum=0 ,avg ;
	char y;
	int count=0 ;
	for (sum=0 ;  ;   )
	{
		initial:
		cout <<"Enter score " <<endl;
		cin >>score;
		count=count+1 ;
		sum=sum+score;
		cout <<"do you want to add more , Press y to continue" <<endl;
		cin >>y ;
		if (y=='y' )
			goto initial ;
		else 
		{
			goto average ;
		}
	}
	average:
	cout <<"Average is" << float (sum)/count ; 

return 0;

}
