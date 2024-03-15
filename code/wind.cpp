#include <stdio.h>
#include <math.h>
#include <GL/gl.h>
#include <GL/glut.h>

static float current_angle = 0.0f;
static  float step_angle = 0.2f;
static  float center_x = 168.0f;
static float center_y = 180.0f;

void init() {
    glClearColor(0.0, 0.0, 0.0, 0.0);
    glMatrixMode(GL_PROJECTION);
    gluOrtho2D(0.0, 400, 0.0, 300.0);
}

void drawTurbine() {
    // draw the tower
    glBegin(GL_LINES);
    glColor3f(1.0, 1.0, 1.0);
    glVertex2f(160, 40);
    glVertex2f(163, 180);
    glVertex2f(160, 40);
    glVertex2f(175, 40); 
    glVertex2f(175, 40);
    glVertex2f(172, 180);
    glEnd();
    // Rotate object
    glPushMatrix();

    glTranslatef( center_x, center_y, 0.0f );
    glRotatef(current_angle, 0, 0, 1);
    current_angle += step_angle;
    glTranslatef(-center_x, -center_y, 0.0f );

    // draw first rotor blade
    glBegin(GL_TRIANGLES);
    glColor3f(1.0, 1.0, 1.0);
    glVertex2f(173, 180);
    glVertex2f(163, 180);
    glVertex2f(168, 270);
    glEnd();
    // draw second rotor blade
    glBegin(GL_TRIANGLES);
    glColor3f(1.0, 1.0, 1.0);
    glVertex2f(170, 174);
    glVertex2f(175, 180);
    glVertex2f(247, 140);
    glEnd();
    // draw third rotor blade
    glBegin(GL_TRIANGLES);
    glColor3f(1.0, 1.0, 1.0);
    glVertex2f(162, 180);
    glVertex2f(167, 174);
    glVertex2f(88, 140);
    glEnd();
    // circle in the middle
    float theta;
    glBegin(GL_POLYGON);
    glColor3f(1.0, 1.0, 1.0);
    for (int i = 0; i <= 360; i++) {
           theta = i * M_PI / 180;
           glVertex2f(168 + 7 * cos(theta), 180 + 6.5 * sin(theta));
    }
    glEnd();
    glPopMatrix();
}

void display() {
    glClear(GL_COLOR_BUFFER_BIT);
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
    drawTurbine();
    glFlush();
    glutSwapBuffers();
    glutPostRedisplay();
}

void idle() {
    display();
}

int main(int argc, char** argv) {
    glutInit(&argc, argv); 
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(700, 600);
    glutInitWindowPosition(10, 10); 
    glutCreateWindow("Wind Turbine");
    init(); 
    glutIdleFunc(idle);
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}