#include <iostream>
using namespace std;
int main()
{

int i=4;
int j=1;
float sum=0;
int end=1000;
while (i=4)
{

	while (j<end)
	{
		sum=sum+float(i)/j	;
		j=j+2;	
		sum=sum-float (i)/j ;
		
		cout <<"Sum is" <<sum <<endl;
		if (sum==3.14)
		{
			cout <<"Break" ;
			break;
		}
		
	}
}
return 0;

}
