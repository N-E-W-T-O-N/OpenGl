import OpenGL
from OpenGL.GL import *
from OpenGL.GLUT import *

def drawTriangle():
    glClearColor(0.4, 0.4, 0.4, 0.4)
    glClear(GL_COLOR_BUFFER_BIT)
    glColor3f(1.0, 1.0, 1.0)
    glOrtho(-1.0, 1.0, -1.0, 1.0, -1.0, 1.0)
    glBegin(GL_TRIANGLES)
    glVertex3f(-0.7, 0.7, 0)
    glVertex3f(0.7, 0.7, 0)
    glVertex3f(0, -1, 0)
    glEnd()

    glFlush()

glutInit()
glutInitDisplayMode(GLUT_SINGLE)
glutInitWindowSize(500, 500)
glutInitWindowPosition(100, 100)
glutCreateWindow("OpenGL - Creating a triangle")
glutDisplayFunc(drawTriangle)
glutMainLoop()
