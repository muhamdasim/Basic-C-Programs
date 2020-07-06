#include <iostream>
using namespace std;
const int s=20;
int func(char a[s], char b[s])
{
  int counter=0,counter1=0,counter2=0;
  int flag=0;
  for(int i=0; a[i]!='\0' ; i++)
{
   counter++;

}

for(int i=0; b[i]!='\0' ; i++)
{
   counter1++;

}

if(counter1<counter)
{

  for(int i=0;i<counter1 ; i++)
{ counter2=0;
  for(int j=0; j<counter ; j++)
{
  if(b[i]==a[j])
  {
    counter2++;
    a[j]=0;
    break;}

  }

if(counter2==1)
 flag=1;

else 
{flag=0;
break;}

}

}


else if(counter<counter1)
{

  for(int i=0;i<counter ; i++)
{  counter2=0;
  for(int j=0; j<counter1 ; j++)
{
  if(a[i]==b[j])
  {
    counter2++;
    b[j]=0;
    break;}

  }

if(counter2==1)
 flag=1;

else 
{flag=0;
break;}

}

}
else if(counter==counter1)
{
   counter=0;
  
    for(int i=0; i<counter1;i++)
   {
       for(int j=0; j<counter1;j++)
      {
  
       if(a[i]==b[j])
       { counter++;
        b[j]=0;}
        
      }
  
   }  
if (counter==counter1)
  flag=1;

 else
  flag=0;

}
  
 return flag;
 
 } 
int main ()
{
   char a[s];
   char b[s];
   int ans;
   
   
cout<<"Enter first string: ";
cin.getline(a,s);

cout<<"Enter scecond string: ";
cin.getline(b,s);



ans=func(a,b);

if(ans==1)
cout<<"true";

else
cout<<"false";



return 0;
}



