#include<iostream>
#include<GL/glut.h>
#include<GL/gl.h>
#include<math.h>
#include<stdlib.h>
using namespace std;


static float Xangle=0.0,Yangle=0.0,angle=0.0;

static int isAnimate=0;
static int animationPeriod=100;

void drawScene(void){
	glClear(GL_COLOR_BUFFER_BIT);
	glLoadIdentity();
	glTranslatef(Xangle,Yangle,-5.0);
	 glColor3f(1.0, .0, 0.0);
	 int t=10;
	while(t--){
	 angle+=20.0;
	glRotatef(angle, 1.0, 1.0, 1.0);
	
	glutWireSphere(2,50,50);
	glutPostRedisplay();
	}
	glutSwapBuffers();	
}

void setup(void){
	glClearColor(1.0,1.0,1.0,0.0);
}

void resize(int w, int h){
	glViewport(0,0,w,h);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	glFrustum(-1.0,1.0,-1.0,1.0,1.5,20.0);
	
	glMatrixMode(GL_MODELVIEW);
}

void keyInput(unsigned char key, int x, int y){
	switch(key){
		
				case 'r':
				  Xangle = Yangle = angle =0.0;
				  glutPostRedisplay();
					break;
		case ' ':
			angle+=10.0;
			glutPostRedisplay();
			break;
		
	case 27:
			exit(0);
			break;
		default:
			break;
	}
}

void specialKeyInput(int key, int x, int y){
	if(key == GLUT_KEY_DOWN) Yangle-=0.1;
	if(key == GLUT_KEY_UP) Yangle+=0.1;
	if(key == GLUT_KEY_DOWN) Xangle-=0.1;
	if(key == GLUT_KEY_UP) Xangle+=0.1;
	glutPostRedisplay();
}

void printInteraction(void){
	cout<<"Interaction: "<<endl;
	cout<<"Press space to toggle between animation on and off."<<endl<<"Press the up/down arrow keys to speed up/slow down animation."<<endl<<"Press the x,X,y,Y,z,Z keys to rotate the scene."<<endl;

}

int main(int argc, char **argv){
	printInteraction();
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DOUBLE|GLUT_RGBA);
	glutInitWindowSize(500, 500);
	glutInitWindowPosition(100,100);
	glutCreateWindow("MOVE SPHERE");
	glutDisplayFunc(drawScene);
	glutReshapeFunc(resize);
	glutKeyboardFunc(keyInput);
	glutSpecialFunc(specialKeyInput);
	setup();
	glutMainLoop();
}
