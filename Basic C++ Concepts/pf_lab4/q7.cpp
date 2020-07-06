
#include <iostream>
using namespace std;
int main ()
{

int x,y;
int choice;
char ex;
cout <<"Welcome to calculator" <<endl;
initial:
cout <<"Press 1 for adddition" <<endl <<"Press 2 for subtraction" <<endl <<"Press 3 for multiplication" <<endl <<"Press 4 for division" <<endl;
cin >>choice ;
cout <<"Enter first no" <<endl;
cin >>x;
cout <<"Enter second no" <<endl;
cin >>y;
while (choice<1 || choice>4)
{
cout <<"Error" <<endl;
goto initial ;
}
while (choice==1)
{
cout <<"Sum is: " <<x+y <<endl;
cout <<"press y to exit" ;

cin>> ex ;
if (ex=='y')
{
goto ter;
}
else 
goto initial ;
}
while (choice==2)
{
cout <<"Subtraction is: " <<x-y <<endl;
cout <<"press y to exit" ;

cin>> ex ;
if (ex=='y')
{
goto ter;
}
else 
goto initial ;
}
while (choice==3)
{
cout <<"Product is: " <<x*y <<endl;
cout <<"press y to exit" ;

cin>> ex ;
if (ex=='y')
{
goto ter;
}
else 
goto initial ;
}
while (choice==4)
{
cout <<"Sum is: " <<x/y <<endl;
cout <<"press y to exit" ;

cin>> ex ;
if (ex=='y')
{
goto ter;
}
else 
goto initial ;
} 

ter:
terminate;

return 0;

}

