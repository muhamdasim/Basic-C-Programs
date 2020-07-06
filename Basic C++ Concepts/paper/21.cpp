#include <iostream>
using namespace std;

int large(int *ptr , int n,int m , int o , int p)
{
	int max=100;
	
		
		ptr[0]=n;
		ptr[1]=m;
		ptr[2]=o;
		ptr[3]=p;

	for (int i=0 ;i<4 ; i++)
	{
		if (ptr[i]>max)
		{
			max=ptr[i];
		}
	}


int main()
{
	int m,n,o,p;
	cin>>m>>n>>o>>p;
	
	int *ptr;
	
	ptr=new int [n];

	int max=large(ptr,n,m,o,p);
	cout <<max;
}
