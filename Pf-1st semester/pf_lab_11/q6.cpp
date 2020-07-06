#include <iostream>
using namespace std;

void rangefinder(int array[] , int size)
{
	int i=0;
	int j=0;
	int max=-100;
	int min=100;
	int range=0;
	for (i=0; i<size ; i++)
	{
			if (array[i]>max)
			{
				max=array[i];
			}
			if (array[i]<min)
			{
				min=array[i];
			}
		
	}
	

	cout<<"Range is"<<max-min;
}
int main()
{
int size=5;
int array[size];
for (int i=0; i<size ; i++)
{
	cin>>array[i];
}

rangefinder(array,size);
return 0;
}
