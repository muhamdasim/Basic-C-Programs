#include <iostream>
using namespace std;
int main()
{
	int array[100][100];
	int n;
	cout <<"Enter size of matrix " <<endl;
	cin >> n;
	
	int i=0 ; int j=0;
	int check;
	for (i=0 ; i<n ; i++)
	{
		for (j=0 ; j<n ; j++)		
		{	
			cin >>array[i][j];
		}
	}

	for (i=0 ; i<n ; i++)
	{

		for (j=0 ; j<i ; j++)
		{
		
		if(array[i][j]!=0)
		{
			cout<<"Matrix is not upper triangular matrix";
			return 0;
		}

   
		}
	}
			cout<<"Matrix is upper triangular matrix "<<endl;
}



