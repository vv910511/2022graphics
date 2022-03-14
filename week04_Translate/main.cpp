#include <GL/glut.h>

void myTeapot(float x,float y){
    glPushMatrix();
        glTranslatef(x,y,0); //¥k¤W
        glutSolidTeapot(0.3);
    glPopMatrix();
}

void display(){
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glColor3f(1,0,0);//¬õ¦â
    myTeapot( 0.5, 0.5);
    myTeapot(-0.5, 0.5);
    myTeapot( 0.5,-0.5);
    myTeapot(-0.5,-0.5);
    glutSwapBuffers();
}

int main(int ac,char**av,char**ev){
    glutInit(&ac,av);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_DEPTH);
    glutCreateWindow("Week04 Translate");
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}
