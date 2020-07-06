
#include <iostream>
using namespace std;
int main()
{
	int cal,fat,cff,tc;
	float per;
	cout <<"Enter no of calories" <<endl;
	cin >>cal;
	cout <<"Enter no of fats" <<endl;
	cin >> fat;
	tc=cal+cff ;
	cff=fat*9 ;
	per=(float (cff)/tc)*100 ;
	if (cal <0 || fat <0 || cff>tc)
	{
		cout <<"calories or fat grams were incorrectly entered" <<endl;
	}
	else if (cff<30)
	{
		cout <<"food is low in fat" <<endl;
	}
	else if ( tc>cff)
	{
		cout <<"Percentage of calories:" << per ;
	}
	return 0;
}
