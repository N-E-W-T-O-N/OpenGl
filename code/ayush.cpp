#include<stdio.h> 
#include<GL/glut.h> 
#include<math.h>
#include<bits/stdc++.h>
using namespace std;

void pda(float x0,float x1,float x2,float y0,float y1,float y2)
{
	for(float t=0.0;t<=1.0;t += 0.001)
	{
		float xt = (1-t)*(1-t)*x0 + 2*(1-t)*t*x1 + t*t*x2;
		float yt = (1-t)*(1-t)*y0 + 2*(1-t)*t*y1 + t*t*y2;
		glVertex2f(xt,yt);
	}
}

void myInit (void) 
{ 
	glClear(GL_COLOR_BUFFER_BIT);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(0.0,100.0,0.0,100.0);
	glFlush();
} 

void display(void) 
{
	glClearColor(1.0,0.0,0.0,1.0);
	glColor3f(0.0,1.0,0.0);
	glPointSize(2.0); 
	glBegin(GL_POINTS);
	pda(10,20,10,20,30,40);
	pda(10,20,10,40,50,60);
	pda(10,15,20,40,40,40);
	pda(20,20,20,20,40,60);
	pda(25,25,25,20,40,60);
	pda(30,32.5,35,55,65,55);
	pda(35,40,45,55,28,55);
	pda(45,45,45,20,40,60);
	pda(43.5,45,46.5,17,23,17);
	pda(43.5,45,46.5,17,11,17);
	pda(45,40,35,14,8,14);
	pda(50,50,50,40,50,60);
	pda(60,60,60,20,40,60);
	pda(50,55,60,40,40,40);
	pda(50,55,60,60,50,40);
	pda(5,35,65,60,60,60);
	glEnd();
	glFlush();
} 

int main (int argc, char** argv) 
{ 
	glutInit(&argc, argv); 
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB); 
	glutInitWindowSize(960, 540); 
	glutInitWindowPosition(70, 70); 
	
	glutCreateWindow("Aayush's name! :D"); 
	myInit(); 
	
	glutDisplayFunc(display); 
	glutMainLoop();
	return 0;
} 

