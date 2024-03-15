#include<stdio.h>
#include<time.h>
#include<math.h>
#include<string.h>
#include<iostream>
#include<GL/glut.h>
#include<GL/gl.h>
#include<GL/glu.h>

struct Point{
GLfloat x;
GLfloat y;
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
 glBegin(GL_POINTS);
{
 Point p1= {30,60};
 Point p2= {70,60};	 
 draw_dda(p1,p2);
 }
 {
 Point p1= {30,60};
 Point p2= {40,80};	 
 draw_dda(p1,p2);
 }
 {
 Point p1= {40,80};
 Point p2= {80,80};	 
 draw_dda(p1,p2);
 }
 {
 Point p1= {70,60};
 Point p2= {80,80};	 
 draw_dda(p1,p2);
 }
{
 Point p1= {68.5,60};
 Point p2= {68.5,40};	 
 draw_dda(p1,p2);
}

{
 Point p1= {31.8,60};
 Point p2= {31.8,45};	 
 draw_dda(p1,p2);
}


{
 Point p1= {31.8,60};
 Point p2= {31.8,45};	 
 draw_dda(p1,p2);
}





{
 Point p1= {31.8,60};
 Point p2= {31.8,45};	 
 draw_dda(p1,p2);
}
{
 Point p1= {31.8,60};
 Point p2= {31.8,45};	 
 draw_dda(p1,p2);
}
{
 Point p1= {31.8,60};
 Point p2= {31.8,45};	 
 draw_dda(p1,p2);
}
glEnd();

glBegin(GL_POLYGON);
 glColor3f(1.0f,0.0f,0.0f);
 glVertex2f(320,450);
 glColor3f(1.0f,1.0f,1.0f);
 glVertex2f(320,600);
 glColor3f(1.0f,0.0f,0.0f);
 glVertex2f(680,600);
 glColor3f(1.0f,1.0f,1.0f);
 glVertex2f(680,400);
glEnd();


glBegin(GL_POLYGON);
 glColor3f(1.0f,0.0f,0.0f);
 glVertex2f(300,600);
 glColor3f(1.0f,1.0f,1.0f);
 glVertex2f(400,800);
 glColor3f(1.0f,0.0f,0.0f);
 glVertex2f(800,800);
 glColor3f(1.0f,1.0f,1.0f);
 glVertex2f(700,600);
glEnd();



glBegin(GL_POLYGON);
 glColor3f(1.0f,0.0f,0.0f);
 glVertex2f(300,600);
 glColor3f(1.0f,1.0f,1.0f);
 glVertex2f(400,800);
 glColor3f(1.0f,0.0f,0.0f);
 glVertex2f(800,800);
 glColor3f(1.0f,1.0f,1.0f);
 glVertex2f(700,600);
glEnd();


/*
 {
 Point p1= {53,53};
 Point p2= {53,49};	 
 draw_dda(p1,p2);
 }
 {
 Point p1= {52,53};
 Point p2= {52,49};	 
 draw_dda(p1,p2);
 }
{
 Point p1= {52,53};
 Point p2= {53,53};	 
 draw_dda(p1,p2);
}


 {
 Point p1= {58,51};
 Point p2= {58,57};	 
 draw_dda(p1,p2);
 }
 {
 Point p1= {52,59};
 Point p2= {54,55};	 
 draw_dda(p1,p2);
 }
 {
 Point p1= {52,59};
 Point p2= {50,55};	 
 draw_dda(p1,p2);
 }
 {
 Point p1= {58,57};
 Point p2= {56,61};	 
 draw_dda(p1,p2);
 }
 {
 Point p1= {52,59};
 Point p2= {56,61};	 
 draw_dda(p1,p2);
 }
 {
 Point p1= {58,57};
 Point p2= {54,55};	 
 draw_dda(p1,p2);
 }

{
 Point p1= {30,20};
 Point p2= {30,25};	 
 draw_dda(p1,p2);
 }
{
 Point p1= {30,20};
 Point p2= {60,20};	 
 draw_dda(p1,p2);
 }
{
 Point p1= {60,20};
 Point p2= {60,25};	 
 draw_dda(p1,p2);
 }
{
 Point p1= {55,25};
 Point p2= {60,25};	 
 draw_dda(p1,p2);
 }
{
 Point p1= {30,25};
 Point p2= {35,25};	 
 draw_dda(p1,p2);
 }
{
 Point p1= {43,30};
 Point p2= {48,30};	 
 draw_dda(p1,p2);
 }
{
 Point p1= {55,25};
 Point p2= {48,30};	 
 draw_dda(p1,p2);
 }
{
 Point p1= {43,30};
 Point p2= {35,25};	 
 draw_dda(p1,p2);
 }
{
 Point p1 = {35,20};
 GLfloat rad = 2.5;
 draw_circle(p1,rad);
}
{
 Point p1 = {55,20};
 GLfloat rad = 2.5;
 draw_circle(p1,rad);
}
{
 Point p1= {0,35};
 Point p2= {47,35};	 
 draw_dda(p1,p2);
 }
{
 Point p1= {128,35};
 Point p2= {57,35};	 
 draw_dda(p1,p2);
 }
{
 Point p1= {0,10};
 Point p2= {128,10};	 
 draw_dda(p1,p2);
 }
{
 Point p1= {23,70};
 Point p2= {20,35};	 
 draw_dda(p1,p2);
 }


{
 Point p1= {57,54};
 Point p2= {55,53};	 
 draw_dda(p1,p2);
 }
{
 Point p1= {55,51};
 Point p2= {57,52};	 
 draw_dda(p1,p2);
 }
{
 Point p1= {57,52};
 Point p2= {57,54};	 
 draw_dda(p1,p2);
 }
{
 Point p1= {55,51};
 Point p2= {55,53};	 
 draw_dda(p1,p2);
 }


{
 Point p1= {23,70};
 Point p2= {26,35};	 
 draw_dda(p1,p2);
 }

{
 Point p1= {23,70};
 Point p2= {28,65};	 
 draw_dda(p1,p2);
 }
{
 Point p1= {23,70};
 Point p2= {30,67};	 
 draw_dda(p1,p2);
 }
{
 Point p1= {30,67};
 Point p2= {28,65};	 
 draw_dda(p1,p2);
 }

{
 Point p1= {23,70};
 Point p2= {29,75};	 
 draw_dda(p1,p2);
 }
{
 Point p1= {23,70};
 Point p2= {26,77};	 
 draw_dda(p1,p2);
 }
{
 Point p1= {29,75};
 Point p2= {26,77};	 
 draw_dda(p1,p2);
 }

{
 Point p1= {23,70};
 Point p2= {17,75};	 
 draw_dda(p1,p2);
 }
{
 Point p1= {23,70};
 Point p2= {20,77};	 
 draw_dda(p1,p2);
 }
{
 Point p1= {17,75};
 Point p2= {20,77};	 
 draw_dda(p1,p2);
 }

{
 Point p1= {23,70};
 Point p2= {18,65};	 
 draw_dda(p1,p2);
 }
{
 Point p1= {23,70};
 Point p2= {16,67};	 
 draw_dda(p1,p2);
 }
{
 Point p1= {18,65};
 Point p2= {16,67};	 
 draw_dda(p1,p2);
 }

{
 Point p1= {52,49};
 Point p2= {47,35};	 
 draw_dda(p1,p2);
 }
{
 Point p1= {53,49};
 Point p2= {57,35};	 
 draw_dda(p1,p2);
 }
 */
 glEnd();


 glFlush();
}

int main(int argc, char** argv)
{
 glutInit(&argc,argv);
 glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
 glutInitWindowSize(1000,1000);
 glutInitWindowPosition(400,400);
 glutCreateWindow("square");
 glutDisplayFunc(display);
 init();
 glutMainLoop();

 return 0;
}
