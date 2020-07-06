#include <iostream>
using namespace std;
int main()
{

	int array[100];
	int i=0;
	int temp=0;
	int j=0;
	//filling of array
	int n;
	cout <<"Enter size of array" <<endl;
	cin>>n;
	
	//sorting of array;;;;	

	for (i=0 ; i<n ; i++)
	{
		cin >> array[i];
	}


		for (i=0 ; i<n ; i++)
		{
			for (j=0 ; j<n ; j++)
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

	for (i=0 ; i<n ; i++)
	{
		cout <<array[i] <<endl;
	}




	//binary search

	int f,l,m;

	int num;
	cout <<"Enter number you want to search" <<endl;
	cin>> num;

	f=0;
	l=n-1;
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

		
		

	


