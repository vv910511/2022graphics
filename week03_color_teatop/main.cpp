#include <GL/glut.h>
void display(){
    glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
    glColor3f(1,1,0); //RGB Color=>Yellow
    glutSolidTeapot(0.3); //0.3Teapot (實心)
    glutSwapBuffers();//swap double buffer
}

int main(int argc,char**argv){
    glutInit(&argc,argv);//初始化
    glutInitDisplayMode(GLUT_DOUBLE|GLUT_DEPTH);
    //Double | 3D
    glutCreateWindow("week03的視窗");
    glutDisplayFunc(display);//use Function=>display
    glutMainLoop();
    return 0;
}
