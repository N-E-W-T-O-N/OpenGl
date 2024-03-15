#include<iostream>
#include<GL/glut.h>
#include<GL/gl.h>
#include<math.h>
#include<stdlib.h>
using namespace std;

void myinit(void) {
        glClearColor(0.0, 0, 1.0, 1.0);
        glMatrixMode(GL_PROJECTION);
        glLoadIdentity();
        gluOrtho2D(0.0, 100.0, 00.0, 100.0);
        glFlush();
}

void drawline(void) {
         glClear(GL_COLOR_BUFFER_BIT);
         glColor3f(1.0, .0, 0.0);
         glPointSize(5);
         glBegin(GL_POINTS);

         int x0 = 20, x1 = 30, x2 = 60, x3 = 75 , x4 = 80 , x5 = 90 ;
         int y0 = 30, y1 = 60, y2 = 50, y3 = 35 , y4 = 40, y5 = 80;

         for(float t=0;t<=1;t+=0.001) {
                float px = x0*(1-t)*(1-t)*(1-t)*(1-t)*(1-t) + x1*5*(1-t)*(1-t)*(1-t)*(1-t)*t + x2*10*(1-t)*(1-t)*(1-t)*t*t + x3*10*(1-t)*(1-t)*t*t*t + x4*5*(1-t)*t*t*t*t + x5*t*t*t*t*t;
                float py = y0*(1-t)*(1-t)*(1-t)*(1-t)*(1-t) + y1*5*(1-t)*(1-t)*(1-t)*(1-t)*t + y2*10*(1-t)*(1-t)*(1-t)*t*t + y3*10*(1-t)*(1-t)*t*t*t + y4*5*(1-t)*t*t*t*t + y5*t*t*t*t*t;

                glVertex2f(px,py);
        }

          glColor3f(1.0, 1.0, 0.0);
         x3 = 20, y3 = 30, x4 = 30, y4 = 60;
         for(float t=0;t<=1;t+=0.001){
                float px = x3*(1-t) + x4*(t);
                float py = y3*(1-t) + y4*(t);
                glVertex2f(px,py);
         }

          glColor3f(1.0, 1.0, 1.0);
         x3 = 30, y3 = 60, x4 = 60, y4 = 50;
         for(float t=0;t<=1;t+=0.001){
                float px = x3*(1-t) + x4*(t);
                float py = y3*(1-t) + y4*(t);
                glVertex2f(px,py);
         }

          glColor3f(0.0, 1.0, 0.0);
         int s5 = 60, t5 = 50, x6 = 75, y6 = 35;
         for(float t=0;t<=1;t+=0.001){
                 float px= s5*(1-t)+x6*(t);
                 float py= t5*(1-t)+y6*(t);
                 glVertex2f(px,py);
         }

          glColor3f(1.0, 1.0, 0.0);
         int x7= 75, y7 = 35, x8 = 80, y8 = 40;
         for(float t=0;t<=1;t+=0.001){
                float px=x7*(1-t)+x8*(t);
                float py=y7*(1-t)+y8*(t);
                glVertex2f(px,py);
         }

          glColor3f(0.0, 1.0, 1.0);
         int s1= 80, r1 = 40, s2 = 90, r2 = 80;
         for(float t=0;t<=1;t+=0.001){
                float px=s1*(1-t)+s2*(t);
                float py=r1*(1-t)+r2*(t);
                glVertex2f(px,py);
         }

        glEnd();

        glFlush();
}

int main(int argc, char *argv[]) {
        glutInit(&argc, argv);
        glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
        glutInitWindowPosition(50,50);
        glutInitWindowSize(600, 600);
        glutCreateWindow("Nitish");
        myinit();
        glutDisplayFunc(drawline);
        glutMainLoop();
        return 0;
}
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                        
