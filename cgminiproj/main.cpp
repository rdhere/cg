/*
left click stop
right click start
F1 Hide/unhide right 
F2 Hide/unhide left
to move by arrows first stop by left click and then press up arrow
END to exit 
up to move up
down to move down
*/

#include<GL/glut.h>
#include<conio.h>
#include<stdlib.h>
#include<stdio.h>
#include<windows.h> //for sleep
#include<stdbool.h> // for boolean varialbe 

float j=0,i=0;
int flag=0;
bool visible_right= 1;
bool visible_left= 1;
void display()
{
glClear(GL_COLOR_BUFFER_BIT);


if (visible_left == 1)
{

//////////////plane 1 start color///////////////////////////////////////////////////////////////////////////////////////////

//////////////////NOSE////////////////////
glColor3f(1,0,0);
glBegin(GL_POLYGON);

glVertex2i(112,420-450+j); 
glVertex2i(128,450-450+j);

glVertex2i(144,420-450+j);
glVertex2i(128,450-450+j);

glVertex2i(112,420-450+j);
glVertex2i(128,450-450+j);

glEnd();
//////////////////NOSE////////////////////

//////////////////////////WINGS/////////////////////
glColor3f(0,1,0);
glBegin(GL_POLYGON);

glVertex2i(100,286-450+j);
glVertex2i(20,300-450+j);

glVertex2i(20,300-450+j);
glVertex2i(20,330-450+j);

glVertex2i(20,330-450+j);
glVertex2i(100,340-450+j);

glVertex2i(100,286-450+j);
glVertex2i(100,340-450+j);

glEnd();

/////////////////////////
glColor3f(0,1,0);
glBegin(GL_POLYGON);

glVertex2i(156,286-450+j);
glVertex2i(236,300-450+j);

glVertex2i(236,300-450+j);
glVertex2i(236,330-450+j);


glVertex2i(236,330-450+j);
glVertex2i(156,340-450+j);

glVertex2i(156,286-450+j);
glVertex2i(156,340-450+j);

glEnd();

////////////////////////WINGS//////////////////////

////////////////////////////TAIL///////////////////////
glColor3f(0,1,0);
glBegin(GL_POLYGON);

glVertex2i(86,152-450+j);
glVertex2i(170,152-450+j);
glVertex2i(170,176-450+j);
glVertex2i(86,176-450+j);

glEnd();
//////////////////////////tail/////////////////////////

/////////////////////main body////////////////////
glColor3f(0,0,1);
glBegin(GL_POLYGON);

glVertex2i(126,176-450+j);//left khalchi tirki line
glVertex2i(100,276-450+j);

glVertex2i(100,276-450+j);//left. madhli ubhi line
glVertex2i(100,370-450+j);

glVertex2i(100,370-450+j);//left. varchi tirki line 
glVertex2i(110,420-450+j);

glVertex2i(130,176-450+j);//right. khalchi tirki
glVertex2i(156,276-450+j);

glVertex2i(156,276-450+j);//right. madhli ubhi line
glVertex2i(156,370-450+j);


glVertex2i(156,370-450+j);//right. varchi tirki line
glVertex2i(146,420-450+j);

glVertex2i(110,420-450+j); //varchi horizontal line
glVertex2i(146,420-450+j);

glEnd();

}
////////////////main body//////////////////////
///////////////plane 1 color end///////////////////////////////////////////////////////////////////////////////////////////////

if( visible_right == 1)
{

///////////////plane 2 start//////////////////
//////////////////////////tail/////////////////////////////////////////////////////////////////////////////////////////////////
glColor3f(0,0,1);
glBegin(GL_LINES);

glVertex2i(386,152-450+i);
glVertex2i(426,152-450+i);

glVertex2i(386,152-450+i);
glVertex2i(386,176-450+i);

glVertex2i(430,152-450+i);
glVertex2i(470,152-450+i);

glVertex2i(470,152-450+i);
glVertex2i(470,176-450+i);

glVertex2i(386,176-450+i);
glVertex2i(426,176-450+i);

glVertex2i(430,176-450+i);
glVertex2i(470,176-450+i);

///////////////////
glVertex2i(426,152-450+i);
glVertex2i(426,140-450+i);

glVertex2i(430,152-450+i);
glVertex2i(430,140-450+i);
///////////////////
glVertex2i(426,140-450+i);
glVertex2i(430,140-450+i);

//////////////////////////tail/////////////////////////

/////////////////////backside body////////////////////

glVertex2i(426,176-450+i);
glVertex2i(400,276-450+i);

glVertex2i(430,176-450+i);

glVertex2i(456,276-450+i);
/////////////////////backside body////////////////////

//////////////////////////WINGS/////////////////////

glVertex2i(400,286-450+i);
glVertex2i(320,300-450+i);

glVertex2i(456,286-450+i);
glVertex2i(536,300-450+i);

/////////////////////////

glVertex2i(320,300-450+i);
glVertex2i(320,330-450+i);

glVertex2i(536,300-450+i);
glVertex2i(536,330-450+i);

////////////////////////

glVertex2i(320,330-450+i);
glVertex2i(400,340-450+i);

glVertex2i(536,330-450+i);
glVertex2i(456,340-450+i);

////////////////////////WINGS//////////////////////

/////////////////body between wings///////////////

glVertex2i(400,320-450+i);
glVertex2i(400,276-450+i);

glVertex2i(456,320-450+i);
glVertex2i(456,276-450+i);

///////////////body between wings//////////////

////////////////upper body/////////////////////

glVertex2i(400,320-450+i);
glVertex2i(400,370-450+i);

glVertex2i(456,320-450+i);
glVertex2i(456,370-450+i);

//////////////////////////

glVertex2i(400,370-450+i);
glVertex2i(410,420-450+i);

glVertex2i(456,370-450+i);
glVertex2i(446,420-450+i);

//////////////////////////

glVertex2i(410,420-450+i);
glVertex2i(446,420-450+i);

//////////////////////////
//////////////////NOSE////////////////////

glVertex2i(412,420-450+i); 
glVertex2i(428,450-450+i);

glVertex2i(444,420-450+i);
glVertex2i(428,450-450+i);

//////////////////NOSE////////////////////
////////////////upper body//////////////////////

///////////////plane 2 end////////////////////
glEnd();
}


glutSwapBuffers();

}


// to move using key 
void SpecialKey(int key,int x,int y )
 {
 	switch(key)
 	{
 		case  GLUT_KEY_UP:
			printf("Key is Uparrow %d \n",key);	 		
 			j=j+2;
	        i=i+1;
 			glutPostRedisplay();
 		break;

        case GLUT_KEY_F1:
        	printf("Key is F1  %d \n",key);	
        	visible_right = !visible_right;
        	i=300;
        	glutPostRedisplay();
		break; 
		
		
		case GLUT_KEY_F2:
			printf("Key is F2  %d \n",key);	
        visible_left = !visible_left;
        j=300;
        glutPostRedisplay();
		break; 
		
		case GLUT_KEY_END:
		exit(1);
		break; 
		
	 }
 }



void animation()
{
	
	if( (flag == 0 ) )
  {
	
	j=j+2;
	i=i+1;
	Sleep(15);
	glutPostRedisplay();
    if(j>950)
    {
    	j=0;
	}
	
	if(i>950)
    {
    	i=0;
	}
  }
}




void mouse1 (int button,int state,int x, int y)
{
	if( button == GLUT_LEFT_BUTTON )
	 {
	 printf("Mouse Key is  %d \n",button);
	 flag= 1;
     }
	  
    else if ( button == GLUT_RIGHT_BUTTON )
    {
	
	 printf("Mouse Key is  %d \n",button); 
	 flag = 0;
    }
}


int main(int argc, char** argv)
{
 printf("*****Press any key to start****");
 getch();
 printf("\a");
 glutInit(&argc, argv);
 glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGBA);
 glutInitWindowSize(1800,800);
 glutCreateWindow("OpenGL-? Copyright 2018. All Rights Reserved  ");
 gluOrtho2D(0,640,0,640);
 glutDisplayFunc(display);
 glClearColor(1,1,1,0); //to set background color 
 glutSpecialFunc(SpecialKey); // use key to move 
 glutMouseFunc(mouse1);
 glutIdleFunc(animation);
 glutMainLoop();
 return 0;
}

