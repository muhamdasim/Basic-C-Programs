#include <iostream>
using namespace std;
int main()
{	
	int array[20][20];
	int n;
	cout <<"Enter size of matrix"<<endl;
	cin>>n;
	int i=0;
	int j=0;
	int trans[20][20];

	for (i=0 ; i<n ; i++)
	{
		for (j=0 ; j<n ; j++)
		{
			cin>>array[i][j];
		}
	}

	for (i=0 ; i<n ; i++)
	{
		for (j=0 ; j<n ; j++)
		{
			trans[i][j]=array[j][i];
		}
	}

	for (i=0 ; i<n ; i++)
	{
		for (j=0 ; j<n ; j++)
		{
			cout <<trans[i][j] << " " ; 
		}
	cout <<endl;
	}
}
