#include<iostream>
#include<GL/glut.h>
#include<math.h>

using namespace std;

void myinit(void)
{
glClearColor(1.0,1.0,1.0,0);
glMatrixMode(GL_PROJECTION);
glLoadIdentity();
gluOrtho2D(0.0,100.0,0.0,100.0);
glFlush();
}

void display(void)
   {
    glClear(GL_COLOR_BUFFER_BIT);
	//glClearColor(0.0,1.0,0.0,0.0);
    glColor3f(1.0,0.0,0.0);
	glPointSize(5.0);
	//glClearColor(0.0,1.0,0.0,0.0);
	//glClearColor(0.0,1.0,0.0,0.0);
    glBegin(GL_POINTS);
    int x0 = 70, x1 = 70, x2 = 20, x3 = 20, y0 = 40, y1 = 70, y2 = 70, y3 = 40;
	 for(float t=0; t<=1; t+=0.001) {
	 	float px= x0*(1-t)*(1-t)*(1-t) + 3*x1*t*(1-t)*(1-t)+ 3*x2*t*t*(1-t) + x3*t*t*t;
	 	float py= y0*(1-t)*(1-t)*(1-t) + 3*y1*t*(1-t)*(1-t)+ 3*y2*t*t*(1-t) + y3*t*t*t;
	 	glVertex2f(px,py);
	 }
	 
   int xx1=17,yy1=60,r=10;
    //cout<<"Enter the x,y and radius in respective order."<<endl;
    //cin>>x1>>y1>>r;
   glPointSize(10.0);
   glVertex2f(12,60);
   glVertex2f(18,65);
   glPointSize(5.0);
	for(float k=0;k<=360;k++)
	{
        double x,y;
         x=xx1+cos(k)*r;
         y=yy1+sin(k)*r; 
		glVertex2f(x,y);
	
  }
  int x01=30,y01=40;
  float r1=0.25;
    //cout<<"Enter the x,y and radius in respective order."<<endl;
    //cin>>x1>>y1>>r;
   
	for(float k=0;k<=360;k++)
	{
        double x,y;
         x=x01+r*cos(k);
         y=y01+r*sin(k); 
		glVertex2f(x,y);
	
  }
  int x02=60,y02=35;
  float r2=0.25;
    //cout<<"Enter the x,y and radius in respective order."<<endl;
    //cin>>x1>>y1>>r;
   
	for(int k=300;k<800;k++)
	{
        double x,y;
         x=x02+r*sin(k);
         y=y02+r*cos(k); 
		glVertex2f(x,y);
	
  }
  int x03=50,y03=37;
  float r3=0.001;
    //cout<<"Enter the x,y and radius in respective order."<<endl;
    //cin>>x1>>y1>>r;
   
	for(float k=0;k<=360;k++)
	{
        double x,y;
         x=x03+r*sin(k);
         y=y03+r*cos(k); 
		glVertex2f(x,y);
	
  }
  int xxx1 = 20, xxx2 = 70, yyy1 = 40, yyy2 = 40;
	 for(float t=0;t<=1;t+=0.001){
		 float p1x=xxx1*(1-t)+xxx2*(t);
		 float p2y=yyy1*(1-t)+yyy2*(t);
	 	 glVertex2f(p1x,p2y);
	
 }
int x11 = 15, x12 = 14, y11 = 70, y12 = 90;
	 for(float t=0;t<=1;t+=0.001){
		 float p11x=x11*(1-t)+x12*(t);
		 float p12y=y11*(1-t)+y12*(t);
	 	 glVertex2f(p11x,p12y);
	
 }

int x21 = 14, x22 = 13, y21 = 90, y22 = 88;
	 for(float t=0;t<=1;t+=0.001){
		 float p21x=x21*(1-t)+x22*(t);
		 float p22y=y21*(1-t)+y22*(t);
	 	 glVertex2f(p21x,p22y);
	 }
	 int x31 = 13, x32 = 12, y31 = 68, y32 = 82;
	 for(float t=0;t<=1;t+=0.001){
		 float p31x=x31*(1-t)+x32*(t);
		 float p32y=y31*(1-t)+y32*(t);
	 	 glVertex2f(p31x,p32y);
	 }
	 int x41 = 12, x42 = 10, y41 = 82, y42 = 80;
	 for(float t=0;t<=1;t+=0.001){
		 float p41x=x41*(1-t)+x42*(t);
		 float p42y=y41*(1-t)+y42*(t);
	 	 glVertex2f(p41x,p42y);
	 }
       
         glEnd();

	     glFlush();
 }

/*void drawCurve(void) {
	glClear(GL_COLOR_BUFFER_BIT);
	 glColor3f(1.0, 1.0, 1.0);
	 glPointSize(5);
	 glBegin(GL_POINTS);
	 
	 int x0 = 20, x1 = 70, x2 = 70, x3 = 20, y0 = 40, y1 = 40, y2 = 70, y3 = 70;
	 for(float t=0; t<=1; t+=0.001) {
	 	float px= x0*(1-t)*(1-t)*(1-t) + 3*x1*t*(1-t)*(1-t)+ 3*x2*t*t*(1-t) + x3*t*t*t;
	 	float py= y0*(1-t)*(1-t)*(1-t) + 3*y1*t*(1-t)*(1-t)+ 3*y2*t*t*(1-t) + y3*t*t*t;
	 	glVertex2f(px,py);
	 }
	 glEnd();

	 glFlush();
	 }
	 */
	/* x0 = 20, x1 = 40, x2 = 40, x3 = 20, y0 = 45, y1 = 45, y2 = 30, y3 = 30;
	 for(float t=0;t<=1;t+=0.001){
	 	float px= x0*(1-t)*(1-t)*(1-t) + 3*x1*t*(1-t)*(1-t)+ 3*x2*t*t*(1-t) + x3*t*t*t;
	 	float py= y0*(1-t)*(1-t)*(1-t) + 3*y1*t*(1-t)*(1-t)+ 3*y2*t*t*(1-t) + y3*t*t*t;
	 	glVertex2f(px,py);
	 }
	 
	 // line
	 
	 x1 = 20, x2 = 45, y1 = 45, y2 = 45;
	 for(float t=0;t<=1;t+=0.001){
		 float px=x1*(1-t)+x2*(t);
		 float py=y1*(1-t)+y2*(t);
	 	 glVertex2f(px,py);
	 }
	 
	 //  line
	 
	 x1 = 45, x2 = 45, y1 = 60, y2 = 30;
	 for(float t=0;t<=1;t+=0.001){
		 float px=x1*(1-t)+x2*(t);
		 float py=y1*(1-t)+y2*(t);
	 	 glVertex2f(px,py);
	 }
	 
	 // dot
	 
	 x0 = 50, x1 = 65, x2 = 70, x3 = 50, y0 = 55, y1 = 65, y2 = 55, y3 = 45;
	 for(float t=0;t<=1;t+=0.001){
	 	float px= x0*(1-t)*(1-t)*(1-t) + 3*x1*t*(1-t)*(1-t)+ 3*x2*t*t*(1-t) + x3*t*t*t;
	 	float py= y0*(1-t)*(1-t)*(1-t) + 3*y1*t*(1-t)*(1-t)+ 3*y2*t*t*(1-t) + y3*t*t*t;
	 	glVertex2f(px,py);
	 }
	 
	 
	 
	 
	 
	 glEnd();

	 glFlush();
}*/
int main(int argc,  char** argv)
{
glutInit(&argc,argv);
glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
glutInitWindowPosition(30,30);
glutInitWindowSize(1000,1000);
glutCreateWindow("fig");

myinit();
glutDisplayFunc(display);
//glutDisplayFunc(drawCurve);
glutMainLoop();

return 0;

}
