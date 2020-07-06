#include <iostream>
using namespace std;

void sum(int *a , int *b)
{
	int sum=0;
	sum=*a+*b;
	cout<<sum<<endl;
}
void diff(int *a , int *b)
{
	int diff;
	diff=*a-*b;
	cout<<diff<<endl;
}
void prod(int *a , int *b)
{
	int pro;
	pro=(*a)*(*b);
	cout <<pro<<endl;
}

int main()
{
	int a;
	int b;
	cin>>a>>b;
	int *ptr1;
	int *ptr2;

	ptr1=&a;
	ptr2=&b;
	
	sum(&a,&b);
	diff(ptr1,ptr2);
	prod(ptr1,ptr2);
}
	
	
