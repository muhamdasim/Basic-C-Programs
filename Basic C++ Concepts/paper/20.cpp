#include <iostream>
using namespace std;

int large(int *ptr , int n)
{

	cout <<"Enter elements of array"<<endl;
	int i=0;
		int max=-100;
		
	for (int i=0 ; i<n ; i++)
	{
		cin>>*(ptr+i);
	
		if (*(ptr+i)>max)
		{
			max=*(ptr+i);
		}
	}
	
return max;


	
}

int main()
{
	int n;
	cout <<"Enter size of array"<<endl;
	cin>>n;
	
	int *ptr;
	
	ptr=new int[n];
	
	int max=large(ptr,n);

	cout<<max;

}
