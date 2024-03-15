#include<iostream>
#include<GL/glut.h>
#include<GL/gl.h>

using namespace std;

static float Xvalue=0.0,Yvalue=0.0;
static float Angle=0.0;

void drawScene(void)
{
    glClear(GL_COLOR_BUFFER_BIT);
    glLoadIdentity();
    glTranslatef(Xvalue,Yvalue,-5.0);
    glRotatef(Angle,1.0,1.0,1.0);
    glColor3f(1.0,1.0,1.0);
    glutWireSphere(0.5,16,8);
    glColor3f(1.0,1.0,1.0);
     glutSolidSphere(1.0,50,2);
    //glColor3f(1.0,0.0,0.0);
     //glutWireSphere(2,50,10);
       glColor3f(1.0,0.0,1.0);
     glutWireTeapot(2);
    glutSwapBuffers();
}
/*void drawScene1(void)
{
    glClear(GL_COLOR_BUFFER_BIT);
    glLoadIdentity();
    glTranslatef(Xvalue,Yvalue,-5.0);
    glRotatef(Angle,1.0,1.0,1.0);
    glColor3f(0.0,0.0,1.0);
    glutWireSphere(1,16,2);
    glColor3f(0.0,1.0,0.0);
     glutWireSphere(2.0,50,2);
    glColor3f(1.0,1.0,.0);
     glutWireSphere(0.5,50,10);
    glutSwapBuffers();
}*/
void setup(void)
{
  glClearColor(0.0,0.0,0.0,0.0);
}
void resize(int w,int h)
{
  glViewport(0,0,w,h);
  glMatrixMode(GL_PROJECTION);
  glLoadIdentity();
  glFrustum(-1.0,1.0,-1.0,1.0,1.5,20.0);
  glMatrixMode(GL_MODELVIEW);
  
  
}
void keyInput(unsigned char key ,int x,int y)
{
   switch(key)
   {
   case 'r':
         Xvalue=Yvalue=Angle=0.0;
         glutPostRedisplay();
         break;
   case ' ':
           Angle+=10.0; 
            glutPostRedisplay();
         break;
    case 27 :
           exit(0);
           break;
            default:
            break;          
   
    }
}
void specialKeyInput(int key,int x,int y)
{
 if(key==GLUT_KEY_UP) Yvalue+=0.1;
 if(key==GLUT_KEY_DOWN) Yvalue-=0.1;
 if(key==GLUT_KEY_LEFT) Xvalue-=0.1;
 if(key==GLUT_KEY_RIGHT) Xvalue+=0.1;
 glutPostRedisplay();
  
}

void printInteraction(void)
{
  cout<<"interaction"<<endl;
  cout<<"press the arrow key to move the sphere"<<endl;
  cout<<"press the space bar to rotate the sphere"<<endl;
  cout<<"press r to reset"<<endl;
}
int main(int argc,char **argv)
{
   printInteraction();
   glutInit(&argc,argv);
   glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGBA);
   glutInitWindowSize(500,500);
   glutInitWindowPosition(100,100);
   glutCreateWindow("moveSphere");
   glutDisplayFunc(drawScene);
   /*glutDisplayFunc(drawScene1);*/
   glutReshapeFunc(resize);
   glutKeyboardFunc(keyInput);
   glutSpecialFunc(specialKeyInput);
   setup();
   glutMainLoop();
   
   

}
