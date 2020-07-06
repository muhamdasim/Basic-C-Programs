#include <iostream>
using namespace std;
int main()
{
	int array[10][10][10][10][10];
	int c1=0,c2=0,c3=0,c4=0,c5=0;
	int i=0,j=0,k=0,l=0,m=0;
	cout <<"Enter dimension" <<endl;
	cin >> c1;
	cout <<"Enter dimension" <<endl;
	cin >> c2;
	cout <<"Enter dimension" <<endl;
	cin >> c3;	
	cout <<"Enter dimension" <<endl;
	cin >> c4;
	cout <<"Enter dimension" <<endl;
	cin >> c5;

	float mean;
	int sum=0;
	
	for (i=0 ; i<c1 ; i++ )
	{
		for (j=0 ; j<c2 ; j++)
		{
			for (k=0 ; k<c3 ; k++)
			{
				for (l=0 ; l<c4 ; k++)
				{
					for (m=0 ; m<c5 ; m++)
					{
						cin>>array[i][j][k][l][m];
						sum=sum+array[i][j][k][l][m];
					}
				}
			}
		}
	}

	cout <<"Mean value is " <<endl;
	mean=float(sum)/(c1*c2*c3*c4*c5) ;
	cout <<mean;
}
		
	
