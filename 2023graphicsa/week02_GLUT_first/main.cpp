#include <GL/glut.h>
void display()
{
    //glColor3f(0,1,0); //���
	//glutSolidTeapot(0.5);
	glBegin(GL_POLYGON);
        glColor3f(1,0,0); glVertex2f(0,-1);//����
        glColor3f(0,1,0); glVertex2f(-1,-1);//���
        glColor3f(0,0,1); glVertex2f(+1,-1);//�Ŧ�
    glEnd();//�����e

    glColor3f(1,1,0);
	glutSolidTeapot(0.3); //�e�X��߯���
	glutSwapBuffers();
}
int main(int argc, char *argv[])
{
    glutInit(&argc, argv); //��GLUT�}�_��
	glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH);
	glutCreateWindow("GLUT Shapes");//�n�}����
	glutDisplayFunc(display);
	glutMainLoop();
}
