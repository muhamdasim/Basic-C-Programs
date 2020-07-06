#include <iostream>
using namespace std;

void test (int *a ,int  *b)
{
	int sum=0;
	
	sum=*a + *b;
		
	cout <<sum;
}

int main()
{
	int a=5;
	int b=5;
	
	int *ptr1;
	
	int *ptr2;
	
	ptr1=&a;
	
	ptr2=&b;
	
	test (ptr1 , ptr2);
	
}
