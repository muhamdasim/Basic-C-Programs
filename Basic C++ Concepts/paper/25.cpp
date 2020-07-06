#include <iostream>
using namespace std;
int main()
{
	
	int n;
	cin>>n;
	
	for (int i=1 ; i<=n ; i++)
	{
		for (int j=1 ; j<=i ; j++)
		{
			if (i%2!=0)
			{
				cout<<j;
			}
		
			else if (j%2==0)
			{	

				for (int k=i ;k>=1 ;k--)
				{
					cout<<k;
				
				}
break;
				
			}
		}
		cout <<endl;
	}
}
