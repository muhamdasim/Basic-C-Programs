#include<iostream>
using namespace std;
int main()
{
	int i=1;
	int n;
	int p=1;
	int j=1;
	int sp=1;
	int n1=0;

	cout<<"Enter a number " <<endl;
	cin>>n;
	
cout <<"#" ;
  while(i<=n)
	{ 
	  while(j<=p)
	{ 
	cout<<"#";
  while(sp<=n1)
	{
	 cout<<" ";
	  sp=sp+1;
	}
	  j=j+1;
	}
	  p=2;
	  j=1;
	  sp=1;
	  n1=n1+1;
	  i=i+1;
	  cout<<endl;
	}


	

  
return 0;
}
