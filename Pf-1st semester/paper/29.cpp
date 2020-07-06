#include <iostream>
using namespace std;
const int row=2;
const int col=2;
void function(int (*ptr1)[col],int (*ptr2)[col],int (*ptr3)[col])
{
	for (int i=0; i<row ; i++)
	{
		for (int j=0 ; j<col ; j++)
		{
			*(*(ptr3+i)+j)=*(*(ptr1+i)+j)+*(*(ptr2+i)+j);
		}
	}
}
int main()
{
	int a[2][2];
	int b[2][2];
	int c[2][2];
	
	int (*ptr1)[2]=a;
	int (*ptr2)[2]=b;
	int (*ptr3)[2]=c;
cout <<"Enter a "<<endl;
cout <<endl;
	for (int i=0; i<row ; i++)
	{
		for (int j=0 ; j<col ; j++)
		{
			cin>>*(*(ptr1+i)+j);
		}
	}
cout <<"Enter b "<<endl;
cout <<endl;
	for (int i=0; i<row ; i++)
	{
		for (int j=0 ; j<col ; j++)
		{
			cin>>*(*(ptr2+i)+j);
		}
	}
function(ptr1,ptr2,ptr3);

	for (int i=0; i<row ; i++)
	{
		for (int j=0 ; j<col ; j++)
		{
			cout<<*(*(ptr3+i)+j);
			cout<<"\t";
		}
		cout<<endl;
	}

}
	
	
