
#include <iostream>
using namespace std;
int main()
{
	string str;
	cout <<"Enter string" <<endl;
	getline(cin , str);
	int i=0;
	char choice;	

	int count=0;
	
	cout <<"Press as mention" <<endl;
	cout <<"Press L to calculate lentgh of string" <<endl;
	cout <<"Press N to calculate number of words in string" <<endl;
	cout <<"Press P to check palidrome" <<endl;
	cout <<"Press F to find word" <<endl;
	cout <<"Press C to conver in lowercase"<<endl;
	cout <<"Press U to convert in uppercase"<<endl;
	
	cout <<"Enter your choice" <<endl;
		cin>>choice;
	
	switch (choice)
	{
		case 'L':
				for (i=0 ; str[i]!='\0' ; i++)
				{
					count++;
				}
				cout <<count;

		case 'N':
				for (i=0 ; i<100 ; i++)
				{
					if (str[i]==' ')
					{
						
						count++;
					}

				}	
				cout <<count+1;


		case 'P':

				
				
				for (i=0 ; i<100 ; i++)
				{
					if (str[i++]!=str[100-1])
					{
							break;
						
					}

				}
				cout <<"IS" ;
		
		case 'C':
			
				for (i=0 ; str[i]!='\0' ; i++)
				{
					if (str[i]>='A' && str[i]<='Z')
					{		
						str[i]=str[i]+32;
					}
					else
					str[i];
				}
			cout <<str;

		
		case 'U':
			
				for (i=0 ; str[i]!='\0' ; i++)
				{
					if (str[i]>='a' && str[i]<='z')
					{		
						str[i]=str[i]-32;
					}
					else
					str[i];
				}
			cout <<str;
			
	}
}






















