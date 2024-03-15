#include<iostream>
#include<GL/glut.h>
#include<GL/gl.h>
#include<math.h>
#include<stdlib.h>
using namespace std;

void myinit(void) {
	glLoadIdentity();
  	glClearColor(0.0, 0.0, .0, 0.0);
	glMatrixMode(GL_PROJECTION);
	
	gluOrtho2D(0.0, 100.0, 00.0, 100.0);
	glFlush();
}

void drawline(void){
	glClear(GL_COLOR_BUFFER_BIT);
	 glColor3f(1.0, 1.0, 1.0);
	 glPointSize(5);
	 glBegin(GL_POINTS);
	 int x1=10,y1=40,x2=30,y2=40;
	 for(float t=0;t<=1;t+=0.001){
	 float px=x1*(1-t)+x2*(t);
	 float py=y1*(1-t)+y2*(t);
	 		glVertex2f(px,py);
	 		
	 }
	 	 int x3=10,y3=40,x4=18,y4=32;
	 for(float t=0;t<=1;t+=0.001){
	 float px=x3*(1-t)+x4*(t);
	 float py=y3*(1-t)+y4*(t);
	 		glVertex2f(px,py);
	 }
	 	 int x5=18,y5=32,x6=18,y6=76;
	 for(float t=0;t<=1;t+=0.001){
	 float px=x5*(1-t)+x6*(t);
	 float py=y5*(1-t)+y6*(t);
	 		glVertex2f(px,py);
	 }
	 	 int x7=10,y7=76,x8=18,y8=68;
	 for(float t=0;t<=1;t+=0.001){
	 float px=x7*(1-t)+x8*(t);
	 float py=y7*(1-t)+y8*(t);
	 		glVertex2f(px,py);
	 }
	 	 	 	 int x9=10,y9=76,x10=18,y10=76;
	 for(float t=0;t<=1;t+=0.001){
	 float px=x9*(1-t)+x10*(t);
	 float py=y9*(1-t)+y10*(t);
	 		glVertex2f(px,py);
	 }
	 	 	 	 int x11=30,y11=76,x12=30,y12=10;
	 for(float t=0;t<=1;t+=0.001){
	 float px=x11*(1-t)+x12*(t);
	 float py=y11*(1-t)+y12*(t);
	 		glVertex2f(px,py);
	 }
	 	 	 	 	 int x13=27,y13=76,x14=30,y14=76;
	 for(float t=0;t<=1;t+=0.001){
	 float px=x13*(1-t)+x14*(t);
	 float py=y14*(1-t)+y14*(t);
	 		glVertex2f(px,py);
	 }	 
	 		 	 	 	 int x15=30,y15=76,x16=40,y16=76;
	 for(float t=0;t<=1;t+=0.001){
	 float px=x15*(1-t)+x16*(t);
	 float py=y15*(1-t)+y16*(t);
	 		glVertex2f(px,py);
	 }	 
	 	
	 		 	 int x17=40,y17=76,x18=40,y18=10;
	 for(float t=0;t<=1;t+=0.001){
	 float px=x17*(1-t)+x18*(t);
	 float py=y17*(1-t)+y18*(t);
	 		glVertex2f(px,py);
	 }
	 		 	 int x19=40,y19=76,x20=55,y20=76;
	 for(float t=0;t<=1;t+=0.001){
	 float px=x19*(1-t)+x20*(t);
	 float py=y19*(1-t)+y20*(t);
	 		glVertex2f(px,py);
	 }
	 		 	 int x21=55,y21=76,x22=55,y22=30;
	 for(float t=0;t<=1;t+=0.001){
	 float px=x21*(1-t)+x22*(t);
	 float py=y21*(1-t)+y22*(t);
	 		glVertex2f(px,py);
	 }
	 
	 	 	 int x23=55,y23=30,x24=47,y24=40;
	 for(float t=0;t<=1;t+=0.001){
	 float px=x23*(1-t)+x24*(t);
	 float py=y23*(1-t)+y24*(t);
	 		glVertex2f(px,py);
	 }
	 
	 	 	 int x25=47,y25=40,x26=55,y26=40;
	 for(float t=0;t<=1;t+=0.001){
	 float px=x25*(1-t)+x26*(t);
	 float py=y25*(1-t)+y26*(t);
	 		glVertex2f(px,py);
	 }
	  	 int x27=55,y27=76,x28=70,y28=76;
	 for(float t=0;t<=1;t+=0.001){
	 float px=x27*(1-t)+x28*(t);
	 float py=y27*(1-t)+y28*(t);
	 		glVertex2f(px,py);
	 }
	  int x29=70,y29=10,x30=70,y30=76;
	 for(float t=0;t<=1;t+=0.001){
	 float px=x29*(1-t)+x30*(t);
	 float py=y29*(1-t)+y30*(t);
	 		glVertex2f(px,py);
	 }
	  int x090=70 ,x190=55, x290 = 60, x390 = 75, y090 = 76, y190=76, y290 = 90, y390=85;
	 for(float t=0;t<=1;t+=0.001){
	 	float px= x090*(1-t)*(1-t)*(1-t) + 3*x190*t*(1-t)*(1-t)+ 3*x290*t*t*(1-t) + x390*t*t*t;
	 	float py= y090*(1-t)*(1-t)*(1-t) + 3*y190*t*(1-t)*(1-t)+ 3*y290*t*t*(1-t) + y390*t*t*t;
	 	glVertex2f(px,py);
	 }
	   int x31=70,y31=76,x32=94,y32=76;
	 for(float t=0;t<=1;t+=0.001){
	 float px=x31*(1-t)+x32*(t);
	 float py=y31*(1-t)+y32*(t);
	 		glVertex2f(px,py);
	 }
	   int x33=94,y33=76,x34=94,y34=10;
	 for(float t=0;t<=1;t+=0.001){
	 float px=x33*(1-t)+x34*(t);
	 float py=y33*(1-t)+y34*(t);
	 		glVertex2f(px,py);
	 }
	   int x35=94,y35=76,x36=98,y36=76;
	 for(float t=0;t<=1;t+=0.001){
	 float px=x35*(1-t)+x36*(t);
	 float py=y35*(1-t)+y36*(t);
	 		glVertex2f(px,py);
	 }
	 int x0900=94 ,x1900=70, x2900 = 70, x3900 = 94, y0900 = 32, y1900=25, y2900 = 61, y3900=54;
	 for(float t=0;t<=1;t+=0.001){
	 	float px= x0900*(1-t)*(1-t)*(1-t) + 3*x1900*t*(1-t)*(1-t)+ 3*x2900*t*t*(1-t) + x3900*t*t*t;
	 	float py= y0900*(1-t)*(1-t)*(1-t) + 3*y1900*t*(1-t)*(1-t)+ 3*y2900*t*t*(1-t) + y3900*t*t*t;
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
	glutCreateWindow("NITISH");
	myinit();
	glutDisplayFunc(drawline);
	glutMainLoop();
	return 0;
}
