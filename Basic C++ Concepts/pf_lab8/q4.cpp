#include <iostream>
using namespace std;
int main()
{	
	int a[100][100];
	int i=0;
	int j=0;
	int r,c;
	int sum=0;
	int sum1=0;
	
	cout <<"Enter row  of matrix" <<endl;
	cin >> r;
	cout <<"Enter colo " <<endl;
	cin>>c;
		
	//matrix filling
	
	for (i=0 ;i<r ; i++)
	{
		for(j=0 ; j<c; j++)
		{
			cin>>a[i][j];
		}
	}


	//checking scalar
	
	for (i=0 ;i<r ; i++)
	{
		for(j=0 ; j<c; j++)
		{
		
			if (i==j)
			{
				sum=sum+a[i][j];  //sum of diagonal
			}
			if (i!=j)
			{
				sum1=sum1+a[i][j]; //sum of non diagonal
			}
		}
	}
   
	if (sum==a[0][0]*r && sum1==0)
	{
		cout <<"Scalar" <<endl;   
	}
	else
		cout <<"Not" <<endl;
}

