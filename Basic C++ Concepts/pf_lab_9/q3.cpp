
#include <iostream>
using namespace std;

void dec(int array[], int size)
{
	int i=0;
	int temp=0;
	int j=0;
	
	for (i=0 ; i<size ; i++)
	{
		for (j=0 ; j<size ; j++)
		{
			
			if (array[i]>array[j])
			{
				temp=array[i];
				array[i]=array[j];
				array[j]=temp;
			}
			
		}
	}


	
}

int main()
{
	int size=5;
	int i=0;
	int array[size];
	cout<<"Enter Elements"<<endl;
	for (i=0 ; i<size ; i++)
	{
		cin>>array[i];
	}

	//array[i]=dec(array[], size) ;

dec(array,size);
for (i=0 ; i<size ; i++)
{
	cout <<array[i]<<" " ;
}
	
	
}

		
	
	
	
	

