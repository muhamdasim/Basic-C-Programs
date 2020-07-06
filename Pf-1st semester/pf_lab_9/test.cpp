#include <iostream>
using namespace std;
int main()
{
int i=0;
int j=0;
int sum=0;
int choice;
cout<<"Enter the row ";
cin>>choice;
int array[2][2];
if (choice==0 )
{	

	for (i=0; i<2; i++)
	{
		for (j=0; j<2 ;j++)
		{
			cin>>array[i][j];
			sum=sum+array[0][j];
		}
	}
cout<<sum;
}

}
