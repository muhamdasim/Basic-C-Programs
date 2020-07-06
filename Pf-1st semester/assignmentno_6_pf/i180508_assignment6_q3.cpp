#include <iostream>
using namespace std;
void binary(int n)
{
	
	int k;
	int i=0;
	int bin[100];
	for (i=0 ; n>0 ; i++)
	{
	 	k=n%2;

		n=n/2;
		bin[i]=k;
	}

	for (i=i-1 ; i>=0 ; i--)
	{
		
		cout<<bin[i];
	}
}

int main()
{
	int n;
	cout<<"Enter no"<<endl;
	cin>>n;
	binary(n);
}
