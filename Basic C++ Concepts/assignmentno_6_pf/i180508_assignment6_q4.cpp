//4. Write a function that take the array of Programing fundamentals marks as input
//parameter and gives the mean, median, mod and standard deviation to caller function.

#include <iostream>
#include <cmath>
using namespace std;

//mean function ////////////////////////////////////////////////
float mean(int array[],int n)
{

	int i=0;
	float mean;
	int sum=0;
	for (i=0 ; i<n ; i++)
	{
		sum=sum+array[i];
	}
	mean=float(sum)/n;
	return mean;
}


///mediaan;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
void mode(int array[],int n)
{

	int i=0;
	int j=0;
	int temp=0;
	int sum=0;
	float mode;
	int k=0;

	
	for (i=0 ; i<n ; i++)
	{
		for (j=0 ; j<n ; j++)
		{
			if (array[i]<array[j])
			{
				temp=array[i];	
				array[i]=array[j];
				array[j]=temp;
			}
		}
	}
		
	cout<<"Sorted array is"<<endl;
		
	for (i=0 ; i<n ; i++)
	{
		cout<<array[i]<<" " ;
	}

	cout<<endl;
	
	if (n%2==0)
	{
		n=(n/2);
		k=(n/2)+1;
		sum=array[n]+array[k];
		mode=float(sum)/2;
		cout<<mode;
	}
	else 
	{
		n=(n/2);
		cout<<array[n];
	}

}




//SD;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
float SD(int array[],int n)
{
	float sum=0;
	float mean;
	float SD;
	int i=0;
	for (i=0 ; i<n ; i++)
	{
		sum=sum+array[i];
	}
	mean=float(sum)/n;
	for (i=0 ; i<n ; i++)
	{
		SD=SD+pow(array[i]-mean,2);
	}
	return sqrt(SD/10);
}
///main;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
int main()
{
	int i=0;
	int n;
	int size=100;
	int array[size];
	cout<<"Enter size of array"<<endl;
	cin>>n;
	cout<<"Enter marks of programming fundamental"<<endl;
for (i=0 ; i<n ; i++)
{
	cin>>array[i];
}

	cout<<"Mean is: "<<mean(array,n)<<endl;
	cout<<"Mode is: ";mode(array,n);
	cout<<endl;
	cout<<"Standard Deviation is: "<<SD(array,n)<<endl;
}
