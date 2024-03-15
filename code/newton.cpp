#include<iostream>
#include<GL/glut.h>
#include<GL/gl.h>
#include<math.h>
#include<stdlib.h>
using namespace std;

void myinit(void) {
	glLoadIdentity();
  	glClearColor(1.0, 1.0, 0.0, 0.0);
	glMatrixMode(GL_PROJECTION);
	
	gluOrtho2D(0.0, 100.0, 00.0, 100.0);
	glFlush();
}

void drawline(){
	//glTranslatef(0,0,-7) ;
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(0, 0, 1.0);
	glPointSize(5);
	glBegin(GL_POINTS);
	int x1=10,y1=80,x2=90,y2=80;
	for(float t=0;t<=1;t+=0.001){
	float px=x1*(1-t)+x2*(t);
	float py=y1*(1-t)+y2*(t);
	 		glVertex2f(px,py);// -------
	}

	int a1=20,a2= 80 , b1=42,b2=70 , c1=30,c2=55 , d1=27,d2=50 ;
	for(float t=0;t<=1;t+=0.001)
	{
		float px = a1*pow((1-t),3) + 3*b1*t*(1-t)*(1-t) + 3*c1*t*t*(1-t) + d1*t*t*t ;  
		float py = a2*pow((1-t),3) + 3*b2*t*(1-t)*(1-t) + 3*c2*t*t*(1-t) + d2*t*t*t ;
		glVertex2f(px,py) ;
	}



    x1=5,y1=50,x2=27,y2=50;
	for(float t=0;t<=1;t+=0.001){
	float px=x1*(1-t)+x2*(t);
	float py=y1*(1-t)+y2*(t);
	 		glVertex2f(px,py); 		
	}

	a1=5,a2= 50 , b1=9,b2=47 , c1=13,c2=47 , d1=15,d2=50 ;
	for(float t=0;t<=1;t+=0.001)
	{
		float px = a1*pow((1-t),3) + 3*b1*t*(1-t)*(1-t) + 3*c1*t*t*(1-t) + d1*t*t*t ;  
		float py = a2*pow((1-t),3) + 3*b2*t*(1-t)*(1-t) + 3*c2*t*t*(1-t) + d2*t*t*t ;
		glVertex2f(px,py) ;
	} 

	a1=27,a2= 50 , b1=30,b2=30 , c1=35,c2=47 , d1=40,d2=40 ;
	for(float t=0;t<=1;t+=0.001)
	{
		float px = a1*pow((1-t),3) + 3*b1*t*(1-t)*(1-t) + 3*c1*t*t*(1-t) + d1*t*t*t ;  
		float py = a2*pow((1-t),3) + 3*b2*t*(1-t)*(1-t) + 3*c2*t*t*(1-t) + d2*t*t*t ;
		glVertex2f(px,py) ;
	}

	x1=40,y1=80,x2=40,y2=17;
	for(float t=0;t<=1;t+=0.001){
	float px=x1*(1-t)+x2*(t);
	float py=y1*(1-t)+y2*(t);
	 		glVertex2f(px,py);	
	}
	 
    x1=40,y1=17,x2=47,y2=10;
	for(float t=0;t<=1;t+=0.001){
	float px=x1*(1-t)+x2*(t);
	float py=y1*(1-t)+y2*(t);
 		glVertex2f(px,py);	
	}

	x1 = 40,y1=15 ;
	for(int k=0,r=2;k<100;k++)
	{
        double x,y;
        x=x1+r*sin(k);
    	y=y1+r*cos(k); 
		glVertex2f(x,y);
	
  	} 

	x1=58,y1=80,x2=58,y2=70;
	for(float t=0;t<=1;t+=0.001){
	float px=x1*(1-t)+x2*(t);
	float py=y1*(1-t)+y2*(t);
	 		glVertex2f(px,py);
	 		
	}
	a1=58,a2= 70 , b1=42,b2=50 , c1=50,c2=38 , d1=70,d2=30 ;
	for(float t=0;t<=1;t+=0.001)
	{
		float px = a1*pow((1-t),3) + 3*b1*t*(1-t)*(1-t) + 3*c1*t*t*(1-t) + d1*t*t*t ;  
		float py = a2*pow((1-t),3) + 3*b2*t*(1-t)*(1-t) + 3*c2*t*t*(1-t) + d2*t*t*t ;
		glVertex2f(px,py) ;
	}


	a1=61,a2= 52 , b1=65,b2=56 , c1=70,c2=58, d1=80,d2=60 ;
	for(float t=0;t<=1;t+=0.001)
	{
		float px = a1*pow((1-t),3) + 3*b1*t*(1-t)*(1-t) + 3*c1*t*t*(1-t) + d1*t*t*t ;  
		float py = a2*pow((1-t),3) + 3*b2*t*(1-t)*(1-t) + 3*c2*t*t*(1-t) + d2*t*t*t ;
		glVertex2f(px,py) ;
	}

	x1=80,y1=80,x2=80,y2=17;
	for(float t=0;t<=1;t+=0.001){
	float px=x1*(1-t)+x2*(t);
	float py=y1*(1-t)+y2*(t);
	 		glVertex2f(px,py);
	 		
	}
	x1 = 63,y1=50 ;
	for(int k=300,r=2;k<800;k++)
	{
        double x,y;
         x=x1+r*sin(k);
         y=y1+r*cos(k); 
		glVertex2f(x,y);
	
  	}
     
	 
   	glEnd();

	glFlush();
}
	int main(int argc, char *argv[]) {
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowPosition(120,80);
	glutInitWindowSize(700, 500);
	glutCreateWindow("NEWTON");
	myinit();
	glutDisplayFunc(drawline);
	glutMainLoop();
	return 0;
}
