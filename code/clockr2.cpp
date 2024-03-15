#include<iostream>
#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#include<GL/gl.h>
#include<GL/glu.h>
#include<GL/glut.h>
#include<math.h>
#include<string.h>
#define PI 3.141592
using namespace std;

GLfloat secAngle=0.0;
GLfloat minAngle=0.0;
GLfloat hourAngle=0.0;
GLfloat hour=0.0;
GLfloat x1=0.0;
GLfloat y2=0.0;
GLfloat z1=0.0;
GLfloat radius=5.0;
GLfloat smallradius=1.0;
int angle;
void smalllines(GLfloat,GLfloat,GLfloat,GLfloat,GLfloat,int);
void secondsLine(void);
void minutesLines(void);
void hourLine(void);
void centerpoint(void);
void circle(void);

void myInit(void)
{
glColor3f(1.0,1.0,0.0);
glMatrixMode(GL_PROJECTION);
gluOrtho2D(0.0,640.0,0.0,460.0);
}
void DrawClock()
{
  char buff[100];
  glLoadIdentity();
  //glFrustum(-5.0,5.0,-5.0,5.0,5.0,100.0);
	
	//glMatrixMode(GL_MODELVIEW);
  glClearColor(1.0,1.0,0.0,1.0);
  glOrtho(0.0,20.0,0.0,20.0,-10.0,10.0);
  glClear(GL_COLOR_BUFFER_BIT);
  
  
  
}


void circle()
{
  //glClearColor(0.0,1.0,0.0,0.0);
  glPushMatrix();
  glTranslatef(10.0,10.0,10.0);
  glColor3f(1,1,1);
  glBegin(GL_TRIANGLE_FAN);
  glVertex3f(x1,y2,z1);
  for(angle=0;angle<=360;angle+=1)
  	glVertex3f(x1+cos(angle*PI/100.0f)*radius, y2+ sin(angle*PI/100.0f) * radius, z1);
  	
  	
  glEnd();
  glPopMatrix();
}
void smallLines(GLfloat x1,GLfloat y2,GLfloat z1,GLfloat radius,GLfloat smallradius,int angle)
{
   glPushMatrix();
   glTranslatef(10.0,10.0,0.0);
   glColor3f(0.0,1.0,0.0);
   glLineWidth(2);
   for(angle=0;angle<=360;angle+=30)
   {
     glBegin(GL_LINE);
        if(angle==0.0 || angle==90.0 || angle==180.0 || angle==270.0||angle==360)
        {
          glColor3f(0.0,0.0,0.0);
          glVertex3f(x1+cos(angle*PI/180.0f)*(radius-1.2),y2+sin(angle*PI/180.0f)*(radius-1.2),z1+0.1);
           glVertex3f(x1+cos(angle*PI/180.0f)*radius,y2+sin(angle*PI/180.0f)*radius,z1+0.1);
        }
        else
        {
         glColor3f(0.0,0.0,0.0);
          glVertex3f(x1+cos(angle*PI/180.0f)*(radius-0.5),y2+sin(angle*PI/180.0f)*(radius-0.5),z1);
          glVertex3f(x1+cos(angle*PI/180.0f)*radius,y2+sin(angle*PI/180.0f)*radius,z1);
          
         }
         glEnd();
         }
         glPopMatrix();
   }
 void centerpoint()
 {
 glColor3f(0.0,0.0,0.0);
 glPointSize(5.0);
 glPushMatrix();
 glTranslatef(10.0,10.0,0.0);
 glBegin(GL_POINTS);
 glVertex3f(0.0,0.0,0.0);
 glEnd();
 glPopMatrix();
 }
 void secondLine()
 {
   glColor3f(1.0,1.0,0.0);
   glLineWidth(2.0);
   glPushMatrix();
   glTranslatef(10.0,10.0,0.0);
   glRotatef(-secAngle,0.0,0.0,1.0);
   glBegin(GL_LINES);
   glVertex2f(0,0);
   glVertex2f(0,5);
   glEnd();
   glPopMatrix();
  }
  void minutesLines()
  {
    glColor3f(1.0,0.0,0.0);
   glLineWidth(2.0);
   glPushMatrix();
   glTranslatef(10.0,10.0,0.0);
   glRotatef(-minAngle,0.0,0.0,1.0);
   glBegin(GL_LINES);
   glVertex3f(0.0,0.0,0.0);
   glVertex3f(0.0,4.0,4.0);
   glEnd();
   glPopMatrix();
  }
 void hourLine()
 { 
 glColor3f(0.0,1.0,0.0);
   glLineWidth(3.0);
   glPushMatrix();
   glTranslatef(10.0,10.0,0.0);
   glRotatef(-hourAngle,0.0,0.0,1.0);
   glBegin(GL_LINES);
   glVertex3f(0.0,0.0,0.0);
   glVertex3f(0.0,2.0,0.0);
   glEnd();
   glPopMatrix();
 
 }
void Idle(void)
{
  secAngle+=0.1;
  hourAngle+=0.01;
  minAngle+=0.2;
  circle();
  smallLines(x1,y2,z1,radius,smallradius,angle);
  centerpoint();
  secondLine();
  minutesLines();
  hourLine();
  glutSwapBuffers();
  
  }
  int main(int argc,char ** argv)
  {
    glutInit(&argc,argv);
    glutInitDisplayMode(GLUT_DOUBLE |GLUT_RGBA |GLUT_DEPTH);
    glutInitWindowSize(600,600);
    glutInitWindowPosition(100,100);
   
    glutCreateWindow("CLOCK");
    glutDisplayFunc(DrawClock);
    glutIdleFunc(Idle);
    myInit();
    glutMainLoop();
    return 0;
  }

