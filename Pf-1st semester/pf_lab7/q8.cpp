

#include <iostream>
using namespace std;
int main()
{
const int size=3;
const int size1=5;
	
int array[size][size1];

int i=0,j=0;
float   sum=0 , sum1=0 , sum2=0 , sum3=0 ;
float average,average1 , average2 , average3 ;

//Input in arrau

for (i=0 ; i<size ; i++)
{
	for(j=0;j<size1;j++)
	{

	cin >> array[i][j] ;

	}
}


for (i=0 ; i<size ; i++)
{
	for(j=0;j<size1;j++)
	{




		if (j=1)  //day 1 // columun 1 
		
			sum=sum+array[i][j] ;
			average=sum/3 ;


			



		if (j=1)  //day 1 // columun 1 
		
			sum1=sum+array[i][j] ;
			average1=sum1/3 ;

		if (j=3)  //day 1 // columun 1 
		
			sum2=sum+array[i][j] ;
			average2=sum2/3 ;

		if (j=4)  //day 1 // columun 1 
		
			sum3=sum+array[i][j] ;
			average3=sum3/3 ;


	}
}


cout <<"Average day 1 is " << average <<endl;
cout <<"Average day 2 is " << average1 <<endl;
cout <<"Average day 3 is " << average2 <<endl;
cout <<"Average day 4 is " << average3 <<endl;


return 0;

}
		







