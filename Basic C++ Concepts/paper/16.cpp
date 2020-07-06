#include <iostream>
using namespace std;
const int row=2;

const int col=2;

void matrix(int array[row][col])
{
	for (int  i=0 ; i<row ; i++)
	{	
	
		for (int j=0 ; j<col ; j++)
		{
		
			cout <<array[i][j];
		}
	}
}

int main()
{
	int array[row][col];
	
	for (int  i=0 ; i<row ; i++)
	{	
	
		for (int j=0 ; j<col ; j++)
		{
		
			cin>>array[i][j];
		}
	}
	
	matrix(array);
}
