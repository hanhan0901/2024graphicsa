///week10-8
#include <GL/glut.h>
void myBody(){
        glPushMatrix();
        glColor3f(1,0,0);
        glutWireCube(0.6 );///mybody()
    glPopMatrix();
}
void myArm(){

    glPushMatrix();
        glColor3f(0,1,0);
        glScalef(1,0.4,0.4);
        glutWireCube(0.3);
    glPopMatrix();

}
float angle=0;///旋轉的角度
void display()
{
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

    myBody();///我的身體
    glPushMatrix();
        glTranslatef(0.3,0.3,0);///(3)掛到肩上
        glRotatef(angle,0,0,1);///(2)旋轉的角度
        glTranslatef(0.15,0,0);///(1)(右移)把旋轉中心,放在畫面的正中心
    myArm();///我的手臂
     glPushMatrix();
        glTranslatef(0.15,0,0);///(3)掛到肩上
        glRotatef(angle,0,0,1);///(2)旋轉的角度
        glTranslatef(0.15,0,0);///(1)(右移)把旋轉中心,放在畫面的正中心
    myArm();
    glPopMatrix();
glPopMatrix();

 glPushMatrix();
        glTranslatef(-0.3,0.3,0);///(3)掛到肩上
        glRotatef(-angle,0,0,1);///(2)旋轉的角度
        glTranslatef(-0.15,0,0);///(1)(右移)把旋轉中心,放在畫面的正中心
    myArm();///我的手臂
     glPushMatrix();
        glTranslatef(-0.15,0,0);///(3)掛到肩上
        glRotatef(-angle,0,0,1);///(2)旋轉的角度
        glTranslatef(-0.15,0,0);///(1)(右移)把旋轉中心,放在畫面的正中心
    myArm();
    glPopMatrix();
glPopMatrix();
	glutSwapBuffers();
}
void motion(int x,int y){
    angle=x;
    glutPostRedisplay();
}
int main(int argc, char*argv[])
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_DEPTH);
	glutCreateWindow("week10");

	glutDisplayFunc(display);
	glutMotionFunc(motion);///week10-7加上mouse motion
	glutIdleFunc(display);///有空就旋轉
	glutMainLoop();
}

