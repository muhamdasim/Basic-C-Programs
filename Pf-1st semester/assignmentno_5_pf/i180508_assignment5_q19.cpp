
#include <iostream>
using namespace std;
int main()
{
	const int max=100;
	int array[max];
	cout <<"Enter array size" <<endl;
	int n;
	cin >> n;
	int min=1000;

	int i=0;
	//array filling
	for (int i=0 ; i<n ; i++ )
	{
		cin >>array[i];
	}
		

	for (i=0 ; i<n ; i++)
	{
		for (int j=i+1; j<n ; j++)
		{
			if (array[i]==array[j])
			{
				if (array[i]<min )
				{ 
// minimum repeating value :D
					min=array[i];
				}	
			}
		}
	
	}
cout << min;
return 0;
}
