#include <iostream>
using namespace std;
int main()
{
int n;
cout <<"Enter no of lines " <<endl;
cin >> n;
int i;
int j;

for (i=1 ; i<=n ; i++ ) 
	{
	for (j=1 ; j<=(n-i+1) ; j++ )
		{		
			cout <<" " ;
	 
		}
	for (j=1 ; j<=n ; j++ )
		{
			cout <<"*" ;
		}
cout <<endl;
	}

return 0;

}
