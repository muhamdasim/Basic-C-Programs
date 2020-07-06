#include <iostream>
using namespace std;

void pal(char *ptr , int n )
{
	cin>>ptr;
	int check=n/2;
	int count=0;
	int i=0;
	for (i=0 ; i<check;  i++)
	{
		if (ptr[i]==ptr[(n-1)-i])
		{
			count++;
		}
	}
	
	if (count==check)
	{
		cout <<"Pal";
	}
	else 
		cout <<"not " ;



		
}

int main()
{
	int n;	
	cout <<"Enter size of array"<<endl;
	cin>>n;
	
	char *ptr;
	
	ptr=new char[n];
	
	pal(ptr,n);
}
