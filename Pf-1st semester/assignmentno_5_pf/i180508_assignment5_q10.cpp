

#include <iostream>
using namespace std;
int main()
{
	int size=3;
	int array[size][size];
	int b[size][size];
	int mul[size][size];
	int i=0;
	int j=0;
	int k=0;
	int sum=0;
	float average;
	int max=-1000;
	int min=1000;
//filling array

	for (i=0 ; i<size; i++)
	{
		for (j=0 ; j<size ; j++)
		{	
			cin>>array[i][j];
		}
	}
	
	initial:
		
//displaying menu

	cout <<"Press as mentioned" <<endl;
	cout <<"Press S to Calculate the total/sum of all the values in the array " <<endl;
	cout <<"Press A to Calculates average of all the values in the array " <<endl;
	cout <<"Press R to Calculates total/sum of the values in the specified row " <<endl;
	cout <<"Press C to Calculates total/sum of the values in the specified column." <<endl;
	cout <<"Press H to Finds highest value in the specified row of the array. " <<endl;
	cout <<"Press L to Finds lowest value in the specified row of the array. " <<endl;
	cout <<"Press T to Find Transpose of array." <<endl;
	cout <<"Press G to Calculates total/sum of the values in the left Diagonal of array " <<endl;
	cout <<"Press D to Calculates total/sum of the values in the right Diagonal of array." <<endl;
	cout <<"Press M to Take another 3 X 3 array as input from user and multiply both." <<endl;

//menu closing

	char choice;  //taking choice
	cout <<"SELECT FROM MENU" <<endl;
	cin>>choice;
	
//initizling switch

	switch (choice)
	{
		// sum of total elements
		case 'S':                                           
			for (i=0 ; i<size ; i++)
			{
				for (j=0 ; j<size ; j++)
				{
					sum=sum+array[i][j];
				}
			}
			cout <<"Sum is " <<sum <<endl;

		break;
		
		//average of all elements;

		case 'A':                                           
			for (i=0 ; i<size ; i++)
			{
				for (j=0 ; j<size ; j++)
				{
					sum=sum+array[i][j];
				}
			}
			average=float(sum)/9;
			cout <<"Average is " << average <<endl;
		break;
		
		//specified row sum :)
		
		case 'R':   
			
			cout <<"Enter the row of which sum you need " <<endl;
			cin >> choice;	
			switch (choice)
			{	
				case '0':  //row 0
					for (i=0 ; i<size ; i++)
					{
						sum=sum+array[0][i];	
					}
					cout <<"Sum of Row zero is " << sum <<endl;
				break;
			
				case '1':  //row 1
					for (i=0 ; i<size ; i++)
					{
						sum=sum+array[1][i];	
					}
					cout <<"Sum of Row zero is " << sum <<endl;
				break;	
			
				case '2':  //row 2
					for (i=0 ; i<size ; i++)
					{
						sum=sum+array[2][i];	
					}
					cout <<"Sum of Row zero is " << sum <<endl;
				break;
			}
			
		break;
		


		//specified coloumn sum :)
		
		case 'C':   
			
			cout <<"Enter the colomn of which sum you need " <<endl;
			cin >> choice;	
			switch (choice)
			{	
				case '0':  //colomun 0
					for (i=0 ; i<size ; i++)
					{
						sum=sum+array[i][0];	
					}
					cout <<"Sum of Coloumn zero is " << sum <<endl;
				break;
			
				case '1':  //colomun 1
					for (i=0 ; i<size ; i++)
					{
						sum=sum+array[i][1];	
					}
					cout <<"Sum of Coloumn zero is " << sum <<endl;
				break;	
			
				case '2':  //colomun 2
					for (i=0 ; i<size ; i++)
					{
						sum=sum+array[i][2];	
					}
					cout <<"Sum of Coloumn zero is " << sum <<endl;
				break;
			}
			
		break;
		
		//Highest value in specified row
			
		case 'H':   
			
			cout <<"Enter the row of which  you need to find max value " <<endl;
			cin >> choice;	
			switch (choice)
			{	
				case '0':  //row 0
					for (i=0 ; i<size ; i++)
					{
						if (array[0][i]>max)
						{
							max=array[0][i];
						}
					}
					cout <<"Maximum value in the row is " << max <<endl;
				break;
			
				case '1':  //row 1
					for (i=0 ; i<size ; i++)
					{
						if (array[1][i]>max)
						{
							max=array[1][i];
						}
					}
					cout <<"Maximum value in the row is " << max <<endl;
				break;	
			
				case '2':  //row 2
					for (i=0 ; i<size ; i++)
					{
						if (array[2][i]>max)
						{
							max=array[2][i];
						}
					}
					cout <<"Maximum value in the row is " << max <<endl;
				break;
			}
			
		break;
		
		
		//Lowest value in specified row
			
		case 'L':   
			
			cout <<"Enter the row of which  you need to find Minimum value " <<endl;
			cin >> choice;	
			switch (choice)
			{	
				case '0':  //row 0
					for (i=0 ; i<size ; i++)
					{
						if (array[0][i]<min)
						{
							min=array[0][i];
						}
					}
					cout <<"Minimum value in the row is " << min <<endl;
				break;
			
				case '1':  //row 1
					for (i=0 ; i<size ; i++)
					{
						if (array[1][i]<min)
						{
							min=array[1][i];
						}
					}
					cout <<"Minimum value in the row is " << min <<endl;
				break;	
			
				case '2':  //row 2
					for (i=0 ; i<size ; i++)
					{
						if (array[2][i]<min)
						{
							min=array[2][i];
						}
					}
					cout <<"Minimum value in the row is " << min <<endl;
				break;
			}
			
		break;
		

		// Transpose of matrix 
		case 'T':                                           
			for (i=0 ; i<size ; i++)
			{
				for (j=0 ; j<size ; j++)
				{
					cout<< array[j][i] <<"   " ;
				}
				cout <<endl;
			}
			

		break;
	
		//sum of the values in the right Diagonal of array
		
		case 'D':
			
			for (i=0 ; i<size ; i++)
			{
				for (j=0 ; j<size ; j++)
				{
					if (i==j)
					{
						sum=sum+array[i][j];
					}
				}
			}
			cout <<"Sum of Right diagonal is " << sum <<endl;

		break;

		
		//sum of the values in the left Diagonal of array
		
		case 'G':
			
			for (i=0 ; i<size ; i++)
			{
				for (j=0 ; j<size ; j++)
				{
					if (i+j==size-1)
						sum=sum+array[i][j];
					
				}
			}
			cout <<"Sum of left diagonal is " << sum <<endl;

		break;
		
		


	
		//multiply
		
		case 'M':
			
			cout <<"Enter value for second array" <<endl;
		
			
			for (i=0 ; i<size ; i++)
			{
				for (j=0 ; j<size ; j++)
				{
					cin>>b[i][j];
				}
			}
				
			//multipying two matrix

			for (i=0 ;i <size ; i++ )
			{
				for (j=0 ; j<size ; j++ )
				{
					sum=0;
					for (k=0 ; k<size ; k++)
					{
						sum=sum+array[i][k]*b[k][j];
					}
				mul[i][j]=sum;
				}
			}
	
			for (i=0 ; i<size ; i++ )
			{
				for (j=0 ; j<size ; j++)
				{
					cout <<mul[i][j] <<" " ;
				}
			cout <<endl;
			}
		break;
		
		default:
			cout <<"Wrong Choice :) " <<endl;
			goto initial;
		break;		
	
	}
return 0;
}
	



