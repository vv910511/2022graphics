#include <GL/glut.h>
float Angle=0;
int OldX=0;

void display(){
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glPushMatrix();
        glRotatef(Angle,0,0,1);
        glColor3f(1,1,0);
        glutSolidTeapot(0.3);
    glPopMatrix();
    glutSwapBuffers();
}

void mouse(int button,int state,int x,int y){
    OldX=x;
}

void motion(int x,int y){
    Angle+=(x-OldX);
    display();
}

int main(int ac,char**av,char**ev){
    glutInit(&ac,av);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_DEPTH);
    glutCreateWindow("Week05 Rotate");
    glutDisplayFunc(display);
    glutMouseFunc(mouse);
    glutMotionFunc(motion);
    glutMainLoop();
    return 0;
}
