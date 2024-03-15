#include<stdio.h>
#include<time.h>
#include<math.h>
#include<string.h>
#include<iostream>
#include<GL/glut.h>
#include<GL/gl.h>
#include<GL/glu.h>

struct Point{
GLint x;
GLint y;
};


void draw_dda(Point p1, Point p2)
{

GLfloat dx=p2.x-p1.x;
GLfloat dy=p2.y-p1.y;
GLfloat x1=p1.x;
GLfloat y1=p1.y;
GLfloat step=0;

if(abs(dx)>abs(dy))
{

step = abs(dx);
}
else
step= abs(dy);

GLfloat xinc=dx/step;
GLfloat yinc=dy/step;

for(float i=1;i<=step;i++)
{
glVertex2f(x1,y1);
x1+=xinc;
y1+=yinc;

}

}


void init()
{
glClearColor(0.0f,0.0f,0.0f,1.0f);
//glColor3f(0.0f,0.0f,0.0f);
//glPointSize(1.0f);
//gluOrtho2D(0.0f,640.0f,0.0f,480.0f);
}

Point p1={200,450};
Point p2={700,450};
GLint rad=150;

Point pc1={200,200};
GLint rad1=160;

GLint hrad=120;
GLint mrad=130;
GLint srad=140;

double hdeg=0;
double mdeg=0;
double sdeg=0;

void display(void)
{
 //glClearColor(0.0f,0.0f,0.0f,1.0f);

 glClear(GL_COLOR_BUFFER_BIT);
glBegin(GL_TRIANGLES);
 glColor3f(0.0f,1.0f,0.0f);
   glVertex2f(-1.0f,0.5f);
   glVertex2f(-0.3f,0.5f);
   glVertex2f(-0.65f,0.9f);
   
 glEnd();

glBegin(GL_TRIANGLES);
 glColor3f(0.0f,1.0f,0.0f);
   glVertex2f(-0.65f,0.5f);
   glVertex2f(0.55f,0.5f);
   glVertex2f(0.15f,0.95f);
   
 glEnd();
 
glBegin(GL_TRIANGLES);
 glColor3f(0.0f,1.0f,0.0f);
   glVertex2f(-1.0f,0.5f);
   glVertex2f(-0.3f,0.5f);
   glVertex2f(-0.65f,0.9f);
   
 glEnd();

 glBegin(GL_POLYGON);
 glColor3f(1.0f,1.0f,0.0f);
   glVertex2f(0.4f,0.2f);
   glVertex2f(0.7f,0.35f);
   glVertex2f(0.7f,0.5f);
   glVertex2f(0.4f,0.45f);
 glEnd();
 glBegin(GL_QUADS);
 glColor3f(1.0f,1.0f,0.0f);
   glVertex2f(0.2f,0.2f);
   glVertex2f(0.4f,0.2f);
   glVertex2f(0.4f,0.45f);
   glVertex2f(0.2f,0.45f);
 glEnd();
 glBegin(GL_TRIANGLES);
 glColor3f(1.0f,1.0f,0.0f);
   glVertex2f(0.2f,0.45f);
   glVertex2f(0.4f,0.45f);
   glVertex2f(0.3f,0.6f);
 glEnd();
 glBegin(GL_QUADS);
 glColor3f(0.0f,0.0f,1.0f);
   glVertex2f(0.4f,0.45f);
   glVertex2f(0.7f,0.5f);
   glVertex2f(0.6f,0.57f);
   glVertex2f(0.3f,0.6f);
 glEnd();
 glBegin(GL_QUADS);
 glColor3f(0.0f,0.0f,1.0f);
   glVertex2f(0.25f,0.2f);
   glVertex2f(0.35f,0.2f);
   glVertex2f(0.35f,0.35f);
   glVertex2f(0.25f,0.35f);
 glEnd();

 glBegin(GL_QUADS);
 glColor3f(0.4f,0.4f,0.4f);
   glVertex2f(-1.0f,-0.35f);
   glVertex2f(1.1f,-0.35f);
   glVertex2f(1.1f,0.1f);
   glVertex2f(-1.0f,0.1f);
 glEnd();
 glBegin(GL_TRIANGLES);
 glColor3f(1.0f,0.8f,0.7f);
   glVertex2f(-0.5f,0.1f);
   glVertex2f(-0.6f,0.1f);
   glVertex2f(-0.55f,0.5f);
 glEnd();
glBegin(GL_TRIANGLES);
 glColor3f(1.0f,0.8f,0.7f);
   glVertex2f(-0.45f,0.35f);
   glVertex2f(-0.55f,0.5f);
   glVertex2f(-0.4f,0.4f);
 glEnd();
glBegin(GL_TRIANGLES);
 glColor3f(1.0f,0.8f,0.7f);
   glVertex2f(-0.7f,0.4f);
   glVertex2f(-0.65f,0.35f);
   glVertex2f(-0.55f,0.5f);
   
 glEnd();

glBegin(GL_TRIANGLES);
 glColor3f(1.0f,0.8f,0.7f);
   glVertex2f(-0.7f,0.6f);
   glVertex2f(-0.65f,0.65f);
   glVertex2f(-0.55f,0.5f);
   
 glEnd();

glBegin(GL_TRIANGLES);
 glColor3f(1.0f,0.8f,0.7f);
   glVertex2f(-0.4f,0.6f);
   glVertex2f(-0.45f,0.65f);
   glVertex2f(-0.55f,0.5f);
   
 glEnd();







   //draw_dda(p1,p2);
   glEnd();
   glFlush();
}


int main(int argc, char** argv)
{
 glutInit(&argc,argv);
 glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
 glutInitWindowSize(600,600);
 glutInitWindowPosition(50,50);
 glutCreateWindow("square");
 glutDisplayFunc(display);
 init();
 //Timer(0);
 glutMainLoop();

 return 0;
}
