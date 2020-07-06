#include <iostream>
using namespace std;
int main()
{
	string str;

	int i=0;
	int j=0 ;
	int count=0;
	
	int count1;
	for (i=0 ; i<5 ; i++)
	{	
			getline(cin, str);
		for (j=0 ; str[j]!='\0' ; j++ )
		{
			count++ ;
		
		}	

			
		if (count>=2 && str[0]==str[j-1] )
		{
			count1++;
			count1=0;
		}
	
	}
cout <<count1;;
}

