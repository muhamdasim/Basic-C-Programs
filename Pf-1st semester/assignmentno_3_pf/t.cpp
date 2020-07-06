#include<iostream>
using namespace std;

int main()
{
  char a,b,c;
  cout<<"The three primary colors are Red, Blue and Yellow"<<endl;
  cout<<"Enter the two primary colors to mix: "<<endl<<"Red=r Blue=b Yellow=y";
  cout<<"\nEnter first color: ";
  cin>>a;
  cout<<"Enter second color: ";
  cin>>b;
  if(a=='r' && b=='b' || a=='b' && b=='y' || a=='y' && b=='b' || a=='b' && b=='r' || a=='y' && b=='b' || a=='y' && b=='r')
  {
  if(a=='r' && b=='b' || a=='b' && b=='r')
  cout<<"You will get PURPLE color";
  if(a=='r' && b=='y' || a=='y' && b=='r')
  cout<<"You will get ORANGE color";
  if(a=='b' && b=='y'|| a=='y' && b=='b')
  cout<<"You will get GREEN color";
  }
  else 
  cout<<"Error";
 
  return 0;
}

