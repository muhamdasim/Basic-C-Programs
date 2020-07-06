#include <iostream>
#include <cmath>

using namespace std;

float distance(int x1, int y1,int x2, int y2)

{
	
	return sqrt(((x1-x2)*(x1-x2))+((y1-y2)*(y1-y2)));
}

//Area of Triangle = 1/2(x1(y2−y3)+x2(y3−y1)+x3(y1−y2))


float area(int x1, int y1,int x2, int y2,int x3,int y3)
{
return abs (0.5*(x1*(y2-y3)+x2*(y3-y1)+x3*(y1-y3)));
}

//checking point lies inside or not

bool check(int x1, int y1, int x2, int y2, int x3, int y3, int x, int y)
{
		int flag=false;	
		float actual=area(x1, y1, x2, y2, x3, y3);
		float area1 = area (x, y, x2, y2, x3, y3);
   		float area2 = area (x1, y1, x, y, x3, y3);
  		float area3 = area (x1, y1, x2, y2, x, y);
			
  		 if (actual == area1+area2+area3)
			{
				flag=true;
			}
return flag;
}


int main()
{
	int x1,y1,x2,y2,x3,y3;
	int x,y;
	cout <<"Enter Point one co ordinates"<<endl;
	cin>> x1;
	cin>>y1;
	cout <<"Enter Point two co ordinates"<<endl;
	cin>> x2;
	cin>>y2;
	cout <<"Enter Point third co ordinates"<<endl;
	cin>> x3;
	cin>>y3;
	cout <<"Enter point to check"<<endl;
	cin>>x ;
	cin>>y;
	int flag;
	cout <<"Distance Between two points"<<distance(x1,y1,x2,y2)<<endl;
	cout <<"Area of triangle"<<area(x1,y1,x2,y2,x3,y3)<<endl;
	cout <<"Point check"<<endl; flag=check(x1,y1,x2,y2,x3,y3,x,y);
	if (flag==1 )
	{
		cout<<"Inside"<<endl;
	}
	else
		cout<<"Not"<<endl;
	
	
	


}
	
