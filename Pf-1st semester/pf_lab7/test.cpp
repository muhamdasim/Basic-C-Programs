#include <iostream>
using namespace std;
int main()
{

const int szie=10;
int array[size];
int min=10000;
int min1=1000;


   min;
  for(i=0;i<size;i++)
  {
      if(min<array[i])
	  {
           min=array[i];
           j = i;
      }
  }
	

cout <<"Min " << min <<endl;

   min1;
  for(i=0;i<size;i++)
  {
     if(i==j)
        {
          i++;  
		  i--;
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
}
