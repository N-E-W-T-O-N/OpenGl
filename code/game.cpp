#include<iostream>
#include<GL/glut.h>
#include<math.h>
#define pi 3.142857

using namespace std;

int c =0, d=0, Left=0,Right=0;
int m=0,j=1,flag1=0, l=1, flag2=0,n=0,score=0,count =1;

void  myInit(void)
{
glClearColor (1.0,1.0,1.0,1.0);
glColor3f(1.0f,0.0f,0.0f);
glPointSize(1.0);
glMatrixMode(GL_PROJECTION);
glLoadIdentity();
gluOrtho2D(-620.0,620.0,-340.0,340.0);
}

void keyboard(unsigned char key,int x,int y)
{
Left =-200+200* (d-c);
Right =200+200* (d-c);
if (Left == -600)
{
if (key ==110)
d++;
} 
else if (Right == 600)
{
if(key==98)
c++;
}
else
{
if(key==98)
c++;
if(key==110)
d++;
}
glutPostRedisplay();
}

void myDisplay(void)
{
double x,y,k;
for(k=0;k<=400;k+=5)
{
glClear(GL_COLOR_BUFFER_BIT);
glBegin(GL_LINE_STRIP);
float i =0;
m = m+6;
n = n+4;
while(i<=2*pi)
{
y = 12 + 20 * cos(i);
x = 20*sin(i);
i = i + 0.1;
if(m == 288 && flag1 == 0)
{
j = -1;
 m = -288;
 flag1 = 1;
 score++;
 }
 if(m == 288 && flag1 == 1)
 {
 j = 1;
 m = -288;
 flag1 = 0;
 }
 
 if(n == 580 && flag2 == 0 )
 {
 l = -1;
 n = -580;
 flag2 = 1;
 }
 
 if(n == 580 && flag2 == 1 )
 {
 l = 1;
 n = -580;
 flag2 = 0;
 }

}

glEnd();

glBegin(GL_LINE_LOOP);
	glVertex2i(-600 , -320);
	glVertex2i(-600 , 320);
	glVertex2i(600 , 320);
	glVertex2i(600 , -320);
	glEnd();
	
	
	glBegin(GL_LINE_LOOP);
	Left = -200 + 200 * (d-c);
	Right = 200 + 200 * (d-c);
	glVertex2i(Left , -315);
	glVertex2i(Left , -295);
	glVertex2i(Right , -295);
	glVertex2i(Right , -315);
	glEnd();
	
	
	if((j * m) == 276)
	{
	
	if((Left  > ((-1 * 1 *n) + 20)) || (Right < (-1 *1 * n) - 20))
	{
	cout<<"Game Over !!! \n Your Score is : \t"<<score<<"\n";
	exit(0);
	}
	}
	glutSwapBuffers();
	}
	}
	
	
	int main(int argc, char** argv)
	{
	glutInit(&argc, argv);
	
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGBA);
	
	glutInitWindowSize(1100,600);
	glutInitWindowPosition(0,0);
	glutCreateWindow("Game");
	glutKeyboardFunc(keyboard);
	myInit();
	glutDisplayFunc(myDisplay);
	glutMainLoop();
	
	}
	
	
	
	
	
