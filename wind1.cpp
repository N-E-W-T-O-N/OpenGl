#include <GL/gl.h>
#include <GL/glut.h>
#include <math.h>

const double PI = 3.141592654;

int frameNumber = 0;

void drawWindmill() {
	int i;
	glColor3f(0.2f, 0.2f, 0.3f);	//0.8 0.8 .9
	glBegin(GL_POLYGON);
	glVertex2f(-0.05f, 0);
	glVertex2f(0.05f, 0);
	glVertex2f(0.05f, 3);
	glVertex2f(-0.05f, 3);
	glEnd();
	glTranslatef(0, 3, 0);
	glRotated(frameNumber * (180.0/46), 0, 0, 1);
	glColor3f(1.0f, 0.5f, 0.0f);
	for (i = 0; i < 3; i++) {
		glRotated(120, 0, 0, 1);  // Note: These rotations accumulate.
		glBegin(GL_POLYGON);
		glVertex2f(0,0);
		glVertex2f(0.5f, 0.1f);
		glVertex2f(1.5f,0);
		glVertex2f(0.5f, -0.1f);
		glEnd();
	}
}

void display() {

	glClear(GL_COLOR_BUFFER_BIT); // Fills the scene with blue.
	glLoadIdentity();

/*
	glPushMatrix();
	glTranslated(0.75,1,0);
	glScaled(0.6,0.6,1);
	drawWindmill();
	glPopMatrix();
*/

	glPushMatrix();
	glTranslated(1.0,1.0,0.4);	//2.6 1.6 0
	//glScaled(0.4,0.4,1);
	glScaled(0.5,0.5,1);
	drawWindmill();
	glPopMatrix();

/*	glPushMatrix();
	glTranslated(3.7,0.8,0);
	glScaled(0.7,0.7,1);
	drawWindmill();
	glPopMatrix();
*/
	glutSwapBuffers();

}  // end display

void doFrame(int v) {
    frameNumber++;
    glutPostRedisplay();
    glutTimerFunc(30,doFrame,0);
}

void init() {
	glClearColor(0.5f, 0.5f, 1, 1);
		// The next three lines set up the coordinates system.
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	glOrtho(0, 7, -1, 4, -1, 1);
	glMatrixMode(GL_MODELVIEW);
}


int main(int argc, char** argv) {
    glutInit(&argc, argv); 
    glutInitDisplayMode(GLUT_DOUBLE);
    glutInitWindowSize(1400,700);
    glutInitWindowPosition(100,100);  
    glutCreateWindow("OpenGL Windmill"); 

    init();

    glutDisplayFunc(display);   
    glutTimerFunc(200,doFrame,0); 

    glutMainLoop(); 
    return 0;
}  
