#include <iostream> 
#include <cstdlib>
#include <ctime>
using namespace std;
int main() 
{
	int x, y, z;
	int r1, r2,r3 ;
	

	srand(time(NULL));  
	r1=rand() % 10;
	r2=rand() % 10;
	r3=rand() % 10;

	cout << "random number 1 = " << r1 << endl;
	cout << "random number 2 = " << r2 << endl;
	cout << "random number 3 = " << r3 << endl;


	cout << "Enter first guess between 0 and 9: ";
	cin >> x;
	cout << "Enter second guess between 0 and 9: ";
	cin >> y;
	cout << "Enter third guess between 0 and 9: ";
	cin >> z;
	
	
	if (x == r1 && y == r2 && z == r3) 
	{
		cout << "\n Three matching in exact order " <<endl;
	}
	
	else if (x == r3 && y == r2 && z == r1) 
	{
		cout << "\n Three matching in different order " <<endl;
	}
	
	else if (x == r2 && y == r3 && z == r1) 
	{
		cout << "\n Three matching in different order " <<endl;
	}
    else if (x == r1 && y == r3 && z == r2) 
	{
		cout << "\n Three matching in different order " <<endl;
	}
	
	
	
	
	else if (x == r1 && y == r2 || y==r1 && z==r3 || x==r2 && z==r3  )
	{
		cout << "\n Two match" << endl;
	}
	
	else if (y == r1 && z==r2 || z==r1 && x==r3 || y==r2 && x==r3  )
	{
		cout << "\n Two match" << endl;
	}
	else if (z == r1 && x == r2 || x==r1 && y==r3 || z==r2 && x==r3 || z==r1 && y==r2 )
	{
		cout << "\n Two match" << endl;
	}
	
	
	else if (x == r1 || x == r2 || x == r3)
	{
		cout << "\n One Match" << endl;
	}
	
	else if (y == r1 || y == r2 || y == r3)
	{
		cout << "\n One Match" << endl;
	}
	else if (z == r1 || z == r2 || z == r3)
	{
		cout << "\n One Match" << endl;

	}

	else if (x != r1 && y != r2 && z != r3)
	{
		cout << "\n No Match" << endl;
	}
	
	return 0;


}

