#include <iostream>
using namespace std;
void function(char *array,int n )
{
	cout <<array;
}

int main()
{

char array[100];
	
cin>>array;
	
	char *ptr;
	
	ptr=array;
	
	function(ptr,100);
}
