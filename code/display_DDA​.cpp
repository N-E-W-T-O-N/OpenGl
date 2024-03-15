#include<iostream>
#include<GL/glut.h>
#include<cmath>
#include<GL/gl.h>
#include<GL/glu.h>
using namespace std;
void ​myinit​ (void)
{
glClearColor(0,1,1,0) ;
glMatrixMode(GL_PROJECTION) ;
glLoadIdentity();
gluOrtho2D(0,100,0,100) ;
}
void line(int x1,int y1,int x2,int y2)
{
//int x1=0,y1=0,x2=8,y2=6;
int dx= abs(x2 - x1), dy =(y2-y1);
float e= 2*dy ;
e = e-2*dx ;

int i = 0 , x = x1 , y = y1 , incx = 1 , incy = 1  ;
if(x2<x1) incx = -incx ;
if(y2<y1) incy = -incy ;

while(i<dx)
{
glVertex2f(x,y);
while(e>0)
{
y=y+incy;
}
e=e-2*dx ;
x=x+incx ;
e=e+2*dy ;
i++ ;
}
}
void display_DDA​ ()
{
glClear(GL_COLOR_BUFFER_BIT);
glColor3f(0.0f,10,0.0f);
glPointSize(6.0) ;
glBegin(GL_POINT) ;

line(0,27,18,0) ;

glEnd();
glFlush();
}

int main(int argc , char** argv)
{
glutInit(&argc, argv) ;
glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB) ;
glutInitWindowPosition(50,50) ;
glutInitWindowSize(500,500) ;
glutCreateWindow("DDA") ;

​myinit​();
glutDisplayFunc(display_DDA​) ;
glutMainLoop() ;
return 0;
}