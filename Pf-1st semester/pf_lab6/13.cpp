#include <iostream> 
#include <cstdlib>
#include <ctime>

using namespace std;
int main() 
{


const int n=3 ;
int array[n] ;
int random;
srand(time(NULL));




int i;
for (i=1 ; i<=n ; i++ )
{

	random=rand() % (1000+1) ;

cout <<random << endl;

}

return 0;
}
