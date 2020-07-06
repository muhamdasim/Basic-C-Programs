#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
	int array[100];
	int i=0;
	int n;
	int x;
	cout <<"Enter size"<<endl;
	cin>>n;
	for (i=0 ; i<n ; i++)
	{
		cin>>array[i];
	}
	cout<<"Enter the number: ";
	cin>>x;
	int max=100000;


	    
	    int sum;
	    int store;
	    int l,r;
	int check;
	check=n-1;

    for(i=0; i<n ; i++)
    {
        for(check=n-1 ; check>i; check--)
    
        {
            sum=array[i]+array[check];
            
            n=abs(sum-x);
            
           
            
            if(n<max)
            {
                max=store;
                l=array[i];
                r=array[check];
            }
        }
    }    
    cout<<"The pair closest to the sum is: "<<l<<" and "<<r<<endl;
    return 0;
}

