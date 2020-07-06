#include <iostream>
using namespace std;

int main()
{
    	int i, j, equ, ld, count;
	float  fact, sum;
	int d;

cout <<"Enter no" <<endl;
cin>>count;

    cout<<"All Strong numbers between 1 to n  are:" <<endl;
    

    for(i=1; i<=count; i++)
    {

        equ = i;

        sum = 0;


        while(equ > 0)
        {
            fact = 1ll;
            ld = equ % 10;


            for( j=1; j<=ld; j++)
            {
                fact = fact * j;
            }

            sum += fact; 

            equ /= 10;
        }
        

        if(sum == i)
        {

cout <<endl;
cout <<i;

        }
    }

    return 0;
}
