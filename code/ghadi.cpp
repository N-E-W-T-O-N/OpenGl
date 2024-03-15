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
GLfloat hourAngle=0.0;
GLfloat minAngle=0.0;
GLfloat x1=0.0;
GLfloat y2=0.0;
GLfloat z1=0.0;
GLfloat radius=10.0;
//GLfloat z1=0.0;
int angle;
void myinit()
{
	glColor3f(1.0f,0.0f,0.0f);
	glMatrixMode(GL_PROJECTION);
	gluOrtho2D(0.0,640.0,0.0,480.0);
}
void DrawClock(){
	char buff[100];
	glLoadIdentity();
	glClearColor(1.0,1.0,1.0,1.0);
	glOrtho(0.0,20.0,0.0,20.0,-10.0,10.0);
	glClear(GL_COLOR_BUFFER_BIT);
}
void circle(){
	glClearColor(1.0,1.0,1.0,1.0);
	
	glPushMatrix();
	glTranslatef(10.0,10.0,10.0);
	glColor3f(0.9,0.9,0.9);
	glBegin(GL_TRIANGLE_FAN);
	glVertex3f(x1,y2,z1);
	for(angle=0; angle<=360; angle+=1){
		glVertex3f(x1+cos(angle*PI/100.0f)*radius, y2+ sin(angle*PI/100.0f) * radius, z1);
	}
	glEnd();
	glPopMatrix();
}

void centerpoint(){
	glColor3f(0.0,0.0,0.0);
	glPointSize(8.0);
	glPushMatrix();
	glTranslatef(10.0,10.0,10.0);
	glBegin(GL_POINTS);
	glVertex3f(0.0,0.0,0.0);
	glEnd();
	glPopMatrix();
	glFlush();
}
void secondsline(){
	glColor3f(1.0,0.7,0.0);
	glLineWidth(2.0);
	glPushMatrix();
	glTranslatef(10.0,10.0,0.0);
	glRotatef(-secAngle,0.0,0.0,1.0);
	glBegin(GL_LINES);
	glVertex2f(0,0);
	glVertex2f(7,7);
	glEnd();
	glPopMatrix();
	//glFlush();
}
void minutesline(){
	glColor3f(0.7,1.0,0.0);
	glLineWidth(1.8);
	glPushMatrix();
	glTranslatef(10.0,10.0,0.0);
	glRotatef(-minAngle,0.0,0.0,1.0);
	glBegin(GL_LINES);
	glVertex3f(0.0,0.0,1.0);
	glVertex3f(0.0,7.0,1.0);
	glEnd();
	glPopMatrix();
	//glFlush();
}

void hoursline(){
	glColor3f(0.9,1.0,1.0);
	glLineWidth(1.5);
	glPushMatrix();
	glTranslatef(10.0,10.0,0.0);
	glRotatef(-hourAngle,0.0,0.0,1.0);
	glBegin(GL_LINES);
	glVertex3f(0.0,0.0,1.0);
	glVertex3f(0.0,7.0,1.0);
	glEnd();
	glPopMatrix();
	//glFlush();
}
void idle(void){
	secAngle+=0.1;
	hourAngle+=0.01;
	minAngle+=0.2;
	
	circle();
	centerpoint();
	secondsline();
	minutesline();
	hoursline();
	glutSwapBuffers();
}
int main(int argc,char **argv)
{
	glutInit(&argc,argv);
	glutInitDisplayMode(GLUT_DOUBLE|GLUT_RGB);
	glutInitWindowSize(600,600);
	glutInitWindowPosition(200,300);
	glutCreateWindow("Analog_Clock");
	glutDisplayFunc(DrawClock);
	glutIdleFunc(idle);
	myinit();
	glutMainLoop();
	return 0;
}

