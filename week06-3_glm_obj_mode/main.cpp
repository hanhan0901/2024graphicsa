///1.File-New-Project,GLUT專案 week06-3_glm_obj_model
///2.貼入11行GLUT程式
///3.從課本範例學習source.zip有3個程式檔:transformation.c glm.h glm.c解壓縮
///4.要將專案做設定
///4.1 把glm.h 放到 桌面\week06-3_glm_obj_model 目錄裡
///4.2把glm.c 放到 桌面\week06-3_glm_obj_model 目錄,改檔名 glm.cpp
///4.3在專案裡按右鍵add file,加入glm.cpp
///4.4要把data資料夾,放到桌面\freeglut\bin目錄裡


#include <GL/glut.h>
#include "glm.h"
GLMmodel * pmodel = NULL;
void
drawmodel(void)
{
 if (!pmodel) {
	pmodel = glmReadOBJ("data/Al.obj");
	if (!pmodel) exit(0);
	glmUnitize(pmodel);
	glmFacetNormals(pmodel);
	glmVertexNormals(pmodel, 90.0);
}
 glmDraw(pmodel, GLM_SMOOTH | GLM_MATERIAL);
}
void display()
{
    glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
    drawmodel();
    glutSwapBuffers();
}

int main(int argc,char*argv[])
{

    glutInit(&argc,argv);
    glutInitDisplayMode(GLUT_DOUBLE|GLUT_DEPTH);
    glutCreateWindow("week06-3_glm_obj_model");
    glutDisplayFunc(display);
    glutMainLoop();


}
