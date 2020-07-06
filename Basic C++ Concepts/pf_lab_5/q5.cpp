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
	char cha ;
	cout <<"Enter character" <<endl;
	cin >>cha;


  while(i<=n)
	{ 
	  while(j<=p)
	{ 
	cout<<cha;
  while(sp<=n1)
	{
	 cout<<" ";
	  sp++;
	}
	  j++;
	}
	  p=2;
	  j=1;
	  sp=1;
	  n1++;
	  i++;
	  cout<<endl;
	}

	j=1;
	while(j<=n)
	{ 
	cout<<cha;
  	j++;
	}

  
return 0;
}
