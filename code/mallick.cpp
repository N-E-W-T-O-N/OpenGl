#include<iostream>
#include<GL/glut.h>
#include<GL/gl.h>
#include<math.h>
#include<stdlib.h>
using namespace std;

void myinit(void) {
	glLoadIdentity();
  	glClearColor(1.0, 0, 1.0, 0.0);
	glMatrixMode(GL_PROJECTION);
	
	gluOrtho2D(0.0, 100.0, 00.0, 100.0);
	glFlush();
}

void drawline(){
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(0, 1, 1.0);
	glPointSize(5);
	glBegin(GL_POINTS);

	int x1=5,y1=80,x2=95,y2=80;
	for(float t=0;t<=1;t+=0.001){
	float px=x1*(1-t)+x2*(t);
	float py=y1*(1-t)+y2*(t);
	 		glVertex2f(px,py);// -------
	}

    x1=10,y1=80,x2=10,y2=45;
	for(float t=0;t<=1;t+=0.001){
	float px=x1*(1-t)+x2*(t);
	float py=y1*(1-t)+y2*(t);
	 		glVertex2f(px,py); 		
	}

    x1=5,y1=50,x2=20,y2=50;
	for(float t=0;t<=1;t+=0.001){
	float px=x1*(1-t)+x2*(t);
	float py=y1*(1-t)+y2*(t);
	 		glVertex2f(px,py); 		
	}

    x1=5,y1=50,x2=10,y2=45;
	for(float t=0;t<=1;t+=0.001){
	float px=x1*(1-t)+x2*(t);
	float py=y1*(1-t)+y2*(t);
	 		glVertex2f(px,py); 		
	}

    

    x1=20,y1=80,x2=20,y2=40;
	for(float t=0;t<=1;t+=0.001){
	float px=x1*(1-t)+x2*(t);
	float py=y1*(1-t)+y2*(t);
	glVertex2f(px,py);
    }

    x1=30,y1=80,x2=30,y2=40;
	for(float t=0;t<=1;t+=0.001){
	float px=x1*(1-t)+x2*(t);
	float py=y1*(1-t)+y2*(t);
	glVertex2f(px,py);
    }
   
    int a1=30,a2= 80 , b1=27,b2=90 , c1=50,c2=85, d1=60,d2=80 ;
	for(float t=0;t<=1;t+=0.001)
	{
		float px = a1*pow((1-t),3) + 3*b1*t*(1-t)*(1-t) + 3*c1*t*t*(1-t) + d1*t*t*t ;  
		float py = a2*pow((1-t),3) + 3*b2*t*(1-t)*(1-t) + 3*c2*t*t*(1-t) + d2*t*t*t ;
		glVertex2f(px,py) ;
	}

    x1=60,y1=80,x2=60,y2=40;
	for(float t=0;t<=1;t+=0.001){
	float px=x1*(1-t)+x2*(t);
	float py=y1*(1-t)+y2*(t);
	glVertex2f(px,py);
    }

    x1=60,y1=65,x2=55,y2=60;
	for(float t=0;t<=1;t+=0.001){
	float px=x1*(1-t)+x2*(t);
	float py=y1*(1-t)+y2*(t);
	glVertex2f(px,py);
    }

    x1=42,y1=65,x2=50,y2=66;
	for(float t=0;t<=1;t+=0.001){
	float px=x1*(1-t)+x2*(t);
	float py=y1*(1-t)+y2*(t);
	glVertex2f(px,py);
    }

    a1=42,a2= 65 , b1=40,b2=80 , c1=25,c2=35 , d1=40,d2=40 ;
	for(float t=0;t<=1;t+=0.001)
	{
		float px = a1*pow((1-t),3) + 3*b1*t*(1-t)*(1-t) + 3*c1*t*t*(1-t) + d1*t*t*t ;  
		float py = a2*pow((1-t),3) + 3*b2*t*(1-t)*(1-t) + 3*c2*t*t*(1-t) + d2*t*t*t ;
		glVertex2f(px,py) ;
	}

    a1=55,a2= 60 , b1=40,b2=80 , c1=40,c2=35 , d1=55,d2=40 ;
	for(float t=0;t<=1;t+=0.001)
	{
		float px = a1*pow((1-t),3) + 3*b1*t*(1-t)*(1-t) + 3*c1*t*t*(1-t) + d1*t*t*t ;  
		float py = a2*pow((1-t),3) + 3*b2*t*(1-t)*(1-t) + 3*c2*t*t*(1-t) + d2*t*t*t ;
		glVertex2f(px,py) ;
	}

    x1=79,y1=80,x2=79,y2=40;
	for(float t=0;t<=1;t+=0.001){
	float px=x1*(1-t)+x2*(t);
	float py=y1*(1-t)+y2*(t);
	glVertex2f(px,py);
    }

    a1=79,a2= 70 , b1=75,b2=75 , c1=45,c2=65 , d1=79,d2=50 ;
	for(float t=0;t<=1;t+=0.001)
	{
		float px = a1*pow((1-t),3) + 3*b1*t*(1-t)*(1-t) + 3*c1*t*t*(1-t) + d1*t*t*t ;  
		float py = a2*pow((1-t),3) + 3*b2*t*(1-t)*(1-t) + 3*c2*t*t*(1-t) + d2*t*t*t ;
		glVertex2f(px,py) ;
	}

    a1=79,a2= 50 , b1=82,b2=60 , c1=83,c2=80 , d1=90,d2=40 ;
	for(float t=0;t<=1;t+=0.001)
	{
		float px = a1*pow((1-t),3) + 3*b1*t*(1-t)*(1-t) + 3*c1*t*t*(1-t) + d1*t*t*t ;  
		float py = a2*pow((1-t),3) + 3*b2*t*(1-t)*(1-t) + 3*c2*t*t*(1-t) + d2*t*t*t ;
		glVertex2f(px,py) ;
	}
    /*
	int a1=20,a2= 80 , b1=42,b2=70 , c1=30,c2=55 , d1=27,d2=50 ;
	for(float t=0;t<=1;t+=0.001)
	{
		float px = a1*pow((1-t),3) + 3*b1*t*(1-t)*(1-t) + 3*c1*t*t*(1-t) + d1*t*t*t ;  
		float py = a2*pow((1-t),3) + 3*b2*t*(1-t)*(1-t) + 3*c2*t*t*(1-t) + d2*t*t*t ;
		glVertex2f(px,py) ;
	}
    */ 
   	glEnd();
	glFlush();
}
	int main(int argc, char *argv[]) {
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowPosition(120,80);
	glutInitWindowSize(700, 500);
	glutCreateWindow("MALLICK");
	myinit();
	glutDisplayFunc(drawline);
	glutMainLoop();
	return 0;
}
