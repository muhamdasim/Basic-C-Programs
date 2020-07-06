

#include <iostream>
using namespace std;
const int r=3;
const int c=3;

//sum of all values;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;

int getTotal(int array[r][c],int r,int c)
{
	
int i=0;
int j=0;
int sum=0;
cout<<"Enter elements of Array"<<endl;
	for (i=0; i<r; i++)
	{
		for (j=0; j<c ;j++)
		{
			cin>>array[i][j];
			sum=sum+array[i][j];
		}
	}
	
return sum;

}


//average of all elements;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;

float getAverage(int array[r][c],int r,int c)
{
	
int i=0;
int j=0;
int sum=0;
float average;
cout<<"Enter elements of Array"<<endl;
	for (i=0; i<r; i++)
	{
		for (j=0; j<c ;j++)
		{
			cin>>array[i][j];
			sum=sum+array[i][j];
		}
	}
	average=float(sum)/(r*c);
return average;

}

//specified row total;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;


int getrowTotal(int array[r][c],int r,int c)
{
	
int i=0;
int j=0;
int sum=0;
int choice;
cout<<"Enter Your specified Row"<<endl;
cin>>choice;

cout<<"Enter elements of Array"<<endl;
	for (i=0; i<r; i++)
	{
		for (j=0; j<c ;j++)
		{
			cin>>array[i][j];

		}
	}

	for (i=choice-1 ; i<r; i++)

	{	for (j=0; j<c ;j++)
		{
	
			sum=sum+array[i][j];	
		
		}
         break;
	}


	
	

return sum;

}


//specified column total;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;


int getcolTotal(int array[r][c],int r,int c)
{
	
int i=0;
int j=0;
int sum=0;
int choice;
cout<<"Enter Your specified Column"<<endl;
cin>>choice;

cout<<"Enter elements of Array"<<endl;
	for (i=0; i<r; i++)
	{
		for (j=0; j<c ;j++)
		{
			cin>>array[i][j];

		}
	}

	for (i=0 ; i<r; i++)
	{
		for (j=choice-1; j<c ;j++)
		{

			sum=sum+array[i][j];	
		
		}
         break;
	}


	
	

return sum;

}

//specified row max ;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;


int gethighestrow(int array[r][c],int r,int c)
{
	
int i=0;
int j=0;
int max=-1000;
int choice;
cout<<"Enter Your specified Column"<<endl;
cin>>choice;



cout<<"Enter elements of Array"<<endl;
	for (i=0; i<r; i++)
	{
		for (j=0; j<c ;j++)
		{
			cin>>array[i][j];

		}
	}

	for (i=choice-1 ; i<r; i++)

	{	for (j=0; j<c ;j++)
		{

			if (array[i]>array[j]);
			{
				max=array[i][j];
			}
		
		}
         break;
	}


	
	

return max;

}


//specified row min ;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;


int getlowestrow(int array[r][c],int r,int c)
{
	
int i=0;
int j=0;
int min=1000;
int choice;
cout<<"Enter Your specified Column"<<endl;
cin>>choice;
cout<<"Enter elements of Array"<<endl;
	for (i=0; i<r; i++)
	{
		for (j=0; j<c ;j++)
		{
			cin>>array[i][j];

		}
	}


	for (i=choice-1 ; i<r; i++)

	{	for (j=0; j<c ;j++)
		{

			if (array[i]<array[j]);
			{
				min=array[i][j];
			}
		
		}
         break;
	}


	
	

return min;

}

//transpose

void transpose(int array[r][c],int r,int c)
{
	int i=0;
	int j=0;
	int trans[3][3];
	cout<<"Enter elements of Array"<<endl;
	for (i=0; i<r; i++)
	{
		for (j=0; j<c ;j++)
		{
			cin>>array[i][j];
		}
	}
		
	for (i=0; i<r; i++)
	{
		for (j=0; j<c ;j++)
		{
			trans[i][j]=array[j][i];
	
		}
	}

	for (i=0; i<r; i++)
	{
		for (j=0; j<c ;j++)
		{
			cout<<trans[i][j]<<" " ;
	
		}
	cout<<endl;
	}

}

//left diagonal


int leftdiagonalsum(int array[r][c],int r,int c)
{
	
int i=0;
int j=0;
int sum=0;
cout<<"Enter elements of Array"<<endl;
	for (i=0; i<r; i++)
	{
		for (j=0; j<c ;j++)
		{
			cin>>array[i][j];
			if (i==j)
			{
				sum=sum+array[i][j];
			}
		}
	}
	
return sum;

}


//right diagonal


int rightdiagonalsum(int array[r][c],int r,int c)
{
	
int i=0;
int j=0;
int sum=0;
cout<<"Enter elements of Array"<<endl;
	for (i=0; i<r; i++)
	{
		for (j=0; j<c ;j++)
		{
			cin>>array[i][j];
			if (i+j==r-1)
			{
				sum=sum+array[i][j];
			}
		}
	}
	
return sum;

}

//multiply

void multiply(int array[r][c],int r,int c)
{
	int i=0;
	int j=0;
	int sum=0;
	int k=0;
	int mul[r][c];
	int b[r][c];
	cout<<"Enter 1st Matrix Element"<<endl;
	for (i=0 ; i<r ; i++)
	{
		for (j=0 ; j<c ; j++)
		{
			cin>>array[i][j];
		}
	}
	cout<<"Enter 2nd Matrix Element"<<endl;
	
	for (i=0 ; i<r ; i++)
	{
		for (j=0 ; j<c ; j++)
		{
			cin>>b[i][j];
		}
	}
	
	for (i=0 ; i<r ; i++)
	{
		for (j=0 ; j<c ; j++)
		{
		sum=0;
			for (k=0 ; k<r ; k++)
			{
				sum=sum+array[i][k]*b[k][j];
			}
			mul[i][j]=sum;
		}
	}

	for (i=0 ; i<r ; i++)
	{
		for (j=0 ; j<c ; j++)
		{
			cout<<mul[i][j]<<" " ;
		}
		cout<<endl;
	}

}

		




	





//main function;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;

int main()
{
	
	int array[3][3];
	

	int choice;
	
	cout<<"MENU" <<endl;
	cout<<"Press 1 for sum of all elements" <<endl;
	cout<<"Press 2 for Average of all elements" <<endl;
	cout<<"Press 3 for specified row total" <<endl;
	cout<<"Press 4 for specified column total"<<endl;
	cout<<"Press 5 for Highest in specified in Row"<<endl;
	cout<<"Press 6 for lowest in specified in column"<<endl;
	cout<<"Press 7 for transpose of matrix"<<endl;
	cout<<"Press 8 for left diagonal sum"<<endl;
	cout<<"Press 9 for right diagonal sum"<<endl;
	cout<<"Press 10 for multiplication of array"<<endl;
	
	cin>>choice;
	if (choice==1) 
	{
		cout<<getTotal(array,r,c);
	}

	if (choice==2) 
	{
		cout<<getAverage(array,r,c);
	}
	
	if (choice==3) 
	{
		cout<<getrowTotal(array,r,c);
	}

	if (choice==4) 
	{
		cout<<getcolTotal(array,r,c);
	}

	if (choice==5) 
	{
		cout<<gethighestrow(array,r,c);
	}

	if (choice==6) 
	{
		cout<<getlowestrow(array,r,c);
	}
	if (choice==7) 
	{
		transpose(array,r,c);
	}
	if (choice==8) 
	{
		cout<<leftdiagonalsum(array,r,c);
	}
	if (choice==9) 
	{
		cout<<rightdiagonalsum(array,r,c);
	}
	if (choice==10) 
	{
		multiply(array,r,c);
	}
}
	
