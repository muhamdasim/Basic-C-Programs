#include<iostream>
using namespace std;
int main()
{
	int size=100;
 	int x[size];
	int y[size];
	int n;
	int count=0;
	cout <<"Enter size"<<endl;
  	cin>>n;
	int i=0;
	int j=0;
 	for(i=0;i<n;i++)
 	{
	
 	   cin>>x[i];
 	}
  
	for(i=0;i<n;i++)
	{
	 	 for( j=0; j<n; j++)
	 	 {
	 		   if(i==x[j])
	 		   { 
				count++;
	    			y[i]=count;
	    		    }
    
    
  		}  
 	 if(count==0)
	 {
		y[i]=0;
	 }

 	 count=0;
	}

	for(int i=0;i<n;i++)
 	{
 		   cout<<i<<"_____"<<y[i]<<endl;
 	}
return 0;
}

