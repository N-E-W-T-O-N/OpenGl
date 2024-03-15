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

GLfloat dx=(p2.x-p1.x)*5.0;
GLfloat dy=(p2.y-p1.y)*5.0;
GLfloat x1=(p1.x)*5.0;
GLfloat y1=(p1.y)*5.0;
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
glClearColor(1.0,1.0,1.0,0.0);
glColor3f(0.0f,0.0f,0.0f);
glPointSize(1.0f);
gluOrtho2D(0.0f,1000.0f,0.0f,1000.0f);
}


void draw_circle(Point pc,GLfloat rad)
{
GLfloat step=1/rad;
GLfloat x,y;

for(GLfloat theta=0;theta<=180;theta+=step)
{
x=pc.x+(rad*cos(theta));
y=pc.y+(rad*sin(theta));
glVertex2f(x*5.0,y*5.0);
}

}

void display(void)
{
 glClear(GL_COLOR_BUFFER_BIT);

glBegin(GL_POLYGON);     //HouseChimneyRight
 glColor3f(0.2f,0.2f,0.8f);
 glVertex2f(380,600);
 glColor3f(0.4f,0.0f,0.8f);
 glVertex2f(380,850);
 glColor3f(0.0f,0.0f,0.0f);
 glVertex2f(420,850);
 glColor3f(0.0f,0.0f,0.0f);
 glVertex2f(420,600);
glEnd();

glBegin(GL_POLYGON);     //HouseChimneyRight
 glColor3f(1.0f,0.0f,1.0f);
 glVertex2f(380-15,620);
 glColor3f(1.0f,1.0f,1.0f);
 glVertex2f(380-15,850);
 glColor3f(0.0f,0.0f,0.0f);
 glVertex2f(380,850);
 glColor3f(1.0f,1.0f,1.0f);
 glVertex2f(380,620);
glEnd();


glBegin(GL_POLYGON);     //lower House
 glColor3f(1.0f,0.0f,0.0f);
 glVertex2f(320,450);
 glColor3f(1.0f,0.0f,0.0f);
 glVertex2f(320,600);
 glColor3f(0.0f,0.0f,0.0f);
 glVertex2f(680,600);
 glColor3f(0.0f,0.0f,0.0f);
 glVertex2f(680,400);
glEnd();


glBegin(GL_POLYGON);   //RoofTop
 glColor3f(1.0f,0.0f,0.0f);
 glVertex2f(300,600);
 glColor3f(1.0f,1.0f,1.0f);
 glVertex2f(400,800);
 glColor3f(1.0f,0.0f,0.0f);
 glVertex2f(800,800);
 glColor3f(1.0f,1.0f,1.0f);
 glVertex2f(700,600);
glEnd();



glBegin(GL_POLYGON);    //House Right
 glColor3f(1.0f,0.0f,0.0f);
 glVertex2f(680,400);
 glColor3f(1.0f,1.0f,1.0f);
 glVertex2f(680,600);
 glColor3f(1.0f,0.0f,0.0f);
 glVertex2f(700,600);
 glColor3f(1.0f,1.0f,1.0f);
 glVertex2f(800,800);
 glColor3f(1.0f,1.0f,1.0f);
 glVertex2f(920,600);
 glColor3f(1.0f,1.0f,1.0f);
 glVertex2f(920,450);
glEnd();

glBegin(GL_POLYGON);   //RoofTopSideLane
 glColor3f(0.0f,0.0f,0.0f);
 glVertex2f(910,600);
 glColor3f(0.0f,0.0f,0.0f);
 glVertex2f(790,780);
 glColor3f(0.0f,0.0f,0.2f);
 glVertex2f(800,800);
 glColor3f(0.0f,0.0f,0.2f);
 glVertex2f(950,600);
glEnd();


glBegin(GL_POLYGON);   //Door
 glColor3f(0.0f,0.0f,0.0f);
 glVertex2f(550,425);
 glColor3f(0.0f,0.0f,0.0f);
 glVertex2f(550,550);
 glColor3f(0.0f,0.4f,0.8f);
 glVertex2f(650,550);
 glColor3f(0.0f,0.4f,0.8f);
 glVertex2f(650,410);
glEnd();

glBegin(GL_POLYGON);   //DoorWindow
 glColor3f(0.8f,0.7f,0.9f);
 glVertex2f(580,520);
 glColor3f(0.9f,0.8f,0.9f);
 glVertex2f(580,530);
 glColor3f(1.0f,1.0f,0.0f);
 glVertex2f(615,530);
 glColor3f(1.0f,1.0f,1.0f);
 glVertex2f(615,520);
glEnd();



glBegin(GL_POLYGON);   //DoorKnob
 float x1=560,y1=480;
 float r1=8;
 glColor3f(1.0f,0.9f,0.9f);
 for(int i=0;i<=360;i++){
	x1=x1+r1*cos(i);
        y1=y1+r1*sin(i);
        glVertex2f(x1,y1);
  }
glEnd();



glBegin(GL_POLYGON);   //ChimeyTop
 float x=780,y=700;
 float r=15;
 glColor3f(0.5f,0.0f,0.5f);
 for(int i=0;i<=360;i++){
	x=x+r*cos(i);
        y=y+r*sin(i);
        glVertex2f(x,y);
  }
glEnd();

glBegin(GL_POLYGON);   //TreeTop
 float x2=780,y2=400;
 float r2=50;
 for(int i=0;i<=360;i++){
        glColor3f(0.0f,i/360.0f,0.0f);
	x2=x2+r2*cos(i);
        y2=y2+r2*sin(i);
        glVertex2f(x2,y2);
  }
glEnd();


glBegin(GL_POLYGON);   //TreeBottom
 float x4=790,y4=85;
 float r4=20;
 for(int i=0;i<=360;i++){
        glColor3f(i/360.0f,2*i/360.0f,0.0f);
	x4=x4+r4*cos(i);
        y4=y4+r4*sin(i);
        glVertex2f(x4,y4);
  }
glEnd();

glBegin(GL_POLYGON);   //TreeStem
 glColor3f(0.6f,0.0f,0.0f);
 glVertex2f(790,100);
 glColor3f(0.0f,0.0f,0.0f);
 glVertex2f(790,395);
 glColor3f(0.6f,0.0f,0.0f);
 glVertex2f(815,395);
 glColor3f(0.0f,0.0f,0.0f);
 glVertex2f(815,100);
glEnd();


glBegin(GL_POLYGON);   //WindowRight
 glColor3f(0.0f,0.0f,0.0f);
 glVertex2f(750,600);
 glColor3f(0.8f,0.2f,0.4f);
 glVertex2f(750,650);
 glColor3f(0.8f,0.2f,0.4f);
 glVertex2f(850,650);
 glColor3f(0.0f,0.0f,0.0f);
 glVertex2f(850,600);
glEnd();

glBegin(GL_POLYGON);   //WindowRightMid
 glColor3f(1.0f,0.8f,0.9f);
 glVertex2f(785,600);
 glColor3f(0.8f,0.9f,0.6f);
 glVertex2f(785,650);
 glColor3f(0.4f,0.8f,0.9f);
 glVertex2f(815,650);
 glColor3f(0.9f,0.9f,0.9f);
 glVertex2f(815,600);
glEnd();


glBegin(GL_POLYGON);   //WindowLeft
 glColor3f(0.0f,0.0f,0.0f);
 glVertex2f(350,500);
 glColor3f(0.8f,0.2f,0.4f);
 glVertex2f(350,550);
 glColor3f(0.8f,0.2f,0.4f);
 glVertex2f(450,550);
 glColor3f(0.0f,0.0f,0.0f);
 glVertex2f(450,500);
glEnd();

glBegin(GL_POLYGON);   //WindowLeftMid
 glColor3f(1.0f,0.8f,0.9f);
 glVertex2f(385,500);
 glColor3f(0.7f,0.8f,0.9f);
 glVertex2f(385,550);
 glColor3f(0.9f,0.6f,0.8f);
 glVertex2f(415,550);
 glColor3f(0.8f,0.5f,0.8f);
 glVertex2f(415,500);
glEnd();

glBegin(GL_POLYGON);   //TreeTriangleTop
    glColor3f(0.0f,0.8f,0.0f);
    glVertex2f(350,400);
    glColor3f(0.9f,0.8f,0.8f);
    glVertex2f(375,480);
    glColor3f(0.0f,0.8f,0.0f);
    glVertex2f(400,400);

glEnd();

glBegin(GL_POLYGON);   //TreeTriangleBottom
 float x5=368,y5=232;
 float r5=12;
 for(int i=0;i<=360;i++){
        glColor3f(i/360.0f,0.0f,4*i/360.0f);
	x5=x5+r5*cos(i);
        y5=y5+r5*sin(i);
        glVertex2f(x5,y5);
  }


glEnd();
glBegin(GL_POLYGON);   //TreeStemLeft
 glColor3f(0.6f,0.0f,0.0f);
 glVertex2f(370,240);
 glColor3f(0.0f,0.0f,0.0f);
 glVertex2f(370,400);
 glColor3f(0.6f,0.0f,0.0f);
 glVertex2f(380,400);
 glColor3f(0.0f,0.0f,0.0f);
 glVertex2f(380,240);
glEnd();



glBegin(GL_POLYGON);   //Path 1
 glColor3f(0.4f,0.2f,0.4f);
 glVertex2f(525,375);
 glColor3f(0.0f,0.0f,0.0f);
 glVertex2f(550,400);
 glColor3f(0.6f,0.2f,0.6f);
 glVertex2f(650,385);
 glColor3f(0.0f,0.0f,0.0f);
 glVertex2f(625,365);
glEnd();

glBegin(GL_POLYGON);   //Path 2
 glColor3f(0.4f,0.0f,0.4f);
 glVertex2f(525-30,375-30);
 glColor3f(0.0f,0.0f,0.0f);
 glVertex2f(550-30,400-30);
 glColor3f(0.6f,0.0f,0.6f);
 glVertex2f(650-30,385-30);
 glColor3f(0.0f,0.0f,0.0f);
 glVertex2f(625-30,365-30);
glEnd();

glBegin(GL_POLYGON);   //Path 3
 glColor3f(0.4f,0.2f,0.4f);
 glVertex2f(525-60,375-60);
 glColor3f(0.0f,0.4f,0.0f);
 glVertex2f(550-60,400-60);
 glColor3f(0.6f,0.0f,0.6f);
 glVertex2f(650-60,385-60);
 glColor3f(0.4f,0.2f,0.0f);
 glVertex2f(625-60,365-60);
glEnd();


 glEnd();


 glFlush();
}

int main(int argc, char** argv)
{
 glutInit(&argc,argv);
 glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
 glutInitWindowSize(1000,1000);
 glutInitWindowPosition(400,400);
 glutCreateWindow("Ayush Somani House");
 glutDisplayFunc(display);
 init();
 glutMainLoop();

 return 0;
}
