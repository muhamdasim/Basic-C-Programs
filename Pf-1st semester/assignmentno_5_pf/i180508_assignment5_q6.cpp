#include<iostream>
#include<string.h>
using namespace std;

int main()
{
    const int s=50;
    char a[s];
    int counter=0,counter1=0,counter2=0,counter3=0,counter4=0;
    int i,j;
    cout<<"Enter string ";
    cin.getline(a,s);
    
    
    
    for(int i=0;i<s;i++)
    { 
       if(a[i]==' ')
       break;
       counter++;
      
    }
       
    for( i=0; a[i]!='\0';i++  )
    {  
        
        if(a[i]!=' ')
        counter1++;
        if(a[i]==' ')
        counter1=0;
       if(counter1>counter)
         counter=counter1;
         
     }
counter1=0;
    for( i=0; a[i]!='\0';i++  )
    {  
        counter4++;
        
        
        if(a[i]!=' ')
        {counter1++;
        if(counter==counter1)
         { 
           counter4=counter4-counter1;
           for(j=0;j<=counter1;j++)
           {cout<<a[counter4];
           counter4++;}
        }
}
       
     
     else if(a[i]==' ')
        {counter1=0; }
        
       
       
     }
return 0;
}
