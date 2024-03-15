#include<iostream>
#include<math.h>
#include<GL/glut.h>

#define mode GL_LINE_LOOP	
using namespace std;

float Xangle=0,Yangle=0,Zangle=0;
float xx=0,yy=0,zz=0;
float angle=0;
static bool isAnimate=0;
static int animatePeriod=100;
void myinit()
{
	
	glClearColor(1,1,1,0);
	glEnable(GL_DEPTH_TEST);
	glMatrixMode(GL_PROJECTION);
	gluPerspective(60, 1, 1, 900);
	
	//glOrth2D(0,100,0,100);
}

void resize(int w,int h)
{
	glViewport(0,0,w,h);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	glFrustum(-7.0,2.0,-5.0,5.0,5.0,200.0);

	glMatrixMode(GL_MODELVIEW);
}

void name()
{
	//background
	glColor3f(0,0.5,1);
    glPointSize(7) ;

	glBegin(GL_POINTS);
	int x1=-40,y1=0,z1=0,x2=30,y2=0,z2=0;
	for(float t=0;t<=1;t+=0.001){
	float px=x1*(1-t)+x2*(t);
	float py=y1*(1-t)+y2*(t);
	 		glVertex2f(px,py);// -------
	}
	glEnd();

	glBegin(GL_POINTS);
	x1=30 , y1=0 , z1=0 , x2=30 , y2=70 , z2=0;
	for(float t=0;t<=1;t+=0.001){
	float px=x1*(1-t)+x2*(t);
	float py=y1*(1-t)+y2*(t);
	 		glVertex2f(px,py);// -------
	}
	glEnd();

	glBegin(GL_POINTS);
	x1=30 , y1=70 , z1=0 , x2=-40 , y2=70 , z2=0; 
	for(float t=0;t<=1;t+=0.001){
	float px=x1*(1-t)+x2*(t);
	float py=y1*(1-t)+y2*(t);
	 		glVertex2f(px,py);// -------
	}
	glEnd();

	glBegin(GL_POINTS);
	x1=-40,y1=0,x2=-40,y2=70;
	for(float t=0;t<=1;t+=0.001){
	float px=x1*(1-t)+x2*(t);
	float py=y1*(1-t)+y2*(t);
	 		glVertex2f(px,py);// -------
	}
	glEnd();

	
	
	glColor3f(0,1,0) ;
	glBegin(GL_POINTS);
	x1 = 30,y1 = 0,z1 = 0,x2 = 30,y2 = 0,z2 = -20;
	for(float t=0;t<=1;t+=0.001){
	float px=x1*(1-t)+x2*(t);
	float py=y1*(1-t)+y2*(t);
	float pz=z1*(1-t)+z2*(t);
	 		glVertex3f(px,py,pz);// -------
	}
	glEnd();

	glBegin(GL_POINTS);
	x1 = 30,y1 = 70,z1 = 0,x2 = 30,y2 = 70 , z2 = -20;
	for(float t=0;t<=1;t+=0.001){
	float px=x1*(1-t)+x2*(t);
	float py=y1*(1-t)+y2*(t);
	float pz=z1*(1-t)+z2*(t);
	 		glVertex3f(px,py,pz);// -------
	}
	glEnd();

	glBegin(GL_POINTS);
	x1 = -40,y1 = 0,z1 = 0,x2 = -40,y2 = 0 , z2 = -20;
	for(float t=0;t<=1;t+=0.001){
	float px=x1*(1-t)+x2*(t);
	float py=y1*(1-t)+y2*(t);
	float pz=z1*(1-t)+z2*(t);
	 		glVertex3f(px,py,pz);// -------
	}
	glEnd();

	glBegin(GL_POINTS);
	x1 = -40,y1 = 70,z1 = 0,x2 = -40,y2 = 70 , z2 = -20;
	for(float t=0;t<=1;t+=0.001){
	float px=x1*(1-t)+x2*(t);
	float py=y1*(1-t)+y2*(t);
	float pz=z1*(1-t)+z2*(t);
	 		glVertex3f(px,py,pz);// -------
	}
	glEnd();

	glColor3f(0.5,0.4,0.3) ;
	glBegin(GL_POINTS);
	x1 = 30,y1 = 0,z1 = -20,x2 = -40,y2 = 0 , z2 = -20;
	for(float t=0;t<=1;t+=0.001){
	float px=x1*(1-t)+x2*(t);
	float py=y1*(1-t)+y2*(t);
	float pz=z1*(1-t)+z2*(t);
	 		glVertex3f(px,py,pz);// -------
	}
	glEnd();

	glBegin(GL_POINTS);
	x1 = 30,y1 = 0,z1 = -20,x2 = 30,y2 = 70 , z2 = -20;
	for(float t=0;t<=1;t+=0.001){
	float px=x1*(1-t)+x2*(t);
	float py=y1*(1-t)+y2*(t);
	float pz=z1*(1-t)+z2*(t);
	 		glVertex3f(px,py,pz);// -------
	}
	glEnd();

	glBegin(GL_POINTS);
	x1 = 30,y1 = 70,z1 = -20,x2 = -40 ,y2 = 70 , z2 = -20;
	for(float t=0;t<=1;t+=0.001){
	float px=x1*(1-t)+x2*(t);
	float py=y1*(1-t)+y2*(t);
	float pz=z1*(1-t)+z2*(t);
	 		glVertex3f(px,py,pz);// -------
	}
	glEnd();

	glBegin(GL_POINTS);
	x1 = -40,y1 = 70,z1 = -20,x2 = -40,y2 = 0 , z2 = -20;
	for(float t=0;t<=1;t+=0.001){
	float px=x1*(1-t)+x2*(t);
	float py=y1*(1-t)+y2*(t);
	float pz=z1*(1-t)+z2*(t);
	 		glVertex3f(px,py,pz);// -------
	}
	glEnd();
	

	///////////////////////NAME/////////////////////////////
	glTranslatef(00,-30,15);
	glColor3f(0.2,0.2,0.2) ;
	glPointSize(3) ;

	glBegin(GL_POINTS);
	x1=-23,y1=80,x2=25,y2=80;
	for(float t=0;t<=1;t+=0.001){
	float px=x1*(1-t)+x2*(t);
	float py=y1*(1-t)+y2*(t);
	 		glVertex2f(px,py);// -------
	}
	glEnd();

	glBegin(GL_POINTS);
	x1=-10,y1=80,x2=-10,y2=50;
	for(float t=0;t<=1;t+=0.001){
	float px=x1*(1-t)+x2*(t);
	float py=y1*(1-t)+y2*(t);
	 		glVertex2f(px,py);// -------
	}
	glEnd();

	glBegin(GL_POINTS);
	x1=-15,y1=65,x2=-23,y2=65;
	for(float t=0;t<=1;t+=0.001){
	float px=x1*(1-t)+x2*(t);
	float py=y1*(1-t)+y2*(t);
	 		glVertex2f(px,py);// -------
	}
	glEnd();

	glBegin(GL_POINTS);
	x1=-23,y1=65,x2=-19,y2=60;
	for(float t=0;t<=1;t+=0.001){
	float px=x1*(1-t)+x2*(t);
	float py=y1*(1-t)+y2*(t);
	 		glVertex2f(px,py);// -------
	}
	glEnd();

	glBegin(GL_POINTS);
	x1=-19,y1=65,x2=-19,y2=60;
	for(float t=0;t<=1;t+=0.001){
	float px=x1*(1-t)+x2*(t);
	float py=y1*(1-t)+y2*(t);
	 		glVertex2f(px,py);// -------
	}
	glEnd();
	
	glBegin(GL_POINTS);
	x1=-5,y1=45,x2=-10,y2=50;
	for(float t=0;t<=1;t+=0.001){
	float px=x1*(1-t)+x2*(t);
	float py=y1*(1-t)+y2*(t);
	 		glVertex2f(px,py);// -------
	}
	glEnd();

	glBegin(GL_POINTS);
	int a1=-20,a2= 80 , b1=-14,b2=75 , c1=-14,c2=69 , d1=-15,d2=65 ;
	for(float t=0;t<=1;t+=0.001)
	{
		float px = a1*pow((1-t),3) + 3*b1*t*(1-t)*(1-t) + 3*c1*t*t*(1-t) + d1*t*t*t ;  
		float py = a2*pow((1-t),3) + 3*b2*t*(1-t)*(1-t) + 3*c2*t*t*(1-t) + d2*t*t*t ;
		glVertex2f(px,py) ;
	}
	glEnd();

	glBegin(GL_POINTS);
	x1 = -10,y1=48 ;
	for(int k=300,r=2;k<800;k++)
	{
        double x,y;
         x=x1+r*sin(k);
         y=y1+r*cos(k); 
		glVertex2f(x,y);
	
  	}
	glEnd();

	glBegin(GL_POINTS);
	a1=-15,a2= 65 , b1=-19,b2=63 , c1=-13,c2=50 , d1=-10,d2=55 ;
	for(float t=0;t<=1;t+=0.001)
	{
		float px = a1*pow((1-t),3) + 3*b1*t*(1-t)*(1-t) + 3*c1*t*t*(1-t) + d1*t*t*t ;  
		float py = a2*pow((1-t),3) + 3*b2*t*(1-t)*(1-t) + 3*c2*t*t*(1-t) + d2*t*t*t ;
		glVertex2f(px,py) ;
	}
	glEnd();

	glBegin(GL_POINTS);
	x1=8,y1=80,x2=8,y2=65;
	for(float t=0;t<=1;t+=0.001){
	float px=x1*(1-t)+x2*(t);
	float py=y1*(1-t)+y2*(t);
	 		glVertex2f(px,py);// -------
	}
	glEnd();

	

	glBegin(GL_POINTS);
	a1=8,a2= 65 , b1=-5,b2=60 , c1=2,c2=30 , d1=12,d2=48 ;
	for(float t=0;t<=1;t+=0.001)
	{
		float px = a1*pow((1-t),3) + 3*b1*t*(1-t)*(1-t) + 3*c1*t*t*(1-t) + d1*t*t*t ;  
		float py = a2*pow((1-t),3) + 3*b2*t*(1-t)*(1-t) + 3*c2*t*t*(1-t) + d2*t*t*t ;
		glVertex2f(px,py) ;
	}
	glEnd();

	glBegin(GL_POINTS);
	x1=20,y1=80,x2=20,y2=45; 
	for(float t=0;t<=1;t+=0.001){
	float px=x1*(1-t)+x2*(t);
	float py=y1*(1-t)+y2*(t);
	 		glVertex2f(px,py);// -------
	}
	glEnd();

	glBegin(GL_POINTS);
	x1=12,y1=65,x2=20,y2=65; 
	for(float t=0;t<=1;t+=0.001){
	float px=x1*(1-t)+x2*(t);
	float py=y1*(1-t)+y2*(t);
	 		glVertex2f(px,py);// -------
	}
	glEnd();

	glBegin(GL_POINTS);
	x1=15,y1=65,x2=15,y2=55; 
	for(float t=0;t<=1;t+=0.001){
	float px=x1*(1-t)+x2*(t);
	float py=y1*(1-t)+y2*(t);
	 		glVertex2f(px,py);// -------
	}
	glEnd();

	glBegin(GL_POINTS);
	x1=12,y1=65,x2=15,y2=55; 
	for(float t=0;t<=1;t+=0.001){
	float px=x1*(1-t)+x2*(t);
	float py=y1*(1-t)+y2*(t);
	 		glVertex2f(px,py);// -------
	}
	glEnd();
	/////////////////////////
///////////////////////////////////GAP//////////////...
	
	glColor3f(0.8,0.8,0.8) ;
	glBegin(GL_POINTS);
	x1=-23,y1=80,z1=0,x2=-23,y2=80,z2=-15;
	for(float t=0;t<=1;t+=0.001){
	float px=x1*(1-t)+x2*(t);
	float py=y1*(1-t)+y2*(t);
	float pz=z1*(1-t)+z2*(t);
	 		glVertex3f(px,py,pz);// -------
	}
	glEnd();

	glBegin(GL_POINTS);
	x1=25,y1=80,z1=0,x2=25,y2=80,z2=-15;
	for(float t=0;t<=1;t+=0.001){
	float px=x1*(1-t)+x2*(t);
	float py=y1*(1-t)+y2*(t);
	float pz=z1*(1-t)+z2*(t);
	 		glVertex3f(px,py,pz);// -------
	}
	glEnd();

	glBegin(GL_POINTS);
	x1=-23,y1=80,z1=0,x2=-23,y2=80,z2=-15;
	for(float t=0;t<=1;t+=0.001){
	float px=x1*(1-t)+x2*(t);
	float py=y1*(1-t)+y2*(t);
	float pz=z1*(1-t)+z2*(t);
	 		glVertex3f(px,py,pz);// -------
	}
	glEnd();

	glBegin(GL_POINTS);
	x1=-10,y1=80,z1=0,x2=-10,y2=80,z2=-15;
	for(float t=0;t<=1;t+=0.001){
	float px=x1*(1-t)+x2*(t);
	float py=y1*(1-t)+y2*(t);
	float pz=z1*(1-t)+z2*(t);
	 		glVertex3f(px,py,pz);// -------
	}
	glEnd();

	glBegin(GL_POINTS);
	x1=-10,y1=50,z1=0,x2=-10,y2=50,z2=-15;
	for(float t=0;t<=1;t+=0.001){
	float px=x1*(1-t)+x2*(t);
	float py=y1*(1-t)+y2*(t);
	float pz=z1*(1-t)+z2*(t);
	 		glVertex3f(px,py,pz);// -------
	}
	glEnd();

	
	glBegin(GL_POINTS);
	x1=-23,y1=65,z1=0,x2=-23,y2=65,z2=-15;
	for(float t=0;t<=1;t+=0.001){
	float px=x1*(1-t)+x2*(t);
	float py=y1*(1-t)+y2*(t);
	float pz=z1*(1-t)+z2*(t);
	 		glVertex3f(px,py,pz);// -------
	}
	glEnd();

	
	glBegin(GL_POINTS);
	x1=-15,y1=65,z1=0,x2=-15,y2=65,z2=-15;
	for(float t=0;t<=1;t+=0.001){
	float px=x1*(1-t)+x2*(t);
	float py=y1*(1-t)+y2*(t);
	float pz=z1*(1-t)+z2*(t);
	 		glVertex3f(px,py,pz);// -------
	}
	glEnd();

	
	glBegin(GL_POINTS);
	x1=-19 ,y1=60 ,z1=0,x2= -19,y2=60 ,z2=-15;
	for(float t=0;t<=1;t+=0.001){
	float px=x1*(1-t)+x2*(t);
	float py=y1*(1-t)+y2*(t);
	float pz=z1*(1-t)+z2*(t);
	 		glVertex3f(px,py,pz);// -------
	}
	glEnd();
	
	glBegin(GL_POINTS);
	x1=-19 ,y1=65 ,z1=0,x2=-19 ,y2=65 ,z2=-15;
	for(float t=0;t<=1;t+=0.001){
	float px=x1*(1-t)+x2*(t);
	float py=y1*(1-t)+y2*(t);
	float pz=z1*(1-t)+z2*(t);
	 		glVertex3f(px,py,pz);// -------
	}
	glEnd();

	glBegin(GL_POINTS);
	x1=-10 ,y1=53 ,z1=0,x2=-10 ,y2=53 ,z2=-15;
	for(float t=0;t<=1;t+=0.001){
	float px=x1*(1-t)+x2*(t);
	float py=y1*(1-t)+y2*(t);
	float pz=z1*(1-t)+z2*(t);
	 		glVertex3f(px,py,pz);// -------
	}
	glEnd();

	glBegin(GL_POINTS);
	x1=-10 ,y1=50 ,z1=0,x2=-10 ,y2=50 ,z2=-15;
	for(float t=0;t<=1;t+=0.001){
	float px=x1*(1-t)+x2*(t);
	float py=y1*(1-t)+y2*(t);
	float pz=z1*(1-t)+z2*(t);
	 		glVertex3f(px,py,pz);// -------
	}
	glEnd();

	glBegin(GL_POINTS);
	x1=12 ,y1=48 ,z1=0,x2=12 ,y2=48 ,z2=-15;
	for(float t=0;t<=1;t+=0.001){
	float px=x1*(1-t)+x2*(t);
	float py=y1*(1-t)+y2*(t);
	float pz=z1*(1-t)+z2*(t);
	 		glVertex3f(px,py,pz);// -------
	}
	glEnd();

	glBegin(GL_POINTS);
	x1=-12 ,y1=48 ,z1=0,x2=-12 ,y2=48 ,z2=-15;
	for(float t=0;t<=1;t+=0.001){
	float px=x1*(1-t)+x2*(t);
	float py=y1*(1-t)+y2*(t);
	float pz=z1*(1-t)+z2*(t);
	 		glVertex3f(px,py,pz);// -------
	}
	glEnd();

	glBegin(GL_POINTS);
	x1=-8 ,y1=48 ,z1=0,x2=-8 ,y2=48 ,z2=-15;
	for(float t=0;t<=1;t+=0.001){
	float px=x1*(1-t)+x2*(t);
	float py=y1*(1-t)+y2*(t);
	float pz=z1*(1-t)+z2*(t);
	 		glVertex3f(px,py,pz);// -------
	}
	glEnd();

	glBegin(GL_POINTS);
	x1=-10 ,y1=46 ,z1=0,x2=-10 ,y2=46 ,z2=-15;
	for(float t=0;t<=1;t+=0.001){
	float px=x1*(1-t)+x2*(t);
	float py=y1*(1-t)+y2*(t);
	float pz=z1*(1-t)+z2*(t);
	 		glVertex3f(px,py,pz);// -------
	}
	glEnd();

	glBegin(GL_POINTS);
	x1=8 ,y1=80 ,z1=0,x2=8 ,y2=80 ,z2=-15;
	for(float t=0;t<=1;t+=0.001){
	float px=x1*(1-t)+x2*(t);
	float py=y1*(1-t)+y2*(t);
	float pz=z1*(1-t)+z2*(t);
	 		glVertex3f(px,py,pz);// -------
	}
	glEnd();

	glBegin(GL_POINTS);
	x1=8 ,y1=65 ,z1=0,x2=8 ,y2=65 ,z2=-15;
	for(float t=0;t<=1;t+=0.001){
	float px=x1*(1-t)+x2*(t);
	float py=y1*(1-t)+y2*(t);
	float pz=z1*(1-t)+z2*(t);
	 		glVertex3f(px,py,pz);// -------
	}
	glEnd();

	glBegin(GL_POINTS);
	x1=-5 ,y1=45 ,z1=0,x2=-5 ,y2=45 ,z2=-15;
	for(float t=0;t<=1;t+=0.001){
	float px=x1*(1-t)+x2*(t);
	float py=y1*(1-t)+y2*(t);
	float pz=z1*(1-t)+z2*(t);
	 		glVertex3f(px,py,pz);// -------
	}
	glEnd();

	glBegin(GL_POINTS);
	x1=20 ,y1=45 ,z1=0,x2=20 ,y2=45 ,z2=-15;
	for(float t=0;t<=1;t+=0.001){
	float px=x1*(1-t)+x2*(t);
	float py=y1*(1-t)+y2*(t);
	float pz=z1*(1-t)+z2*(t);
	 		glVertex3f(px,py,pz);// -------
	}
	glEnd();

	
	glBegin(GL_POINTS);
	x1=20 ,y1=80 ,z1=0,x2=20 ,y2=80 ,z2=-15;
	for(float t=0;t<=1;t+=0.001){
	float px=x1*(1-t)+x2*(t);
	float py=y1*(1-t)+y2*(t);
	float pz=z1*(1-t)+z2*(t);
	 		glVertex3f(px,py,pz);// -------
	}
	glEnd();

	glBegin(GL_POINTS);
	x1=20 ,y1=65 ,z1=0,x2=20 ,y2=65 ,z2=-15;
	for(float t=0;t<=1;t+=0.001){
	float px=x1*(1-t)+x2*(t);
	float py=y1*(1-t)+y2*(t);
	float pz=z1*(1-t)+z2*(t);
	 		glVertex3f(px,py,pz);// -------
	}
	glEnd();

	glBegin(GL_POINTS);
	x1=15 ,y1=65 ,z1=0,x2=15 ,y2=65 ,z2=-15;
	for(float t=0;t<=1;t+=0.001){
	float px=x1*(1-t)+x2*(t);
	float py=y1*(1-t)+y2*(t);
	float pz=z1*(1-t)+z2*(t);
	 		glVertex3f(px,py,pz);// -------
	}
	glEnd();

	glBegin(GL_POINTS);
	x1=12 ,y1=65 ,z1=0,x2=12 ,y2=65 ,z2=-15;
	for(float t=0;t<=1;t+=0.001){
	float px=x1*(1-t)+x2*(t);
	float py=y1*(1-t)+y2*(t);
	float pz=z1*(1-t)+z2*(t);
	 		glVertex3f(px,py,pz);// -------
	}
	glEnd();
	glBegin(GL_POINTS);
	x1=15 ,y1=55 ,z1=0,x2=15 ,y2=55 ,z2=-15;
	for(float t=0;t<=1;t+=0.001){
	float px=x1*(1-t)+x2*(t);
	float py=y1*(1-t)+y2*(t);
	float pz=z1*(1-t)+z2*(t);
	 		glVertex3f(px,py,pz);// -------
	}
	glEnd();
}

void display()
{
	glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
	glLoadIdentity();
	glTranslatef(-20.0+xx,-30.0+yy,-60.0+zz);
	glRotatef(Xangle,1.0,0.0,0.0);
	glRotatef(Yangle,0.0,1.0,0.0);
	glRotatef(Zangle,0.0,0.0,1.0);
	glColor3f(1,0,0);
	name();
	glutSwapBuffers();
}

void keyInput(unsigned char key,int x,int y)
{
	switch(key)
	{
        case 'R':
        case 'r':
            Xangle=0,Yangle=0,Zangle=0,xx=0,yy=0,zz=0,angle=0;
			glutPostRedisplay();
            break;
        case 27:
			exit(0);
			break;   
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
			if(zz<=-45) zz=-44;
			glutPostRedisplay();
			break;
		case 'P':
			zz=zz+1;
			if(zz>=60) zz=59;
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

void PrintFun()
{
   cout<<"Ese   - exit\nr/R   - Reset\nx/X   - Rotate about x axis\ny/Y   - Rotate about y axis\nz/Z   - rotate about z axix\n  ↑   - Move Upword\n  ↓   - Move Downword\n  ←   - Move Left\n  →   - Move Right\n  p   - Move Into The Screen\n  P   - Move Outside The Screen\n"  ;
}
int main(int argc, char** argv)
{
   PrintFun() ;
	glutInit(&argc,argv);
	glutInitDisplayMode(GLUT_DOUBLE|GLUT_RGB|GLUT_DEPTH);
	glutInitWindowPosition(50,50);
	glutInitWindowSize(800,500);
	glutCreateWindow("NAME");

	myinit();
	glutDisplayFunc(display);
	glutReshapeFunc(resize);
	glutKeyboardFunc(keyInput);
	glutSpecialFunc(specialKeyInput);	
	glutMainLoop();
	return 0;
}