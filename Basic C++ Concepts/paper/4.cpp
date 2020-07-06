#include <iostream>
using namespace std;

void copy(int *ptr , int size )
{
	int copy1[100];
	int i=0;

		
	for (i=0 ; i<size ; i++)
	{
		
		*(copy1+i)=*(ptr+i);
	}

	for (i=0 ; i<size ; i++)
	{
		
		cout<<*(copy1+i);
	}




}
int main()
{
	int size=100;
	int array[100];

	int n;
	cout <<"Enter size of array"<<endl;
	cin>>n;
	int *ptr;
	ptr=array;
	
	
	for (int i=0 ; i<n ; i++)
	{	
		cin>>*(ptr+i);
	}
	
	copy(ptr , n);
}
