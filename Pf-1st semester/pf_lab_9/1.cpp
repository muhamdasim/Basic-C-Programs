

#include <iostream>
using namespace std;
int main()
{
	string str;
	getline(cin,str);
	int count=0;
	int i=0;
	int j=0;
	int store[100];
	int word=0;
	for (i=0 ; str[i]!='\0' ; i++)
	{
		count++;
	}
	cout <<count<<endl;
	for (i=0+word-1 ; i<count ; i++)
	{
		for (j=0; str[j]!=' ' ; j++)
		{
			
		word++;

		}
				cout <<word<<endl;
	}


	}


