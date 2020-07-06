#include <iostream>
using namespace std;
int main()
{

const int size=5 ;
int array[size];
int min=10000 ;
int min1=10000;
int min2=1000;
int i,j;

for (i=0 ; i<size ; i++ )
	{
	
		cin >> array[i];
 	}

for(i=0;i<size;i++)
{
      if(min>array[i])
	  {
           min=array[i];
           j = i;
      	}
}
	

cout <<"Min " << min <<endl;


 for(i=0;i<size;i++)
 {
     if(i==j)
        {
          i++; 
		
	i-- ;
		
        }
	
      else
        {
          if(min1>array[i])
	     {
               min1=array[i];
             }
        }
  }

cout <<"Second min " << min1;


for(i=0;i<size;i++)
 {
     if(i==j)
        {
          i++; 
		

		
        
        {
          if(min2>array[i])
	     {
               min2=array[i];
             }
        }
  }

cout <<"Third min " << min2;



return 0;

}
