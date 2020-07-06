

#include <iostream>
using namespace std;
int main()
{
	int n1,n2 ,choice ;
	cout <<"Enter first no" <<endl;
	cin >> n1;
	cout <<"Enter second no" <<endl;
	cin >>n2;
	cout <<"Welcome " <<endl;
	cout <<"Press 1 for * " <<endl;
	cout <<"Press 2 for / " <<endl;
	cout <<"Press 3 for power" <<endl;
	cin >> choice;
float pro;
float result=1;

int sum=0;
int quo=0;
	if (choice==1)
	{
		for (int i=1 ; i<=n2 ; i++)
		{
			sum=sum+n1 ;
		}
		cout <<"Product " << sum <<endl;
	}

	if (choice==2)
	{

		if (n1<n2)
		{
			cout <<"Please enter first number geater "<<endl;
		}
		else if (n1>n2)
		{
			while (n1>=n2)
			{
				n1=n1-n2;
				quo++ ; 
			}
			cout <<"Division is" <<quo <<endl;
	
			cout <<"Remainder is" <<n1 <<endl;
		}
	}




	if (choice==3 )
	{

		for(int i=1 ; i <= n2; ++i)
		{
			pro=float (1)/n1 ;
			    result = result/pro;
		}

	cout << result << endl;

}






return 0;


}	

		
