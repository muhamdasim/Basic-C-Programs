#include <iostream>
using namespace std;
int main()
{
    int d;
    cout <<"Enter Number of days"<<endl;
    cin >> d;
    
   if (d>0 )
   {
    	if (d>0 && d<=5)
   
   {
       cout <<"Fine is Rs 50" ;
   }
   else if (d>5 && d<=10)
   {
       cout <<"Fine is Rs 100";
   } 
   else if (d>10 && d<=30 )
   {
       cout <<"Fine is Rs 150";
   }
   else if (d>30)
   {
       cout <<"Your membership will be cancelled";
   }
   }
   else 
   {
       cout <<"Enter days in positve" ;
   }
    return 0;
    

}
   
   
   
   

