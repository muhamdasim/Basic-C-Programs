#include <iostream>
using namespace std;
///linear search ;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
int linear(int array[],int size)
{

	int n;
	cout<<"Enter number to find its location"<<endl;
	cin>>n;
	int i=0;
	int location=0;
	for (i=0; i<size ; i++)
	{
		if(array[i]==n)
		{
			location=i+1;
			break;
		}
	}
	if (location==0)
	{
		return -1 ;
	}
	
return location;
}
//binary seach //////////////////////////////////////////////////////////////////////////

void binary(int array[],int size)
{
	int i=0;
	int temp=0;
	int j=0;



		for (i=0 ; i<size ; i++)
		{
			for (j=0 ; j<size ; j++)
			{
				if (array[i]<array[j])
				{
				temp=array[i];
				array[i]=array[j];
				array[j]=temp;
				}
			}
		}

	cout <<"After Sorting " <<endl;

	for (i=0 ; i<size ; i++)
	{
		cout <<array[i] <<endl;
	}




	//binary search

	int f,l,m;

	int num;
	cout <<"Enter number you want to search" <<endl;
	cin>> num;

	f=0;
	l=size-1;
	m=(f+l)/2;
	
	while (f<=l)
	{
		if (array[m]<num)
		{
			f=m+1;
		}
		else if (array[m]==num)
		{
			cout <<"Location no: " << m+1 <<endl;
			break;
		}
		else
		{	
			l=m-1;
		}
		m=(f+l)/2;
	}

}


int main()
{
	int size=5;
	int array[5];
	for (int i=0 ; i<5 ; i++)
	{
		cin>>array[i];
	}
cout<<"Location by linear search " <<linear(array,size) <<endl;
cout<<"Binary Searching " <<endl;  binary(array,size) ;
}
