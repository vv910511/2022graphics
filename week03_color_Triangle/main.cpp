#include <GL/glut.h>
void display(){
    glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
    glColor3f(1,1,0); //RGB Color=>Yellow
    glBegin(GL_TRIANGLES);
        glColor3f(1.0f,0.0f,0.0f); glVertex2f( 0.0f ,1.0f);
        glColor3f(0.0f,1.0f,0.0f); glVertex2f( 0.87f,-0.5f);
        glColor3f(0.0f,0.0f,1.0f); glVertex2f(-0.87f,-0.5f);
    glEnd();
    glutSwapBuffers();//swap double buffer
}

int main(int argc,char**argv){
    glutInit(&argc,argv);//��l��
    glutInitDisplayMode(GLUT_DOUBLE|GLUT_DEPTH);
    //Double | 3D
    glutCreateWindow("week03���m��T���ε���");
    glutDisplayFunc(display);//use Function=>display
    glutMainLoop();
    return 0;
}
