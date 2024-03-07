#include <GL/glut.h>
#include <stdio.h>
float teapotX = 0,teapotY=0;
float angle=0;
void mouse (int button,int state,int x,int y)
{
teapotX=(x-150)/150.0;
teapotY=-(y-150)/150.0;

}
void display()
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);///46¦æ
    glPushMatrix();///49¦æ
    ///glTranslatef(teapotX,teapotY,0);
    glRotated(angle,0,0,1);
    glutSolidTeapot( 0.3);
    glPopMatrix();///54¦æ
    glutSwapBuffers();
}
void motion(int x,int y)
{
    angle=x;
    display();
}
int main(int argc,char*argv[])
{

    glutInit(&argc,argv);
    glutInitDisplayMode(GLUT_DOUBLE|GLUT_DEPTH);
    glutCreateWindow("week03 mouse");
    glutDisplayFunc(display);
    glutMouseFunc(mouse);
    glutMotionFunc(motion);

    glutMainLoop();
}
