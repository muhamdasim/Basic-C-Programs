
#include <iostream>
using namespace std;
int main()
{
	int array[100];
	int n;
	cout <<"Enter array size" <<endl;
	cin >>n;
	int i=0;
	int j=0;
	int count=0;
	int b[100];
//taking imput

	for (i=0 ; i<n ; i++)
	{
		cin >>array[i];
		if (array[i]<0)  // checking 
		{
			j=0+j;
			b[j]=array[i];  //storing in another array
			j=j+1;
			count++;  //checking count to prevent garbage ..
		}
	}

cout <<"Output " <<endl;
	
	for (j=0 ; j<n ; j++)   // final output :) :)
	{	
		cout <<b[j] <<endl;
	}
return 0;

}
	
	
