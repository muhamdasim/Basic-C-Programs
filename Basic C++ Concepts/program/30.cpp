#include <iostream>
using namespace std;

int main() 
{
    int n ;
    int i = 1 ;
    int f = 1;

    cout << "Enter a positive integer: ";
    cin >> n;
    
    while ( i <= n) {
        f *= i;      
        ++i;
    }

    cout<<"Factorial of "<< n <<" = "<< f;
    return 0;
}
