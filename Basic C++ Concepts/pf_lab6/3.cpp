

#include <iostream> 
#include <cstdlib>
#include <ctime>
using namespace std;
int main()
{

int a;
int n;

	

	
srand(time(NULL));  
	 
	n=rand() % (11-3+1);
	
	a=rand() % ((126-33)+1) ;
	char ch;
ch=a;




int i,j;
for (i=1 ; i<=n ; i++ )
{
for (j=1 ; j<i ; j++ )
{
cout <<" "; 
}
for (j=1 ; j<=n*2 - (2*i-1) ; j++ )
{
cout <<ch;
}
cout <<endl;
}
return 0;
}
		
