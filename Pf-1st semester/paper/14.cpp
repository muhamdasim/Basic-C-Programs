#include <iostream>
using namespace std;

void check(int array[] , int n)
{
	for (int i=0 ; i<n ; i++)
	{
		
		cout <<array[i];
	}
}

int main()
{

	int n;
	cin >>n;
	
	int array[5];
	
	for (int i=0 ; i<n ; i++)
	{
		cin>>array[i];
	}
	
	check(array,n);
}
