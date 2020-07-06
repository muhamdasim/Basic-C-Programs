#include <iostream>
#include <fstream>
using namespace std;
ofstream output ("filename.txt",ios::out);
int main()

{
	int n;
	cin>>n;
	
	output<<n;
}
