#include <iostream>
using namespace std;
const int row=5;
const int col=100;

void test (char array[row][col])
{
	for (int i=0 ; i<5 ; i++)
	{
		cin>>array[i];
	}
}

int main()
{
	char array[row][col];
	
	test(array);
}
