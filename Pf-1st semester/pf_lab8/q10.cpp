#include <iostream>
using namespace std;
void check_composite(int n)
{
	int i=2;
	
	bool check;
	
	for (i=2 ; i<n/2 ; i++)
	{
		if (n%i==0)
		{
			check=true;
			break;
		}
		else
		{
			check=false ;
		}
	}
		
	if (check==true)
	{
		cout<<"Composite" <<endl;	
	}
	else
		cout<<"Not " <<endl;

}

int main()
{
	int n;
	cout<<"Enter no" <<endl;
	cin>>n;

	check_composite(n);
	
	
}
