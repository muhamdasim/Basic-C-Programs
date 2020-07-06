#include <iostream>
using namespace std;


int main()
{
	int m;
	int d;
	
cout <<"Enter month no" << endl ;

cin >> m;



	
switch(m)
	{
		
        case  1:
	case  3:
	case  5:
	case  7:
	case  8:	
        case 10:
	case 12:
cout <<"Numbber of days in month is: 31 " ;
break;



case  4:
case  6:
case  9:
case 11:
cout <<"Numbber of days in month is: 30 " ;
break;
		
			
		case 2:
cout <<"Numbber of days in month is: 28 " ;
			break;
		
		default:
cout <<"Numbber of days in month is: 0 " ;
			break;		
	}
	
	
	
	return 0;
	
}

