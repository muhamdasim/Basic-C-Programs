#include <iostream>
using namespace std;

void reverse(int *ptr , int n)
{
	int i=0;
	
	for (i=n-1; i>=0 ;i--)
	{
		cout <<*(ptr+i);
	}
}
int main()
{
int n;
int array[100];
int *ptr;
ptr=array;
cout <<"Enter size of array"<<endl;
cin>>n;
for (int i=0  ; i<n ; i++)
{
	cin>>*(ptr+i);
}

reverse(ptr,n);
}
