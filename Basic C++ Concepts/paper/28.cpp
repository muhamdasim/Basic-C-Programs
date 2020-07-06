#include<iostream>
using namespace std;
void sum(int (*ptr1)[2],int (*ptr2)[2],int (*ptr3)[2])
{
 
   for(int i=0; i<2; i++)
   {
  
     for(int j=0; j<2; j++)
     {
         
          *(*(ptr3+i)+j)= *(*(ptr1+i)+j)+*(*(ptr2+i)+j);
          
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
            
            
 cout<<"enter values for a: "<<endl;
 for(int i=0; i<2; i++)
   {
  
     for(int j=0; j<2; j++)
     {
         
         cin>> *(*(ptr1+i)+j);
          
     }
     
   }
   
   cout<<endl;
   
  cout<<"enter values for b: "<<endl;
 for(int i=0; i<2; i++)
   {
  
     for(int j=0; j<2; j++)
     {
         
         cin>> *(*(ptr2+i)+j);
          
     }
     
   }
   
  sum(ptr1,ptr2,ptr3);
   cout<<"the third matrix is: "<<endl;
   
  for(int i=0; i<2; i++)
   {
  
     for(int j=0; j<2; j++)
     {
         
         cout<< *(*(ptr3+i)+j);
          cout<<"\t";
          
     }
     cout<<endl;
   }              
   
   
   return 0;
   
   }
