

#include <iostream>
using namespace std;
int main()
{
	int array[100];
	int n;
	cout <<"Enter Array size" <<endl;
	cin >>n;
	
	int i=0;
	int sp;

	cout <<"Enter Split point" <<endl;
cin >>sp;

	for (i=0 ; i<n ; i++)
	{
		cin>>array[i];
	}

	for (i=0 ; i<n ; i++)
	{
	

	for (i=sp ; i<n ; i++)
	{
		cout <<array[i] <<endl;
	}
	for (i=0 ; i<sp ; i++)
	{
		cout <<array[i]<<endl;
	
	}

}
