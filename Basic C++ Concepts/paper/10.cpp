//hollow square

#include <iostream>
using namespace std;
int main()
{
	int i=1;
	int j=1;
	int n;
	cin>>n;
	
	for (i=1 ; i<=n ; i++)
	{
		for (j=1 ; j<=n ; j++)
		{
			
		
			if (j==1 || i==1 || i==n || j==n)
			{
				cout<<"*";
			}
			else
			cout <<" " ;

		}
		cout<<endl;
	}
		
			

	
}
	
