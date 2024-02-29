///week02_glut_glvertex2f_mspaint
///貼上剛剛的程式碼
#include <GL/glut.h>///第18行留下來,使用外掛
void display()
{
    glBegin(GL_POLYGON);///開始畫(多邊形
    glVertex2f((34-200)/200.0,-(76-200)/200.0);
    glVertex2f((48-200)/200.0,-(131-200)/200.0);
    glVertex2f((85-200)/200.0,-(59-200)/200.0);
    glEnd();///結束畫
     glBegin(GL_POLYGON);///開始畫(多邊形
    glVertex2f((383-200)/200.0,-(79-200)/200.0);
    glVertex2f((348-200)/200.0,-(146-200)/200.0);
    glVertex2f((312-200)/200.0,-(55-200)/200.0);
    glEnd();///結束畫
    glutSwapBuffers();
}
int main(int argc, char *argv[])///138行,main()函式
{
    glutInit(&argc, argv);///第140行,開啟GLUT功能
    glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH);///143行,設定顯示模式
    glutCreateWindow("GLUT Shapes");///145行,開一個GLUT視窗
    glutDisplayFunc(display);///148行,藥用display()函式來畫圖

    glutMainLoop();///174行,主要的迴圈,在這裡一直運作,不結束
}

