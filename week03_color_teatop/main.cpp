#include <GL/glut.h>
void display(){
    glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
    glColor3f(1,1,0); //RGB Color=>Yellow
    glutSolidTeapot(0.3); //0.3Teapot (���)
    glutSwapBuffers();//swap double buffer
}

int main(int argc,char**argv){
    glutInit(&argc,argv);//��l��
    glutInitDisplayMode(GLUT_DOUBLE|GLUT_DEPTH);
    //Double | 3D
    glutCreateWindow("week03������");
    glutDisplayFunc(display);//use Function=>display
    glutMainLoop();
    return 0;
}
