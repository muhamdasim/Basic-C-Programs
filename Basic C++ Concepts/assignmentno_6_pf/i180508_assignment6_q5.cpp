#include <iostream>
#include <cmath>
using namespace std;
const int r=2;
const int c=2;

//sum of all values;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;

float norm(int array[r][c],int r,int c)
{
	int i=0;
	int j=0;
	int sum=0;
	cout<<"Enter values is matrix"<<endl;
	for (i=0 ; i<r ; i++)
	{
		for (j=0 ; j<c ; j++)
		{
			cin>>array[i][j];
			sum=sum+array[i][j]*array[i][j];
		}
	}

return sqrt(sum);

}


int main()
{

	int array[2][2];
	cout<<"Norm is "<<norm(array,r,c);
}

