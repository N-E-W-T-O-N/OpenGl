#include<iostream>
#include<GL/glut.h>
#include<GL/gl.h>
#include<math.h>
#include<stdlib.h>
using namespace std;

static float latAngle=0.0;
static float longAngle=0.0;
static float Xangle=0.0,Yangle=0.0,Zangle=0.0;

static int isAnimate=0;
static int animationPeriod=100;

void drawScene(void){
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	glLoadIdentity();
	glTranslatef(0.0,0.0,-25.0);
	
	glRotatef(Zangle, 0.0, 0.0, 1.0);
	glRotatef(Yangle, 0.0, 1.0, 0.0);
	glRotatef(Xangle, 1.0, 0.0, 0.0);

	glColor3f(1.0,0.0,0.0);
	glutWireTorus(2.0,12.0,20,20);

	glRotatef(longAngle, 0.0, 0.0, 1.0);

	glTranslatef(12.0,0.0,1.0);
	glRotatef(latAngle, 0.0, 1.0, 0.0);
	glTranslatef(-12.0,0.0,0.0);

	glTranslatef(20.0,0.0,0.0);
	
	glColor3f(0.0, 1.0, .0);
	glutWireSphere(2.0, 10, 10);
	
	glutSwapBuffers();	
}

void animate(int value){
	if(isAnimate){
		latAngle+=5.0;
			if(latAngle>360.0) latAngle -=360.0;
		longAngle+=1.0;
			if(longAngle>360.0) longAngle-=360.0;
		
			glutPostRedisplay();
		glutTimerFunc(animationPeriod, animate, 1);
	}
}

void setup(void){
	glClearColor(1.0,.1,1.0,1.0);
	glEnable(GL_DEPTH_TEST);
}

void resize(int w, int h){
	glViewport(0,0,w,h);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	glFrustum(-5.0,5.0,-5.0,5.0,5.0,100.0);
	
	glMatrixMode(GL_MODELVIEW);
}

void keyInput(unsigned char key, int x, int y){
	switch(key){
	             case 27:
	              exit(0);
	              break;
		
				case ' ' :
				if(isAnimate) isAnimate=0;
					else{
					isAnimate=1;
						animate(1);
					}
					break;
		case 'x' :
			Xangle+=5.0;
				if(Xangle>360.0) Xangle-=360.0;
			glutPostRedisplay();
			break;
		case 'X' :
			Xangle-=5.0;
				if(Xangle<0.0) Xangle+=360.0;
			glutPostRedisplay();
			break;
		case 'y' :
			Yangle+=5.0;
				if(Yangle>360.0) Yangle-=360.0;
			glutPostRedisplay();
			break;
		case 'Y' :
			Yangle-=5.0;
				if(Yangle<0.0) Yangle+=360.0;
			glutPostRedisplay();
			break;
		case 'z' :
			Zangle+=5.0;
				if(Zangle>360.0) Zangle-=360.0;
			glutPostRedisplay();
			break;
		case 'Z' :
			Zangle-=5.0;
				if(Zangle<0.0) Zangle+=360.0;
			glutPostRedisplay();
			break;
		default:
			break;
	}
}

void specialKeyInput(int key, int x, int y){
	if(key == GLUT_KEY_DOWN) animationPeriod += 5;
	if(key == GLUT_KEY_UP) if(animationPeriod >5) animationPeriod -=5;
	glutPostRedisplay();
}

void printInteraction(void){
	cout<<"Interaction: "<<endl;
	cout<<"Press space to toggle between animation on and off."<<endl<<"Press the up/down arrow keys to speed up/slow down animation."<<endl<<"Press the x,X,y,Y,z,Z keys to rotate the scene."<<endl;

}

int main(int argc, char **argv){
	printInteraction();
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DOUBLE |GLUT_RGBA |GLUT_DEPTH);
	glutInitWindowSize(500, 500);
	glutInitWindowPosition(200,200);
	glutCreateWindow("ballAndTorus");
	glutDisplayFunc(drawScene);
	glutReshapeFunc(resize);
	glutKeyboardFunc(keyInput);
	glutSpecialFunc(specialKeyInput);
	setup();
	glutMainLoop();
}
