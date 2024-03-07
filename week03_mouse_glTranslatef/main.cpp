///程式碼 拿week03_mouse來使用

#include <GL/glut.h>
#include <stdio.h>
float teapotX = 0,teapotY=0;
void mouse (int button,int state,int x,int y)
{
teapotX=(x-150)/150.0;
teapotY=-(y-150)/150.0;

}
void display()
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);///46行
    glPushMatrix();///49行
    glTranslatef(teapotX,teapotY,0);
    glutSolidTeapot( 0.3);
    glPopMatrix();///54行
    glutSwapBuffers();
}
int main(int argc,char*argv[])
{

    glutInit(&argc,argv);
    glutInitDisplayMode(GLUT_DOUBLE|GLUT_DEPTH);
    glutCreateWindow("week03 mouse");
    glutDisplayFunc(display);
    glutMouseFunc(mouse);

    glutMainLoop();
}
