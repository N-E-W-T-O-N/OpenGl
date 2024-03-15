#include<iostream>
#include<GL/glut.h>
#include<math.h>
#include<time.h>
#include<stdio.h>
#include<string.h>
#define PI 3.141592653589793
using namespace std;

GLfloat secAngle=0.0;
GLfloat minAngle=0.0;
GLfloat hourAngle=0.0;
GLfloat hour=0.0;
GLfloat x1=0; GLfloat xx=0;
GLfloat y2=0; GLfloat yy=0;
GLfloat z1=0; GLfloat zz=0;
GLfloat radius=20.0;
GLfloat smallradius=3.0;
int angle;
GLfloat Xangle=0;
GLfloat Yangle=0;
GLfloat Zangle=0;


static float latAngle=0;
static float longAngle=0;
static bool isAnimate=0;
static int animatePeriod=100;

void smallLines(GLfloat,GLfloat,GLfloat,GLfloat,GLfloat,int);
void secondsLine(void);
void minutesLines(void);
void hourLine(void);
void centerpoint(void);
void circle(void);


void myInit()
{
	//glClearColor(0.0,0.2,0.4,0.0);
	//glColor3f(0.8,0.3,0.4);
	glEnable(GL_DEPTH_TEST);
}

void resize(int w,int h)
{
	glViewport(0,0,w,h);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
 	glFrustum(-5.0,5.0,-5.0,5.0,5.0,100.0);

	glMatrixMode(GL_MODELVIEW);
}

void DrawClock()
{
	
	glClearColor(0.8,0.3,0.3,0);
	//glOrtho(0,20,0,20,-10,10);
	glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
	glLoadIdentity();	

	glTranslatef(xx-radius,yy-radius,-50.0+zz);
	glRotatef(Xangle,1.0,0.0,0.0);
	glRotatef(Yangle,0.0,1.0,0.0);
	glRotatef(Zangle,0.0,0.0,1.0);
	glColor3f(0.0,1.0,0.0);

	secAngle+=0.06;
	hourAngle+=0.2;
	minAngle+=0.2;
	circle();
	smallLines(x1,y2,z1,radius,smallradius,angle);
	centerpoint();
	secondsLine();
	minutesLines();
	hourLine();
	glutSwapBuffers();
	glutPostRedisplay();
}

void smallLines(GLfloat x1,GLfloat y2,GLfloat z1,GLfloat radius,GLfloat smallradius,int angle)
{
	glPushMatrix();
	glTranslatef(10.0,10.0,0.0);
	glColor3f(0.2,0.2,0.2);
	glLineWidth(2);
	for(angle=0;angle<=360;angle+=30)
	{
		glBegin(GL_LINES);
		if(angle==0 || angle==180 || angle==90 || angle==270 || angle==360)
		{
			glColor3f(1.0,1.0,0.2);
			glVertex3f(x1+cos(angle*PI/180.0f)*(radius-1.2),y2+sin(angle*PI/180.0f)*(radius-1.2),z1+0.1);
			glVertex3f(x1+cos(angle*PI/180.0f)*radius,y2+sin(angle*PI/180.0f)*radius,z1+0.1);
		}
		else
		{
			glColor3f(0.2,0.2,0.2);
			glVertex3f(x1+cos(angle*PI/180.0f)*(radius-0.5),y2+sin(angle*PI/180.0f)*(radius-0.5),z1);
			glVertex3f(x1+cos(angle*PI/180.0f)*radius,y2+sin(angle*PI/180.0f)*radius,z1+0.1);
		}
		glEnd();
	}
	for(angle=0;angle<=360;angle+=6)
	{
		glBegin(GL_LINES);
			glColor3f(0.2,0.2,0.2);
			glVertex3f(x1+cos(angle*PI/180.0f)*(radius-0.2),y2+sin(angle*PI/180.0f)*(radius-0.2),z1+0.1);
			glVertex3f(x1+cos(angle*PI/180.0f)*radius,y2+sin(angle*PI/180.0f)*radius,z1);
		glEnd();
	}
	glPopMatrix();
} 

void circle()
{
	glClearColor(1,1,1,1);
	glPushMatrix();
	glTranslatef(10,10,-0.1);
	glColor3f(0.9,0.9,0.9);
	glBegin(GL_TRIANGLE_FAN);
	glVertex3f(x1,y2,z1);
	for(angle=0;angle<=360;angle+=1)
	{
		glVertex3f(x1+cos(angle*PI/180.0f)*radius,y2+sin(angle*PI/180.0f)*radius,z1);
	}
	glEnd();
	
	glPopMatrix();
}

void centerpoint()
{
	glColor3f(0.0,0.0,0.0);
	glLineWidth(4.0);

	glPushMatrix();
	glTranslatef(10.0,10.0,0.0);
	glRotatef(-secAngle,0.0,0.0,1.0);
	glBegin(GL_LINES);
	glVertex3f(0,0,0);
	glVertex3f(0,0,1.0);
	glEnd();
	glPopMatrix();
}

void secondsLine()
{
	glColor3f(0.0,0.0,0.0);
	glLineWidth(0.5);

	glPushMatrix();
	glTranslatef(10.0,10.0,0.0);
	glRotatef(-secAngle,0.0,0.0,1.0);
	glBegin(GL_LINES);
	glVertex3f(0,0,1.0);
	glVertex3f(0,18,1.0);
	glEnd();
	glPopMatrix();
}

void minutesLines()
{
	glColor3f(1.0,0.0,0.0);
	glLineWidth(1.0);
	glPushMatrix();
	
	glTranslatef(10.0,10.0,0.0);
	glRotatef(-secAngle/60,0.0,0.0,1.0);
	glBegin(GL_LINES);
	glVertex3f(0.0,0.0,0.6);
	glVertex3f(0.0,17.0,0.6);
	glEnd();
	glPopMatrix();
}
void hourLine()
{
	glColor3f(0.0,0.0,1.0);
	glLineWidth(2);
	glPushMatrix();
	
	glTranslatef(10.0,10.0,0.0);
	glRotatef(-secAngle/3600,0.0,0.0,1.0);
	
	glBegin(GL_LINES);
	glVertex3f(0.0,0.0,0.2);
	glVertex3f(0.0,16.0,0.2);
	glEnd();
	glPopMatrix();

}



void keyInput(unsigned char key,int x,int y)
{
	switch(key)
	{
		case 27:
			exit(0);
			break;
		/*case ' ':
			if(isAnimate) isAnimate=0;
			else{
				isAnimate=1;
				animate(1);
			}
			break;*/
		case 'x':
			Xangle+=5.0;
			if(Xangle>360.0) Xangle-=360.0;
			glutPostRedisplay();
			break;
		case 'X':
			Xangle-=5.0;
			if(Xangle<0.0) Xangle+=360.0;
			glutPostRedisplay();
			break;
		case 'y':
			Yangle+=5.0;
			if(Yangle>360.0) Yangle-=360.0;
			glutPostRedisplay();
			break;
		case 'Y':
			Yangle-=5.0;
			if(Yangle<0.0) Yangle+=360.0;
			glutPostRedisplay();
			break;
		case 'z':
			Zangle+=5.0;
			if(Zangle>360.0) Zangle-=360.0;
			glutPostRedisplay();
			break;
		case 'Z':
			Zangle-=5.0;
			if(Zangle<0.0) Zangle+=360.0;
			glutPostRedisplay();
			break;
		case 'p':
			zz=zz-1;
			glutPostRedisplay();
			break;
		case 'P':
			zz=zz+1;
			glutPostRedisplay();
			break;
		default:
			break;
	}

}

void specialKeyInput(int key,int x,int y)
{	
	switch(key)
	{
		case GLUT_KEY_UP:
				yy=yy+1;
				glutPostRedisplay();
				break;
		case GLUT_KEY_DOWN:
				yy=yy-1;
				glutPostRedisplay();
				break;	
		case GLUT_KEY_LEFT:
				xx=xx-1;
				glutPostRedisplay();
				break;
		case GLUT_KEY_RIGHT:
				xx=xx+1;
				glutPostRedisplay();
				break;
	}
	
}
int main(int argc,char **argv)
{
	glutInit(&argc,argv);
	glutInitDisplayMode(GLUT_DOUBLE|GLUT_RGB|GLUT_DEPTH);
	glutInitWindowSize(600,600);
	glutInitWindowPosition(50,50);
	glutCreateWindow("Analog Clock");
	
	glutDisplayFunc(DrawClock);	
	//glutIdleFunc(Idle);
	glutReshapeFunc(resize);
	glutKeyboardFunc(keyInput);
	glutSpecialFunc(specialKeyInput);
	myInit();
	glutMainLoop();
	return 0;
}
