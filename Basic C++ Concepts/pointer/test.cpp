#include <iostream>
using namespace std;

int main()
{
int array[3][3];
int **ptr=&&array;
int i=0;
int j=0;
int x=0;

	for (i=0 ; i<3 ; i++)
	{
	for (j=0 ; j<3 ; j++)
	{
		array[i][j]=x++;
	}
	}
cout<< x;
}
