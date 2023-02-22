#include <GL/glut.h>
void display()
{
	glutSolidTeapot(0,3);
	glutSwapBuffers();
}
int main(int argc, char *argv[])
{
    glutInit(&argc, argv); //把GLUT開起來
	glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH);//
	glutCreateWindow("GLUT Shapes");//要開視窗
	glutDisplayFunc(display);
	glutMainLoop();
}
