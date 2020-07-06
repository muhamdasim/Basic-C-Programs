#include <iostream>
using namespace std;
int main()
{

	string array;
	int flag ;
	int i=0;
	int count=0;
	cin>>array;
	
	for (i=0 ; array[i]!='\0' ; i++)
	{
		count++;
		
	
	}


	
	
		
	if (count>=6 )
	{
		
		for (i=0 ; i<count ; i++)
		{	
			if (array[i]>='A' || array[i]<='Z')
			{
				if (array[i]>=1 || array[i]<=9)
				{
				
					if (array[i]>='a' || array[i]<='z')
					{
						flag=0;
						
					}
					else 
						flag=1 ;
				}
			}
		}
		
	}
	
	
	if (flag==0)
	{
		cout<<"GG BOI"<<endl;
	}
	else
	{
				cout<<"TRY AGAIN"<<endl;
	}
	
	
	
}
	
				
		
		
	
