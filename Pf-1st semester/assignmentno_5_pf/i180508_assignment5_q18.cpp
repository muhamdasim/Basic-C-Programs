

#include <iostream>
using namespace std;
int main()
{
	char array[100];
	int n;	
cout <<"Enter array size" <<endl;
	cin >> n;
	int rp;
	int j;
	int k;
cout <<"Enter Repetition " <<endl;
	cin >>rp;

	int i=0;
	
	for (i=0 ; i<n ; i++)
	{
		cin>>array[i];
	}

		
			for (j=1 ; j<=rp ; j++)
			{
				
				for (i=0 ; i<n ; i++)
				{
	
					cout<<"'"<<array[i] <<j<<"'"<<"," ;		
				}
			}	
	
}
