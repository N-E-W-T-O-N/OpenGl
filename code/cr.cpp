#include<stdio.h>
#include<math.h>
#include<GL/glut.h>
#include<iostream>
//#include<bits/stdc+.h>

using namespace std;

void myinit(void) {
    glClearColor(1.0, 0.0, 0.0, 0.0);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(0.0, 200.0, 0.0, 200.0);
	glFlush();
}

void display(void) {
	glClear(GL_COLOR_BUFFER_BIT);
  //  glClearColor(0.0, 1.0, 0.0, 0.0);
	glColor3f(0.0f, 1.0f, 0.0f);
	glPointSize(20);
	//glColor()
	glBegin(GL_POINTS);

int k=0, l=0;
	for(int i=5; i<1500; i++)
	{
	glPointSize(5);
		glVertex2f((k+i),(l+i));
}

int k1=1200, l1=1200;
	for(int i=5; i<1500; i++)
	{
	glPointSize(5);
		glVertex2f((k1-i),(l1-i));
}


int x=80,y=80,r=50;

for(int i=300;i<800;i++)
{
double x1,y1;
x1=x+r*sin(i);
y1=y+r*cos(i);
glVertex2f(x1,y1);
}
int x2=80,y2=80,r2=20;
for(int i=300;i<800;i++)
{
double x3,y3;
x3=x2+r2*sin(i);
y3=y2+r2*cos(i);
glVertex2f(x3,y3);
}
  
	

int x4=80,y4=80,r4=10;
for(int i=300;i<800;i++)
{
double x5,y5;
x5=x4+r4*sin(i);
y5=y4+r4*cos(i);
glVertex2f(x5,y5);
}



int x6=70,y6=10,r6=20;
for(int i=300;i<800;i++)
{
double x7,y7;
x7=5*x6+r6*sin(i);
y7=y6+r6*cos(i)+8;
glVertex2f(x7,y7);
}


    glEnd();
	glFlush();

}

int main(int argc, char *argv[]) {
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowPosition(50, 50);
	glutInitWindowSize(600, 600);
	glutCreateWindow("DDA");
	glutDisplayFunc(display);
	myinit();
	glutMainLoop();
	return 0;
}
