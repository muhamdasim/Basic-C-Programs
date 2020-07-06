


#include <iostream> 
#include <cstdlib>
#include <ctime>
using namespace std;
int main() 
{
	int x ;
	int r1 ;
	int alpha;

	srand(time(NULL));  
	r1=rand() % 11   ;
char al ;
int st;
st=r1+65 ;
al=char(st) ;
if (st>=65 && st<=90 )
{	

char alpha;
alpha=char (st) ;
	cout << "random Alphabter= " << alpha << endl;
	
}


int choice ;
	int r2 ;


	srand(time(NULL));  
	r2=rand() % 1   ;

cout <<"Random order " <<r2 << endl;

while (r2==1)

{

if (alpha>65 && alpha<90 )

{

cout <<  alpha ;

}
alpha=alpha+1 ;

}

while (r2==0)

{

if (alpha>65 && alpha<90 )

{

cout << alpha ;

}
alpha=alpha-1 ;

}








return 0;

}

