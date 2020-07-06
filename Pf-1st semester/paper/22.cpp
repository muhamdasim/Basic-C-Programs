#include <iostream>
using namespace std;

void vowel(char *ptr , int n)
{
	for (int i=0 ; i< n ;i++)
	{
		cin>>*(ptr+i);
	}

	for (int i=0 ; i<n ; i++)
	{
		if (ptr[i]=='a' || ptr[i]=='A' || ptr[i]=='e' || ptr[i]=='E' || ptr[i]=='i' || ptr[i]=='I' || ptr[i]=='o' || ptr[i]=='O' || ptr[i]=='u' || ptr[i]=='U' )
		{
			cout <<*(ptr+i)<<" " ;
		}
	}
}

int main()
{
	int n;
	cout <<"Enter len"<<endl;
	cin>>n;
	
	char *ptr;
	
	ptr=new char [n];
	
	vowel(ptr,n);
	delete[]ptr;
}
	
	
