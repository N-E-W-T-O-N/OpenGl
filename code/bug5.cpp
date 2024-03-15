

#include<iostream>
#include<GL/glut.h>
#include<math.h>
using namespace std;
void circle(float x,float y,float r)
{
for(float i=0.0;i<=360.0;i++)
glVertex2f(x+r*cos(i),y+r*sin(i));
}
void myinit(void){
	glClearColor(0.0,0.0,0.0,1.0);
	glColor3f(0.0,1.0,0.0);
	glPointSize(3.0);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(0.0,600,0.0,800);
}
void pda(float b0_x,float b1_x,float b2_x,float b3_x,float b0_y,float b1_y,float b2_y,float b3_y)
{
	float x,y,i;
	for(i=0.000;i<1.0;i+=0.001){
		x=b0_x*pow((1-i),3)+b1_x*3*i*pow((1-i),2)+b2_x*3*i*i*(1-i)+b3_x*i*i*i;
		y=b0_y*pow((1-i),3)+b1_y*3*i*pow((1-i),2)+b2_y*3*i*i*(1-i)+b3_y*i*i*i;
		glVertex2f(x,y);
	}
}
void display(){
	glClear(GL_COLOR_BUFFER_BIT);
	glPointSize(2);
	glBegin(GL_POINTS);
	float m=5.5;
	pda(m*60,m*20,m*20,m*60,m*70,m*60,m*30,m*20);	
	pda(m*60,m*100,m*100,m*60,m*70,m*60,m*30,m*20);
	pda(m*50,m*20,m*100,m*70,m*66,m*100,m*100,m*66);
	pda(m*60,m*60,m*60,m*70,m*70,m*70,m*70,m*23);
        pda(m*60,m*60,m*60,m*50,m*70,m*70,m*70,m*23);
	pda(m*55,m*55,m*55,m*40,m*90,m*90,m*90,m*110);
	pda(m*65,m*65,m*65,m*80,m*90,m*90,m*90,m*110);
	circle(5.5*80,5.5*110,5.5*2);
	circle(5.5*40,5.5*110,5.5*2);
	circle(5.5*60,5.5*60,5.5*2);
	circle(5.5*74,5.5*55,5.5*2);
	circle(5.5*46,5.5*55,5.5*2);
	circle(5.5*77,5.5*43,5.5*2);
	circle(5.5*43,5.5*43,5.5*2);
	circle(5.5*74,5.5*31,5.5*2);
	circle(5.5*46,5.5*31,5.5*2);
	pda(m*30,m*30,m*35,m*40,m*70,m*65,m*65,m*60);	
	pda(m*90,m*90,m*85,m*80,m*70,m*65,m*65,m*60);
	pda(m*40,m*30,m*30,m*37,m*30,m*27,m*24,m*20);	
	pda(m*80,m*90,m*90,m*83,m*30,m*27,m*24,m*20);
	pda(m*36,m*26,m*20,m*30,m*50,m*50,m*45,m*35);
	pda(m*84,m*94,m*100,m*90,m*50,m*50,m*45,m*35);
	float p=300,l=0.5;
	glEnd();
	glFlush();
}
int main(int argc,char** argv){
	glutInit(&argc,argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowSize(600,800);
	glutInitWindowPosition(0,0);
	glutCreateWindow("Bug");
	myinit();
	glutDisplayFunc(display);
	glutMainLoop();
	return 0;
}

