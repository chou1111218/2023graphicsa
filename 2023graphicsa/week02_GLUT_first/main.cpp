#include <GL/glut.h>
void display()
{
    //glColor3f(0,1,0); //綠色
	//glutSolidTeapot(0.5);
	glBegin(GL_POLYGON);
        glColor3f(1,0,0); glVertex2f(0,-1);//紅色
        glColor3f(0,1,0); glVertex2f(-1,-1);//綠色
        glColor3f(0,0,1); glVertex2f(+1,-1);//藍色
    glEnd();//結束畫

    glColor3f(1,1,0);
	glutSolidTeapot(0.3); //畫出實心茶壺
	glutSwapBuffers();
}
int main(int argc, char *argv[])
{
    glutInit(&argc, argv); //把GLUT開起來
	glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH);
	glutCreateWindow("GLUT Shapes");//要開視窗
	glutDisplayFunc(display);
	glutMainLoop();
}
