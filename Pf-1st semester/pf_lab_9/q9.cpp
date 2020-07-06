
#include <iostream>
using namespace std;

//decimal to binary con ;;;

void dectobin(int n)
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

//decimal to hexadecimal;;;;

void dectohexa(int n)
{
int rem;
string hexdec="";
char hex[]={'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};
while(n>0)
{
rem=n%16;
hexdec=hex[rem]+hexdec;
n=n/16;
}
cout<<hexdec;
}

//decimal to octal;;;;

void dectooct(int n)
{
	int k;
	int i=0;
	int bin[100];
	for (i=0 ; n>0 ; i++)
	{
	 	k=n%8;

		n=n/8;
		bin[i]=k;
	}

	for (i=i-1 ; i>=0 ; i--)
	{
		
		cout<<bin[i];
	}
}


//octal to binary conversion;;;;;;;;;;;;;;;;;;;;;;;


void octtobin(int n)
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
	cout <<"Enter any positive integer"<<endl;
	cin>>n;
	char choice;
	cout<<"MENU"<<endl;
	cout<<"Press D for Decimal to Binary Conversion"<<endl;
	cout<<"Press d for Decimal to hexadecimal Conversion"<<endl;
	cout<<"Press O for Decimal to octal Conversion"<<endl;
	cout<<"Press o for Octal to Binary Conversion"<<endl;
	cout<<"Press h for Octal to hexadecimal Conversion"<<endl;
	cout<<"Press K for Octal to decimal Conversion"<<endl;
	cout<<endl;
	cin>>choice;
	switch (choice)
	{
		case 'D':
		dectobin(n);
		break;
		case 'd':
		dectohexa(n);
		case 'O':
		dectooct(n);
		case 'o':
		octtobin(n);
	}
}



