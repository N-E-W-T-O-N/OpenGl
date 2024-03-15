#include<iostream>
#include<math.h>
#include<GL/glut.h>
using namespace std;

void myinit(void) {
    glClearColor(0.8, 0.0, 0.2, 0.5);
	
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(0.0, 100.0, 00.0, 100.0);
	glFlush();
}
void dr(int xc,int yc,int x,int y){
      glVertex2f(xc+x,yc+y);
      glVertex2f(xc-x,yc+y);
      glVertex2f(xc+x,yc-y);
      glVertex2f(xc-x,yc-y);
      glVertex2f(xc+y,yc+x);
      glVertex2f(xc-y,yc+x);
      glVertex2f(xc+y,yc-x);
      glVertex2f(xc-y,yc-x);
     }
void dc(int xc,int yc, int r){
      int x=0,y=r;
      int d=3-2*r;
      dr(xc,yc,x,y);
      while(y>=x)
      {
         x++;
         if(d>0){
          y--;
          d=d+4*(x-y)+10;
          }
       else
        d=d+4*x+6;
        dr(xc,yc,x,y);
        //delay(50);
        }
      }
          
void ni(int x0,int x1,int y0,int y1){
    int dx = x1 - x0;
	int dy = y1 - y0;
	int steps = max(abs(dx), abs(dy));
	
	float x_incr = dx/(float)steps;
	float y_incr = dy/(float)steps;
	
	float x = x0,y=y0;
	for(int i=0; i<steps; i++) {
		 x = x + x_incr;
		y = y + y_incr;
		glVertex2f(x,y);
		}
	}

void display_DDA() {
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(.02, .02, 0.8);
	glPointSize(10);
	glBegin(GL_POINTS);
	ni(0,100,100,100);
    ni(0,0,0,100);
	ni(0,100,0,0);
	ni(100,100,0,100);
	dc(100,100,10);
	dc(0,0,10);
	dc(100,0,10);
	dc(0,100,10);
	dc(50,50,10);
	glEnd();
	glFlush();

}

int main(int argc, char *argv[]) {
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowPosition(150,150);
	glutInitWindowSize(500, 500);
	glutCreateWindow("DDA");
	myinit();
	glutDisplayFunc(display_DDA);
	glutMainLoop();
	return 0;
}
