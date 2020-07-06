
#include <iostream>
using namespace std;
int main()
{
	string one;
	string two;
	
	cout<<"Enter first string"<<endl;
	cin>>one;
	cout <<"Enter second string"<<endl;
	cin>>two;
	int count=0;
	int count1=0;
	int count2=0;
	int j=0;	
	int i=0;
		
	for (i=0; one[i]!='\0' ; i++)
	{
		count1++;
	}
	
	for (i=0; two[i]!='\0' ; i++)
	{
		count2++;
	}
	
	if (count1!=count2)
	{
		cout<<"Not anagram" <<endl;
	}

	else
	
	for (i=0; i<count1; i++)
	{
		
		for (j=0 ; j<count2 ; j++)
		{
			if (one[i]==two[j])
			{
				count++;
				two[j]=0;
				break;
			}
		}
	}
	if (count==count1)
	{

	cout<<"Anagram"<<endl;
	}
	else
	cout<<"NOT " <<endl;

}
		







