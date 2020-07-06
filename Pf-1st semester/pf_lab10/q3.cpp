#include <iostream>
using namespace std;
void reverse(int array[],int size)
{

	int i=0;
		
	for (i=size-1 ; i>=0 ; i--)
	{
		cout <<array[i]<<" " <<endl;
	}
		
}

int main()
{
	int array[20];
	int size=5;
	int i=0;
	for (i=0 ; i<size ; i++)
	{
		cin>>array[i];
	}
	reverse(array,size);
}
