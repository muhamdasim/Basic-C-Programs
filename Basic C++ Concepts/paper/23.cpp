#include <iostream>
using namespace std;

void function(int *ptr , int n)
{
	int after=0;
	int before=0;
	float average=0;
	int median ;
	int store=0;
	int temp=0;
	int sum=0;
	
	for (int i=0 ; i<n ; i++)
	{	
		for (int j=0 ; j<n ; j++)
		{
		 
		      if(*(ptr+j)>*(ptr+(j+1)))
			{
			temp=*(ptr+j);
			*(ptr+j)=*(ptr+(j+1));
			*(ptr+(j+1))=temp;
			}
		}	
	}	
	
	cout <<"Sorted array is" <<endl;
	for (int i=0 ; i<n ; i++)
	{
		cout <<*(ptr+i)<<" " ;
	}
	
	cout<<endl;
	
	if (n%2!=0)
	{
		cout <<"Median is" <<endl;
		store=n/2;
		cout <<ptr[store];
	}
	
	cout<<endl;
	if (n%2==0)
	{
		before=n/2 -1;
		after=n/2+1;
		sum=before+after;
		average=float(sum)/2;
		cout <<average;
	}
}
int main()
{
	int n;
	cout <<"Enter size of array"<<endl;
	cin>>n;
	int *ptr;
	ptr=new int[n];
	for (int i=0 ; i<n; i++)
	{
		cin>>*(ptr+i);
	}
	function(ptr,n);
	delete[]ptr;	





return 0;

}
