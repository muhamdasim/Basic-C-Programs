#include <iostream>
using namespace std;
const int row=2;
const int col=2;

void add(int array[][col])
{

cout <<"M";
}

int main()
{

	int array[row][col];
	
	int i=0;	
	int j=0;
	

	for (i=0 ; i<row ; i++)
	{
		for (j=0 ; j<col ; j++)
		{
			cin>>*(*(array+i)+j);
		}
	}

	add(array);
}
