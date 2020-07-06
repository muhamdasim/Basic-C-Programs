
	
#include <iostream>
using namespace std;
int main()
{
	int array[20][20];
	int n;
	cout<<"Enter size of array"<<endl;
	cin>>n;
	int i=0;
	int j=0;
	int prime[n*2];
	int count=0;
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
			for (int k=2 ; k<n/2 ; k++)
			{
				if (array[i][j]%k==0)
				{
					break;
				}
				else
				{
					prime[i]=array[i][j];
					count++;
				}
			}
		}
	}
	cout<<count;

	for (i=0 ; i<count ; i++)
	{
		cout<<prime[i]<<endl;
	}
}
		

