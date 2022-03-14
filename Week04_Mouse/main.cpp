#include <GL/glut.h>
#include <stdio.h>
int mouseX=0, mouseY=0,N=0;
int mx[100],my[100];
void display(){
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glColor3f(1,1,0); //Yellow
    glBegin(GL_LINE_LOOP);
        for(int i=0;i<N;i++)glVertex2f((mx[i]-150)/150.0,-(my[i]-150)/150.0);
    glEnd();
    glutSwapBuffers();
}
void mouse(int button, int state,int x,int y){
    mouseX=x; mouseY=y;
    if(state==GLUT_DOWN){
        printf("    glVertex2f((%d-150)/150.0,-(%d-150)/150.0);\n",x,y);
        mx[N]=x; my[N]=y;
        N++;
    }
}
int main(int ac,char**av,char**ev){
    glutInit(&ac,av);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_DEPTH);
    glutCreateWindow("Week04 Mouse");
    glutDisplayFunc(display);
    glutMouseFunc(mouse);
    glutMainLoop();
    return 0;
}

