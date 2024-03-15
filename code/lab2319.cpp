#include<stdio.h>
#include<GL/glut.h>
#include<math.h>
#include<iostream>
 using namespace std;

void init(void)
   {
    glClearColor(0.0,0.0,0.0,0.5);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(0.0,1200.0,0.0,1200.0);
    glFlush();
   }

	void display(void)
   {
    glClear(GL_COLOR_BUFFER_BIT);
	//glClearColor(0.0,1.0,0.0,0.0);
    glColor3f(1.0,0.0,0.0);
	glPointSize(3.0);
	
	glBegin(GL_LINES);
glVertex2f(450,786);
glVertex2f(490,860);
glEnd();
	
	glBegin(GL_LINES);
glVertex2f(350,786);
glVertex2f(310,860);
glEnd();
	
	glBegin(GL_LINES);
glVertex2f(460,776);
glVertex2f(500,870);
glEnd();
	//glClearColor(0.0,1.0,0.0,0.0);
	//glClearColor(0.0,1.0,0.0,0.0);
    glBegin(GL_POINTS);
    
   int x1=400,y1=700,r=100;
	for(int k=300;k<800;k++)
	{
        double x,y;
         x=x1+r*sin(k);
         y=y1+r*cos(k); 
		glVertex2f(x,y);
    }
       x1=440,y1=750,r=40;
	for(int k=300;k<800;k++)
	{
        double x,y;
         x=x1+r*sin(k);
         y=y1+r*cos(k); 
		glVertex2f(x,y);
    }
        x1=365,y1=750,r=40;
	for(int k=300;k<800;k++)
	{
        double x,y;
         x=x1+r*sin(k);
         y=y1+r*cos(k); 
		glVertex2f(x,y);
    }
    
    x1=365,y1=750,r=10;
	for(int k=300;k<800;k++)
	{
        double x,y;
         x=x1+r*sin(k);
         y=y1+r*cos(k); 
		glVertex2f(x,y);
    }
       
       x1=440,y1=750,r=10;
	for(int k=300;k<800;k++)
	{
        double x,y;
         x=x1+r*sin(k);
         y=y1+r*cos(k); 
		glVertex2f(x,y);
    }
    x1=400,y1=700,r=70;
	for(float k=2.154;k<4.154;k+=0.0001)
	{
        double x,y;
         x=x1+r*sin(k);
         y=y1+r*cos(k); 
		glVertex2f(x,y);
    }
    
       x1=340,y1=665,r=30;
	for(int k=0;k<8;k+=0.001)
	{
        double x,y;
         x=x1+r*sin(k);
         y=y1+r*cos(k); 
		glVertex2f(x,y);
    }
    
      glEnd();




	     glFlush();
 }
   
  int main(int argc,char* argv[]) {
  
  glutInit(&argc,argv);
  glutInitDisplayMode(GLUT_SINGLE |GLUT_RGB);
  glutInitWindowPosition(50,50);
  glutInitWindowSize(600,600);
  glutCreateWindow("lab2319");
  glutDisplayFunc(display);
    init();
  glutMainLoop();
	return 0;
}
