#include <iostream>
using namespace std;
void element(int array[] , int size)
{
	int i=0;
	int neo[size+1];
	for (int i=0  ; i<size; i++)
	{
		neo[i+1]=*(array+i);
	}
	neo[0]=0;
	cout<<neo[0]<<endl;
	for (i=1 ; i<size+1 ; i++)
	{
		cout<<*(neo+i)<<endl;
	}
}

int main()
{

	int size=5;
	int array[size];
	int i=0;
	for (i=0 ; i<size ; i++)
	{
		cin>>array[i];
	}
	element(array,size);
}
	
