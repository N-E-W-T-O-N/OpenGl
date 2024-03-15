import OpenGL
from OpenGL.GL import  *
from OpenGL.GLU import *
from OpenGL.GLUT import *
def myiniti():
    glLoadIdentity()
    glClearColor(1,1,0,0)
    glMatrixMode(GL_PROJECTION)
    gluOrtho2D(0.0, 100.0, 00.0, 100.0)
    glFlush()

def drawline():
    glclear(GL_COLOR_BUFFER_BIT)
    glclear(1,0,1)
    glPointSize(7)
    glBegin(GL_POINTS)
    x1=5
    y1=50
    x2=27
    y2=50
    for t in range(0,1.001,0.001):
        px = x1*(1-t) + x2*t
        py = y2*(1-t) + y2*t
        glVertex2f(px,py)
    glEnd()
    glFlush()	

glutInit()
glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB)
glutInitWindowPosition(120,80)
glutInitWindowSize(700, 500)	
glutCreateWindow("NEWTON")
myiniti()
#glutDisplayFunc(drawline)
glutMainLoop()


    