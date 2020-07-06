#include<iostream>
using namespace std;
const int s=20;
int mode(int a[s],int size)

{
   int max=1,counter=1,counter1=0;

for(int i=0; i<size ; i++)
{
   for(int j=i+1; j<size ; j++)
  { 
   if(a[i]==a[j])
    counter++;
   if(counter>max)
    max=a[i];
   }

  counter=1;

}

return max;

}
 
int main()
{  
  
  int a[s];
  int ans;
  int size;
  cout<<"Enter the size of array ";
  cin>>size;
  for(int i=0; i<size; i++)
  {

     cin>>a[i];
     
   }
   
  ans=mode(a,size);

cout<<"The mode is : "<<ans;

return 0;


}
  
     
