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
    gluOrtho2D(0.0,200.0,0.0,200.0);
    glFlush();
   }

	void display(void)
   {
    glClear(GL_COLOR_BUFFER_BIT);
	//glClearColor(0.0,1.0,0.0,0.0);
    glColor3f(1.0,0.0,0.0);
	glPointSize(10.0);
	//glClearColor(0.0,1.0,0.0,0.0);
	//glClearColor(0.0,1.0,0.0,0.0);
    glBegin(GL_POINTS);
   int x1=80,y1=80,r=50;
    //cout<<"Enter the x,y and radius in respective order."<<endl;
    //cin>>x1>>y1>>r;
   
	for(int k=300;k<800;k++)
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
  glutCreateWindow("Nishant´s circle");
  glutDisplayFunc(display);
    init();
  glutMainLoop();
	return 0;
}
