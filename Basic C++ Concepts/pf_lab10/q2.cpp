#include <iostream>
using namespace std;
int main()
{
	int size=100;
	int array[100];
	int n;
	cout <<"Enter size of array"<<endl;
	cin>>n;
	int i=0;
	int j=0;
	int temp=0;
	int sum=0;
	float mode;
	int k=0;
	for (i=0 ; i<n ; i++)
	{
		cin>>array[i];
	}
	
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

