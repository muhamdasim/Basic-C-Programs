#include <iostream>
#include <fstream>
using namespace std;
int main()
{
	
	fstream dataafile;
	dataafile.open("info.txt",ios::out);

	dataafile << " TATA" <<endl;
	dataafile << " TATA" <<endl;


	
dataafile.close();
fstream datafile;
string a;
datafile.open("info.txt", ios::in );
while(!datafile.eof())
{
		datafile>>a;
		cout<<a;
}
datafile.close();
return 0;


}
