#include <iostream>
using namespace std;
int main ()

{


int n;
char m;
cout << "Menu: " << endl ;

cout <<"Enter b for burger , f for fries , p for pizza and s for sandwitches " <<endl ;

cin >> m; 
cout <<"Enter quantity" ;
cin >> n;
switch (m)

{

case 'b': 

   cout <<"Bill is " << n*200 ;

break ;
case 'f' :
   cout <<"Bill is " << n*50 ;
break ;
case 'p' :
  cout <<"Bill is  " << n*500 ;
break ;
case 's' :

  cout <<" Bil lis " << n*150 ;
break ;

}

return 0;

}
