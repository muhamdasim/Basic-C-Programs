#include <iostream>
using namespace std;

void arraya(int *ptr,int n)
{
	for (int i=0 ; i<n ; i++)
	{
	cout<<*(ptr+i);
	}
	
}

int main()
{
	int size=100;
	int n;
	cout <<"Enter size of array"<<endl;
	cin>>n;
	int array[size];
	
	int *pt
	
	ptr=array;

	for (int i=0 ; i<n ; i++)
	{
		cin>>array[i];
	}
	
	arraya(ptr , n);	

	
	
	return 0;
	
	}
