//adding two matrix using pointer :))))

#include <iostream>
using namespace std;
const int row=2;
const int col=2;
void add(int array[][col],int n)
{
		int array2[100][100];
		int sum[100][100];
	for (int i=0 ; i<n ; i++)
	{
		for (int j=0 ; j<n ; j++)
		{
			cin>>*(*(array2+i)+j);
		}
	}

	for (int i=0 ; i<n ; i++)
	{
		for (int j=0 ; j<n ; j++)
		{
			*(*(sum+i)+j)=*(*(array2+i)+j)+ *(*(array+i)+j);
		}
	}
	
	for (int i=0 ; i<n ; i++)
	{
		for (int j=0 ; j<n ; j++)
		{	
			cout<<*(*(sum+i)+j);
		}
	}
}

int main()
{
	int array1[100][100];

	 cout <<"Enter size of array"<<endl;
	int n;
	cin>>n;
	int i=0;

	for (int i=0 ; i<n ; i++)
	{
		for (int j=0 ; j<n ; j++)
		{
			cin>>*(*(array1+i)+j);
		}
	}


	add(array1);
}


	


