#include <GL/glut.h>
void display()
{
	glutSolidTeapot(0,3);
	glutSwapBuffers();
}
int main(int argc, char *argv[])
{
    glutInit(&argc, argv); //��GLUT�}�_��
	glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH);//
	glutCreateWindow("GLUT Shapes");//�n�}����
	glutDisplayFunc(display);
	glutMainLoop();
}
