#include<iostream>
#include<GL/glut.h>
#include<GL/gl.h>
#include<math.h>
#include<stdlib.h>
using namespace std;

void myinit(void) {
  	glClearColor(0.0, 0.0, .0, 0.0);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(0.0, 100.0, 00.0, 100.0);
	glFlush();
}

void drawline(void){
	glClear(GL_COLOR_BUFFER_BIT);
	 glColor3f(1.0, .0, 0.0);
	 glPointSize(5);
	 glBegin(GL_POINTS);
	 int x1=20,y1=60,x2=60,y2=60;
	 for(float t=0;t<=1;t+=0.001){
	 float px=x1*(1-t)+x2*(t);
	 float py=y1*(1-t)+y2*(t);
	 		glVertex2f(px,py);
	 }
	 	 int x3=40,y3=60,x4=30,y4=50;
	 for(float t=0;t<=1;t+=0.001){
	 float px=x3*(1-t)+x4*(t);
	 float py=y3*(1-t)+y4*(t);
	 		glVertex2f(px,py);
	 }
	 	 int x5=30,y5=50,x6=40,y6=40;
	 for(float t=0;t<=1;t+=0.001){
	 float px=x5*(1-t)+x6*(t);
	 float py=y5*(1-t)+y6*(t);
	 		glVertex2f(px,py);
	 }
	 	 int x7=30,y7=50,x8=45,y8=50;
	 for(float t=0;t<=1;t+=0.001){
	 float px=x7*(1-t)+x8*(t);
	 float py=y7*(1-t)+y8*(t);
	 		glVertex2f(px,py);
	 }
	 	 int s1=45,r1=60,s2=45,r2=40;
	 for(float t=0;t<=1;t+=0.001){
	 float px=s1*(1-t)+s2*(t);
	 float py=r1*(1-t)+r2*(t);
	 		glVertex2f(px,py);
	 }
	 	
   	glEnd();

	glFlush();
	}
	int main(int argc, char *argv[]) {
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowPosition(50,50);
	glutInitWindowSize(600, 600);
	glutCreateWindow("NISHANT");
	myinit();
	glutDisplayFunc(drawline);
	glutMainLoop();
	return 0;
}
