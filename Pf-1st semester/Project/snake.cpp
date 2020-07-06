//============================================================================
// Name        : Tetris.cpp
// Author      : Sibt ul Hussain
// Version     :
// Copyright   : (c) Reserved
// Description : Basic 2D game of Tetris...
//============================================================================
#ifndef TETRIS_CPP_
#define TETRIS_CPP_
#include "util.h"
#include <iostream>
#include<vector>
#include<algorithm>
//#include<cstdlib>
#include<ctime>
#include<string>
//#include<sys/wait.h>
//#include<stdlib.h>
//#include<stdio.h>
#include<unistd.h>
#include<sstream>
#include<cmath>      // for basic math functions such as cos, sin, sqrt
using namespace std;

//int levelscore=200;
//void level()




void NonPrintableKeys(int , int , int);

/* Function sets canvas size (drawing area) in pixels...
 *  that is what dimensions (x and y) your game will have
 *  Note that the bottom-left coordinate has value (0,0) and top-right coordinate has value (width-1,height-1)
 * */
void SetCanvasSize(int width, int height) {
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glOrtho(0, width, 0, height, -1, 1); // set the screen size to given width and height.
    glMatrixMode( GL_MODELVIEW);
    glLoadIdentity();
}



//prototypes of all funcitons





///2D ARRAYYYYYYYYYYYYYYYYYY;;;;;;;;;;;;;;;;;;;;;

int width = 1000, height = 600; // i have set my window size to be 1000x 600

int snakelength=3;
int snakedirection;

//



//hurdle deceleration;;;;;;;;;;;;;;;;;;;;;;;;;;;

int xx1;
int yy1;
int xx2;
int yy2;
int xx3;
int yy3;

		bool h1=false;
		bool h2=false;
		bool h3=false;





///global initilization;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;


int i=0;
int j=0;
int score=0;
string scorecounter;
//short direction=RIGHT;


//array storage;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;


int pos_x[1000] = { 500,  500,  500 };
int pos_y[600] = { 500,501,  502 };

//booooooooooooooooooooollll variables;;;;;;;;;;;;;;;;;;;;


bool gameover=false;
bool MENU=false;


//foood variables;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;


		int food_timer=0;
		int power_timer=0;


		int xr1;
		int yr1;
	
		int xr2;
		int yr2;
	
		int xr3;
		int yr3;	
		
		int xr4;
		int yr4;

		int xr5;
		int yr5;

		int powerx;
		int powery;


		bool f1=false;
		bool f2=false;
		bool f3=false;
		bool f4=false;
		bool f5=false;
		bool power=false;

//closing foood variables;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;






//function initilize board;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;

void drawgrid()
{
	for (i=0 ; i<1000 ; i=i+10)
	{
		for (j=0 ; j<600 ; j=j+10)
		{
			DrawSquare( i , j , 10 ,colors[YELLOW]);

		}	
	}
}








//draaaaaaaaaaaaaaaaaaaaaaawing snake;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;


void drawsnake()
{

for (i = snakelength ; i>0 ; i-- )
{
	pos_x[i] = pos_x[i-1];
	pos_y[i] = pos_y[i-1];
}
	if (snakedirection == GLUT_KEY_UP )
	{	
		pos_y[0]+=10;
		
	}	
	if ( snakedirection == GLUT_KEY_DOWN )
		pos_y[0]-=10;
	if ( snakedirection == GLUT_KEY_RIGHT )
		pos_x[0]+=10;
	if ( snakedirection == GLUT_KEY_LEFT )
		pos_x[0]-=10;

	for ( i=0 ; i<snakelength ; i++ )
	{
		if ( i==0 )
		{

			DrawCircle( pos_x[i]+5 , pos_y[i]+5 , 6 , colors[RED]);
		}
		else
	  DrawSquare( pos_x[i] , pos_y[i] , 10 ,colors[BLUE+i]);
}


}

//foooooooooooooooooooooooooooooooooooooooooooooooooooodddd



// random(int &xr1 , int &yr1)
//{
	//srand(time(NULL));
	//xr1=rand()%900+50;
	//yr1=rand()&500+50;
//}


void food_fun()
{
	
		xr1=rand() % 900+50;
		yr1=rand() % 500+50;
		f1 = true;
	
		xr2=rand() % 900+50;
		yr2=rand() % 500+50;
		f2 = true;
	
		xr3=rand() % 900+50;
		yr3=rand() % 500+50;
		f3 = true;
	
		xr4=rand() % 900+50;
		yr4=rand() % 500+50;
		f4 = true;
		
		xr5=rand() % 900+50;
		yr5=rand() % 500 +50;
		f5 = true;	
		


	
	
}


//void hurdles random generation;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;

void hurdle()
{
	
		xx1=rand() % 100+100;
		yy1=rand() % 100+100;
		h1 = true;
	
	
		xx2=rand() % 400+50;
		yy2=rand() % 300+50;
		h2 = true;
		
		if (xx1==xx2 && yy1==yy2)
		{
			xx1=rand() % 100+100;
			yy1=rand() % 100+100;
			h1 = true;
		}
	
		xx3=rand() % 600+50;
		yy3=rand() % 600+50;
		h3 = true;
			
		if (xx3==xx2 && yy3==yy2)
		{
			xx3=rand() % 600+50;
			yy3=rand() % 600+50;
			h3 = true;
		}
	

}


//poweeeeeeeeeeeeeeeeer foooooooooooooood;;;;;;;;;

void powerfood()
{

	powerx=rand() % 900+50;
		powery=rand() % 500+50;
		power = true;
}
	


//snakeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee

void bordercollosion()
{
	
	
	
	if (pos_x[0] <= 0  )
	{
		gameover=true;
				
	}
	else if ( pos_x[0] >= 1000 )
		gameover=true;	
	else if ( pos_y[0] <= 0 )
		gameover=true;
	else if (pos_y[0] >= 600)
		gameover=true;
	

	
}

//void self colosiom

void selfcollosion()
{

	for (i=1 ; i<snakelength ; i++)
	{
		if (pos_x[0]==pos_x[i+4] && pos_y[0]==pos_y[i+4])
		{
			gameover=true;
			break;
		}
	}



}


//void hurdles
		
		
	
	






//food collosion check :))))))))

void foodcollide()
{


	for (int i=0; i<=10 ; i++)
	{
		for (int j=0; j<=10 ; j++)
		{
		
			if(  pos_x[0] == xr1+i && pos_y[0]==yr1+j )
			{
				f1=false; //f1=false;f1=false;f1=false;f1=false;
				snakelength++;
				score+=20;
				glutPostRedisplay();
				break;
			}
		
		

		
		if(  pos_x[0] == xr1-i && pos_y[0]==yr1-j )
		{
			f1=false;//f1=false;f1=false;f1=false;f1=false;
			snakelength++;
			score+=20;
			glutPostRedisplay();
			break;
		}


	}
		
	}


for (int i=0; i<=10 ; i++)
	{
		for (int j=0; j<=10 ; j++)
		{
		
			if(  pos_x[0] == xr2+i && pos_y[0]==yr2+j )
			{
				f2=false; //f1=false;f1=false;f1=false;f1=false;
				snakelength++;
				score+=20;
				glutPostRedisplay();
				break;
			}
		
		

		
		if(  pos_x[0] == xr2-i && pos_y[0]==yr2-j )
		{
			f2=false;//f1=false;f1=false;f1=false;f1=false;
			snakelength++;
			score+=20;
			glutPostRedisplay();
			break;
		}


	}
		
	}


for (int i=0; i<=10 ; i++)
	{
		for (int j=0; j<=10 ; j++)
		{
		
			if(  pos_x[0] == xr3+i && pos_y[0]==yr3+j )
			{
				f3=false; //f1=false;f1=false;f1=false;f1=false;
				snakelength++;
				score+=20;
				glutPostRedisplay();
				break;
			}
		
		

		
		if(  pos_x[0] == xr3-i && pos_y[0]==yr3-j )
		{
			f3=false;//f1=false;f1=false;f1=false;f1=false;
			snakelength++;
			score+=20;
			glutPostRedisplay();
			break;
		}


	}
		
	}

for (int i=0; i<=10 ; i++)
	{
		for (int j=0; j<=10 ; j++)
		{
		
			if(  pos_x[0] == xr4+i && pos_y[0]==yr4+j )
			{
				f4=false; //f1=false;f1=false;f1=false;f1=false;
				snakelength++;
				score+=20;
				glutPostRedisplay();
				break;
			}
		
		

		
		if(  pos_x[0] == xr4-i && pos_y[0]==yr4-j )
		{
			f4=false;//f1=false;f1=false;f1=false;f1=false;
			snakelength++;
			score+=20;
			glutPostRedisplay();
			break;
		}


	}
		
	}

for (int i=0; i<=10 ; i++)
	{
		for (int j=0; j<=10 ; j++)
		{
		
			if(  pos_x[0] == xr5+i && pos_y[0]==yr5+j )
			{
				f5=false; //f1=false;f1=false;f1=false;f1=false;
				snakelength++;
				score+=20;
				glutPostRedisplay();
				break;
			}
		
		

		
		if(  pos_x[0] == xr5-i && pos_y[0]==yr5-j )
		{
			f5=false;//f1=false;f1=false;f1=false;f1=false;
			snakelength++;
			score+=20;
			glutPostRedisplay();
			break;
		}


		
	

	}
		
	}








for (int i=0; i<=10 ; i++)
	{
		for (int j=0; j<=10 ; j++)
		{
		
			if(  pos_x[0] == powerx+i && pos_y[0]==powery+j )
			{
				power=false; //f1=false;f1=false;f1=false;f1=false;
				snakelength++;
				score+=50;
				glutPostRedisplay();
				break;
			}
		
		

		
		if(  pos_x[0] == powerx-i && pos_y[0]==powery-j )
		{
			power=false;//f1=false;f1=false;f1=false;f1=false;
			snakelength++;
			score+=50;
			glutPostRedisplay();
			break;
		}


		
	

	}
		
	}




//hurdle collosion;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;




for (int i=0; i<=10 ; i++)
	{
		for (int j=0; j<=10 ; j++)
		{
		
			if(  pos_x[0] == xx1+i && pos_y[0]==yy1+j )
			{

				gameover=true;
				glutPostRedisplay();
				break;
			}
		
		

		
		if(  pos_x[0] == xx1-i && pos_y[0]==yy1-j )
		{

			gameover=true;
				glutPostRedisplay();
				break;

		}


		
	

	}
		
	}



for (int i=0; i<=10 ; i++)
	{
		for (int j=0; j<=10 ; j++)
		{
		
			if(  pos_x[0] == xx2+i && pos_y[0]==yy2+j )
			{

				gameover=true;
				glutPostRedisplay();
				break;
			}
		
		

		
		if(  pos_x[0] == xx2-i && pos_y[0]==yy2-j )
		{

			gameover=true;
				glutPostRedisplay();
				break;

		}


		
	

	}
		
	}



for (int i=0; i<=10 ; i++)
	{
		for (int j=0; j<=10 ; j++)
		{
		
			if(  pos_x[0] == xx3+i && pos_y[0]==yy3+j )
			{

				gameover=true;
				glutPostRedisplay();
				break;
			}
		
		

		
		if(  pos_x[0] == xx3-i && pos_y[0]==yy3-j )
		{

			gameover=true;
				glutPostRedisplay();
				break;

		}


		
	

	}
		
	}













	


}













		

/*
 * Main Canvas drawing function.
 * */
double startx=320,starty=400;

void Display(){

	DrawSquare(0,0,750,colors[BLACK]);
	DrawString( 200,600 , "THE SNAKE GAME ", colors[RED]);// this will print given string at x=50 , y=600
	DrawString( 200,550 , "AN ULTIMATE ADVENTURE ", colors[RED]);// this will print given string at x=50 , y=600
	DrawString( 150,340 , "PRESS A TO START GAME ", colors[MISTY_ROSE]);// this will print given string at x=50 , y=600
	DrawString( 170,300 , "PRESS ESCAPE TO QUIT GAME", colors[MISTY_ROSE]);// this will print given string at x=50 , y=600
if(MENU==true)
{	
	//DrawCircle( xr1 , yr1 , 10, colors[ORANGE]);
    // set the background color using function glClearColor.
    // to change the background play with the red, green and blue values below.
    // Note that r, g and b values must be in the range [0,1] where 0 means dim rid and 1 means pure red and so on.

    glClearColor(1/*Red Component*/, 1/*Green Component*/,
            1/*Blue Component*/, 0 /*Alpha component*/);// Red==Green==Blue==1 --> White Colour
    glClear(GL_COLOR_BUFFER_BIT);   //Update the colors

if (gameover==false)
{    

food_timer++;
	power_timer++;

drawgrid();
drawsnake();



if(food_timer ==75)
{

		food_fun();	
		hurdle();		
				

	food_timer=0;

}



if(power_timer ==120)
{

	powerfood();

				

	power_timer=0;

}


if ( f1 == true )
	DrawCircle( xr1 , yr1 , 5, colors[INDIGO]);
 if ( f2 == true )
	DrawCircle( xr2 , yr2  , 5, colors[INDIGO]); 
 if ( f3 == true )
	DrawCircle( xr3 , yr3  , 5, colors[INDIGO]); 
 if ( f4 == true )
	DrawCircle( xr4 , yr4  , 5, colors[INDIGO]); 
 if ( f5 == true )
	DrawCircle( xr5 , yr5  , 5, colors[INDIGO]); 

if ( power == true )
	DrawCircle( powerx , powery  , 10, colors[INDIGO]); 


if ( h1 == true )
	DrawSquare( xx1 , yy1 , 20 ,colors[INDIGO]);
 if ( h2 == true )
	DrawSquare( xx2 , yy2 , 20 ,colors[INDIGO]);
 if ( h3 == true )
	DrawSquare( xx3 , yy3 , 20 ,colors[INDIGO]);



 foodcollide();

				

	 bordercollosion();
	selfcollosion();
	


}	
else
{

	DrawString( 400, 350, "Game Over", colors[RED]);
	DrawString( 400, 320, "Score:", colors[RED]);
	DrawString( 480, 320, scorecounter, colors[RED]);
	DrawString( 400, 280, "Press R to Restart", colors[RED]);
}


	






scorecounter=static_cast<ostringstream*>(&(ostringstream()<<score))->str();










	DrawString( 599, 10, "   DESIGNED by Mr Muhammad Asim", colors[BLACK]); // this will print given string at x=50 , y=570
		if (gameover==false)
	{
		DrawString( 550, 550, "                     Your Score::" , colors[RED]); // this will print given string at x=50 , y=600    

		DrawString( 800, 550, scorecounter,  colors[RED]); // this will print= given string at
}
	DrawLine( 0 , 0,  0, 599 , 30 , colors[BLUE] );
	DrawLine( 0 , 0,  999, 0 , 30 , colors[BLUE] );
	DrawLine( 0 , 599, 999 ,  599, 30 , colors[BLUE] );
	DrawLine( 999 , 599,  999, 0 , 30 , colors[BLUE] );

} 
   glutSwapBuffers(); // do not modify this line..
}

/*This function is called (automatically) whenever any non-printable key (such as up-arrow, down-arraw)
 * is pressed from the keyboard
 *
 * You will have to add the necessary code here when the arrow keys are pressed or any other key is pressed...
 *
 * This function has three argument variable key contains the ASCII of the key pressed, while x and y tells the
 * program coordinates of mouse pointer when key was pressed.
 *
 * */








void NonPrintableKeys(int key, int x, int y) {
	
	if ( gameover == false ){
	    if (key == GLUT_KEY_LEFT   ) {
	if (snakedirection!= GLUT_KEY_RIGHT )
		snakedirection = GLUT_KEY_LEFT;
	
      
    } else if (key == GLUT_KEY_RIGHT ) {
 
		if ( snakedirection!= GLUT_KEY_LEFT )
		snakedirection = GLUT_KEY_RIGHT;

		
    } else if (key == GLUT_KEY_UP)  {
       		if ( snakedirection!= GLUT_KEY_DOWN )
		snakedirection = GLUT_KEY_UP;
	
    }
    else if (key == GLUT_KEY_DOWN)    {
		if ( snakedirection!= GLUT_KEY_UP )
			snakedirection = GLUT_KEY_DOWN;
		
      }

	
}
   glutPostRedisplay();
     

}
















/*This function is called (automatically) whenever any printable key (such as x,b, enter, etc.)
 * is pressed from the keyboard
 * This function has three argument variable key contains the ASCII of the key pressed, while x and y tells the
 * program coordinates of mouse pointer when key was pressed.
 * */
void PrintableKeys(unsigned char key, int x, int y) {
    if (key == KEY_ESC/* Escape key ASCII*/) {
        exit(1); // exit the program when escape key is pressed.
    }






    if (key == 'R' || key=='r'/* Escape key ASCII*/) {
       

 snakelength=3;


for ( int i = 0 ; i < 1000 ; ++i )
	pos_x[i] = 0;
for ( int i = 0 ; i < 1000 ; ++i )
	pos_y[i] = 0;

pos_x[0] = 500;
pos_x[1] = 500;
pos_x[2] = 500;
pos_y[0] = 500;
pos_y[1] = 501;
pos_y[2] = 502;


//hurdle deceleration;;;;;;;;;;;;;;;;;;;;;;;;;;;

 xx1=0;
 yy1=0;
 xx2=0;
 yy2=0;
 xx3=0;
 yy3=0;

		 h1=false;
	 h2=false;
		 h3=false;





///global initilization;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;


i=0;
 j=0;
 score=0;

//short direction=RIGHT;


//array storage;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;


 //pos_x[1000] = { 500,  500,  500 };
 //pos_y[600] = { 500,501,  502 };

//booooooooooooooooooooollll variables;;;;;;;;;;;;;;;;;;;;


gameover=false;


//foood variables;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;


		food_timer=0;
		 power_timer=0;


		 xr1=0;
		 yr1=0;
	
		 xr2=0;
		 yr2=0;
	
		 xr3=0;
		 yr3=0;	
		
		 xr4=0;
		 yr4=0;

		 xr5=0;
		 yr5=0;

		powerx=0;
		 powery=0;


		 f1=false;
		 f2=false;
		 f3=false;
		 f4=false;
		 f5=false;
		 power=false;

//closing foood variables;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;



    }
    
    if (key == 'A' || key=='a')
    {  
    	MENU=true;
	}
    
    glutPostRedisplay();
}

/*
 * This function is called after every 1000.0/FPS milliseconds
 * (FPS is defined on in the beginning).
 * You can use this function to animate objects and control the
 * speed of different moving objects by varying the constant FPS.
 *
 * */

void Timer(int m) {








//TYPE FOOOD FUNCTION HERERERE;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
	glutPostRedisplay();

// once again we tell the library to call our Timer function after next 1000/FPS
    glutTimerFunc(1000.0 / FPS, Timer, 0);
}

/*
 * our gateway main function
 * */
int main(int argc, char*argv[]) {
	
      drawgrid();// board function call
    InitRandomizer(); // seed the random number generator...
    glutInit(&argc, argv); // initialize the graphics library...

    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGBA); // we will be using color display mode
    glutInitWindowPosition(50, 50); // set the initial position of our window
    glutInitWindowSize(width, height); // set the size of our window
    glutCreateWindow("PF's Snake Game"); // set the title of our game window
    SetCanvasSize(width, height); // set the number of pixels...

// Register your functions to the library,
// you are telling the library names of function to call for different tasks.
//glutDisplayFunc(display); // tell library which function to call for drawing Canvas.
    glutDisplayFunc(Display); // tell library which function to call for drawing Canvas.
    glutSpecialFunc(NonPrintableKeys); // tell library which function to call for non-printable ASCII characters
    glutKeyboardFunc(PrintableKeys); // tell library which function to call for printable ASCII characters
// This function tells the library to call our Timer function after 1000.0/FPS milliseconds...
    glutTimerFunc(15.0 / FPS, Timer, 0);

// now handle the control to library and it will call our registered functions when
// it deems necessary...
    glutMainLoop();
	//key=GLUT_KEY_LEFT;
	//if (key==GLUT_KEY_LEFT)
     		//glutPostRedisplay();
    return 1;
}
#endif /* Snake Game */

