
#include <iostream>
using namespace std;
int main()
{

	char name[5][100];
	double score[5][4];
	int j=0;
	int i=0;
	float average;
	int sum=0;
	double store[5];
	int k=0;
	start:
	for (i=0 ; i<5 ; i++)
	{
		
		cout<<"Enter Name of " <<i+1 <<" Student" <<endl;
		cin>>name[i];
	}
	
	cout<<endl;
	cout<<"Enter test score" <<endl;
	cout <<endl;	
	
	for (i=0 ; i<5 ; i++)
	{	
		cout<<"Enter " <<name[i]<<" score" <<endl;
		cout<<endl;
		sum=0;
		for (j=0; j<4 ; j++)
		{
			cout<<"Enter test " <<j+1 <<" Score" <<endl;
			cin>>score[i][j] ;
			if (score[i][j]<0 || score[i][j]>100)
			{
				cout<<"Enter score greater than 0 and less than 100" <<endl;
				goto start;
			}
			else
			{
				sum=sum+score[i][j];
			}
					
		}
		average=float(sum)/4;
		store[i]=average;
		
	}
	
		


for (i=0 ; i<5 ; i++)
	{
		
		cout<<store[i] <<endl;
		cout<<"Student Name: " <<name[i] <<endl;
	//90 to 100 A
//80 to 89 B
//70 to 79 C
//60 to 69 D
//0 to 59 F		
		
		if (store[i]>=0 && store[i]<=59)
		{
			cout<<"Student Name: " <<name[i] <<" Awarded F Grade" <<endl;
					
		}
		
		else if (store[i]>=60 && store[i]<=69)
		{
			cout<<"Student Name: " <<name[i] <<" Awarded D Grade" <<endl;
			
		}


		else if (store[i]>=70 && store[i]<=79)
		{
			cout<<"Student Name: " <<name[i] <<" Awarded C Grade" <<endl;
			
		}


		else if (store[i]>=80 && store[i]<=89)
		{
			cout<<"Student Name: " <<name[i] <<" Awarded B Grade" <<endl;
			
		}
		
		else if (store[i]>=90 && store[i]<=100)
		{
			cout<<"Student Name: " <<name[i] <<" Awarded A Grade" <<endl;
			
		}
 
	
	}
	
	
}
