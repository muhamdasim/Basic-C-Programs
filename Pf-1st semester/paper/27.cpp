#include <iostream>
using namespace std;
int main()
{
	int n;
	cin >>n;
	int array[100];
	int count=0;
	int count1=0;
	int store[100];

	for (int i=0 ; i<n ; i++)
	{	
		cin>>array[i];
	}
	
	for (int i=0 ; i<n ; i++)
	{
		for (int j=i ; j<i+2 ; j++)
		{
			if (array[i]==array[j])
			{
				count++;
			}
		}
		if (count==2)
		{
			count1++;
			cout <<array[i];
		}
	}
s
}
		
