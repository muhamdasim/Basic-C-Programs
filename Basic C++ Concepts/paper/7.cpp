#include <iostream>
using namespace std;

void sexy(int *array , int n)
{

	int max=-100;
	int min=+100;

	for (int i=0 ; i<n ; i++)
	{	
		if (*(array+i)>max)
		{
			max=*(array+i);
		}
	}

	for (int i=0 ; i<n ; i++)
	{	
		if (*(array+i)<min)
		{
			min=*(array+i);
		}
	}
	
	cout <<"Maximum no"<<endl;
	cout <<endl;
	

	for (int i=1 ; i<=10 ; i++)
	{
		cout<<max<<"*"<<i<<"="<<max*i<<endl;
	}

	cout <<"Minimum no"<<endl;
	cout <<endl;
	

	for (int i=10 ; i>=0 ; i--)
	{
		cout<<min<<"*"<<i<<"="<<min*i<<endl;
	}
	


}

int main()
{
	int array[100];
	int n;
	cout <<"Enter size of array"<<endl;
	cin>>n;
	int *ptr;
	ptr=array;
	int i=0;
	
	for (i=0 ; i<n ; i++)
	{
		cin>>*(ptr+i);
	}

	sexy(ptr,n);
}
