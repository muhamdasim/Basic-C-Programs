#include <iostream>
using namespace std;

//string length;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;

int stringlength(string str)
{
	int i=0;
	int count=0;
	for (i=0 ; str[i]!='\0' ; i++)
	{
		count++;
	}
return count;
}


//words in stringg;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;

int wordsinstring(string str)
{
	int i=0;
	int count=1;
	for (i=0 ; str[i]!='\0' ; i++)
	{
		if(str[i]==' ')
		{
			count++;
		}
	}
return count;
}

//palindrome;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;

void palindrome(string str)
{
	int i=0;
	bool flag=1;
	int length=0;
	int count=0;
	for (i=0 ; str[i]!='\0' ; i++)
	{
		length++;
	}

	
	for (i=0 ; i<(length)/2 ; i++)
	{
		if(str[i]!=str[length-i-1])
		{
			cout<<"Not Palindrom"<<endl;
			break;
	
		}
		else
		{
			cout<<"IS Palindrome"<<endl;
			break;
		}

	}
	

}


//lowercase

string lowercase(string str)
{
int i=0;
	for (i=0 ; str[i]!='\0' ; i++)
	{
		if (str[i]>='A' && str[i]<='Z')
		{		
			str[i]=str[i]+32;
		}
		else
			str[i];
	}
return str;
}


//uppercase

string uppercase(string str)
{
int i=0;
	for (i=0 ; str[i]!='\0' ; i++)
	{
		if (str[i]>='a' && str[i]<='z')
		{		
			str[i]=str[i]-32;
		}
		else
			str[i];
	}
return str;
}



//maain;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;

int main()
{
	
	string str;
	cout<<"Enter string"<<endl;
	getline(cin,str);
	int choice;
	cout<<"Press according to menu"<<endl;
	cout<<"Press 1 for string length"<<endl;
	cout<<"Press 2 for count words in a string"<<endl;
	cout<<"Press 3 for checking string is palindrome or not"<<endl;
	cout<<"Press 4 for converting string into lowercase"<<endl;
	cout<<"Press 5 for converting string into uppercase"<<endl;
	cin>>choice;
	int flag;
	if (choice==1)
	{
		cout<<"String length is"<<endl;
		cout<<stringlength(str);
	}
	if (choice==2)
	{
		cout<<"Word Count is"<<endl;
		cout<<wordsinstring(str);
	}
	if (choice==3)
	{
		palindrome(str);
		
	}
	if (choice==4)
	{
		cout<<lowercase(str);
		
	}
	if (choice==5)
	{
		cout<<uppercase(str);
		
	}
}
