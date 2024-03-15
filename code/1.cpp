#include<GL/glut.h>
#include<GL/gl.h>
using namespace std ;



void mydisplay()
{
    glClearColor(0.2,0.2,0.2,0) ;
    glClear(GL_COLOR_BUFFER_BIT) ;
    glMatrixMode(GL_PROJECTION) ;
    //glLoadIdentity();
    gluOrtho2D(0.0,100,0,100) ;
    glPointSize(2.0) ;
    glColor3f(1.0,1.0,1.0) ;
    glBegin(GL_LINE);
    glVertex2i(0,0) ;
    glVertex2i(100,100) ;
    glEnd() ;
    glFlush() ;
}

int main(int argc , char **argv)
{
    glutInit(&argc , argv) ;
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB) ;
    glutInitWindowPosition(120,60) ;
    glutInitWindowSize(500,500) ;

    glutCreateWindow("Hare Krishna") ;
        
    glutDisplayFunc(mydisplay);
    glutMainLoop() ;
    return 0 ;
}