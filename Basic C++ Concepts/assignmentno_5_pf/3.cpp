#include <iostream>
using namespace std;
int main()
{
	int x[100];
	int y[100];
	int z[200];
	
	int m;
	int n;
	cout <<"Enter size of Array X " <<endl;
	cin>>m;
	cout <<"Enter size of Array Y" <<endl;
	cin>>n;

	int s=m+n;
	int temp;
	
	int i=0 ;	int j=0;
	//x filling
	
	cout <<"Enter values in Array X " <<endl;	

	for (i=0 ; i<m ; i++)
	{
	cin>>x[i];
	}
	//y filling
	
		cout <<"Enter values in Array y " <<endl;	
	
	for (i=0 ; i<n ; i++)
	{
	cin>>y[i];
	}
	
	//sorting arrays in acesnding order
	
	for (i=0 ; i<m ; i++)
	{
		for (j=0 ; j<m ; j++)
		{
			if (x[i]<x[j])
			{
				temp=x[i];
				x[i]=x[j];
				x[j]=temp;
			}
		}
	}


	
	for (i=0 ; i<n ; i++)
	{
		for (j=0 ; j<n ; j++)
		{
			if (y[i]<y[j])
			{
				temp=y[i];
				y[i]=y[j];
				y[j]=temp;
			}
		}
	}
	
	int indexx=m-1;
	int indexy=n-1;
	
	for (int indexz=0 ; indexz<m+n-1 ; indexz++)
	{
	
		if (x[indexx]<=y[indexy])
		{
			z[indexz]=x[indexx];
			indexx--;
		}
		else
		{
			z[indexz]=y[indexy];
			indexy--;
		}
	}
		
	
	for (i=0 ; i<n+m ; i++)
	{
	cout <<z[i] <<endl;
	}

}
	
	
	
