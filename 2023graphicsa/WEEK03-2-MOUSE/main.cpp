#include <GL/glut.h>
#include <stdio.h>
float X=0,Y=0;
void display()
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glBegin(GL_POLYGON);
     glVertex2f(-0.540,0.788);
     glVertex2f(-0.500,0.692);
     glVertex2f(-0.488,0.660);
     glVertex2f(-0.484,0.576);
     glVertex2f(-0.168,0.800);
     glVertex2f(-0.192,0.656);
     glVertex2f(-0.240,0.568);
     glVertex2f(-0.264,0.568);
    glEnd();

    glBegin(GL_LINE_LOOP);
       glVertex2f(-0.148,0.548);
     glVertex2f(-0.244,0.512);
     glVertex2f(-0.256,0.456);
     glVertex2f(-0.268,0.396);
     glVertex2f(-0.268,0.308);
     glVertex2f(-0.272,0.284);
     glVertex2f(-0.272,0.244);
     glVertex2f(-0.240,0.224);
     glVertex2f(-0.192,0.224);
     glVertex2f(-0.116,0.196);
     glVertex2f(-0.080,0.204);
     glVertex2f(-0.020,0.236);
     glVertex2f(0.004,0.272);
     glVertex2f(0.028,0.328);
     glVertex2f(0.028,0.380);
     glVertex2f(0.028,0.468);
     glVertex2f(0.024,0.508);
     glVertex2f(-0.024,0.552);
     glVertex2f(-0.032,0.564);
     glVertex2f(-0.180,0.604);
     glVertex2f(-0.192,0.604);
     glVertex2f(-0.248,0.604);
     glVertex2f(-0.280,0.600);
      glVertex2f(-0.356,0.564);
     glVertex2f(-0.688,-0.032);
     glVertex2f(-0.832,0.020);
     glVertex2f(-0.700,0.004);
     glVertex2f(-0.652,0.004);
     glVertex2f(-0.624,0.016);
     glVertex2f(-0.588,0.016);
     glVertex2f(-0.556,0.012);
     glVertex2f(-0.508,0.012);
     glVertex2f(-0.472,0.008);
     glVertex2f(-0.440,0.008);
     glVertex2f(-0.416,0.000);
     glVertex2f(-0.364,0.004);
     glVertex2f(-0.240,-0.028);
     glVertex2f(-0.156,-0.028);

    glEnd();
    glutSwapBuffers();
}
void mouse(int button,int state,int x,int y)
{
    float X=(x-250)/250.0;
    float Y=-(y-250)/250.0;
    if(state==GLUT_DOWN){
        printf("     glVertex2f(%.3f,%.3f);\n",X,Y);
    }
}
int main(int argc, char* argv[] )
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_RGB|GLUT_DOUBLE|GLUT_DEPTH);
    glutCreateWindow("week03");

    glutDisplayFunc(display);
    glutInitWindowSize(500,500);
    glutMouseFunc(mouse);
    glutMainLoop();
}
