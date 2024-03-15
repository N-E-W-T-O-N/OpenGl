#include<iostream>
#include<math.h>
#include<GL/glut.h>
using namespace std;
void myinit(void) {
  	glClearColor(0.0, 1.0, 4.0, 0.0);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(0.0, 200.0, 00.0, 200.0);
	glFlush();
}
void draw(float p0x,float p0y,float p1x,float p1y,float p2x,float p2y,float p3x,float p3y)
{

  for(float i=0.0;i<1.0f;i+=0.0001)
	{
		
		float px=p0x*pow((1-i),3)+3*p1x*i*pow((1-i),2)+3*p2x*i*i*(1-i)+p3x*pow(i,3);
		float py=p0y*pow((1-i),3)+3*p1y*i*pow((1-i),2)+3*p2y*i*i*(1-i)+p3y*pow(i,3);
		
		glVertex2f(px,py);
	}	
}
/*void control(void){
   glColor3f(1.0, 1.0, 0.0);
	 glPointSize(5);
	 glBegin(GL_POINTS);
	   
	    
	 		glVertex2f(30,100);
	 		glColor3f(0.0, 0.0, 0.0);
	 glPointSize(5);
	 		glVertex2f(30,30);
	 		glVertex2f(100,30);
	 		glColor3f(1.0, 1.0, 0.0);
	 glPointSize(5);
	 		glVertex2f(100,100);
	 		
	 		}
void drawline(void){
	 glColor3f(1.0, 0.0, 0.0);
	 glPointSize(5);
	 glBegin(GL_POINTS);
	 int x1=30,y1=100,x2=30,y2=30;
	 for(float t=0;t<=1;t+=0.001){
	 float px=x1*(1-t)+x2*(t);
	 float py=y1*(1-t)+y2*(t);
	 		glVertex2f(px,py);
	 }
	 	 int x3=100,y3=30,x4=100,y4=100;
	 for(float t=0;t<=1;t+=0.001){
	 float px=x3*(1-t)+x4*(t);
	 float py=y3*(1-t)+y4*(t);
	 		glVertex2f(px,py);
	 		
	 }
	
	 for(float t=0;t<=1;t+=0.001){
	 float px=x2*(1-t)+x3*(t);
	 float py=y2*(1-t)+y3*(t);
	 		glVertex2f(px,py);
	}
		} 			
	 		*/
void display()
{
   glClear(GL_COLOR_BUFFER_BIT);
  glColor3f(1.0, 0.0, 2.0);
	glPointSize(5);

	
	glBegin(GL_POINTS);

	float p0x=30;
	float p0y=100;
	float p1x=30;
	float p1y=30;
	float p2x=100;
	float p2y=30;
	float p3x=100;
	float p3y=100;
	
	for(float i=0.0;i<1.0f;i+=0.000001)
	{
		
		float px=p0x*pow((1-i),3)+3*p1x*i*pow((1-i),2)+3*p2x*i*i*(1-i)+p3x*pow(i,3);
		float py=p0y*pow((1-i),3)+3*p1y*i*pow((1-i),2)+3*p2y*i*i*(1-i)+p3y*pow(i,3);
		
		glVertex2f(px,py);
	}	
	draw(30,100,30,30,100,30,100,100);
	draw(30,100,30,135,100,135,100,100);
	//drawline();
	//control();
	
	unsigned char string[]="(30,100)";
	int w;
	w=glutBitmapLength(GLUT_BITMAP_8_BY_13,string);
	glRasterPos2f(30,101);
	glColor3f(1.0,0.0,0.0);
	int len=8;
	for(int i=0;i<len;i++)
	
	
	glEnd();

	glFlush();
}
int main(int argc, char *argv[]) {
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowPosition(50,50);
	glutInitWindowSize(500, 500);
	glutCreateWindow("bcurve");
	myinit();
	glutDisplayFunc(display);
	glutMainLoop();
	return 0;
}
