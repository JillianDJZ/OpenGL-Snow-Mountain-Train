#include <cmath>
#include <GL/freeglut.h>
#include "texture.cpp"

//------------------------------floor---------------------------------------
void floor()
{
    glColor3d(1, 1, 1);
    glBindTexture(GL_TEXTURE_2D, txId[7]);
    glBegin(GL_QUADS);
      glTexCoord2f(0, 1);
      glVertex3f(-200, 0, -200);
      glTexCoord2f(0, 0);
      glVertex3f(-200, 0, 200);
      glTexCoord2f(1, 0);
      glVertex3f(200, 0, 200);
      glTexCoord2f(1, 1);
      glVertex3f(200, 0, -200);
    glEnd();
}

//--------------------------back---------------------------------------
void back()
{
    glColor3d(1, 1, 1);
    glBindTexture(GL_TEXTURE_2D, txId[4]);
    glBegin(GL_QUADS);
      glTexCoord2f(0, 0);
      glVertex3f(-200, 0, -200);
      glTexCoord2f(1, 0);
      glVertex3f(200, 0, -200);
      glTexCoord2f(1, 1);
      glVertex3f(200, 400, -200);
      glTexCoord2f(0, 1);
      glVertex3f(-200, 400, -200);
    glEnd();
}

//--------------------------front-------------------------------------
void front()
{
    glColor3d(1, 1, 1);
    glBindTexture(GL_TEXTURE_2D, txId[5]);
    glBegin(GL_QUADS);
      glTexCoord2f(1, 0);
      glVertex3f(-200, 0, 200);
      glTexCoord2f(0, 0);
      glVertex3f(200, 0, 200);
      glTexCoord2f(0, 1);
      glVertex3f(200, 400, 200);
      glTexCoord2f(1, 1);
      glVertex3f(-200, 400, 200);
    glEnd();
}

//--------------------------left-------------------------------------
void left()
{
    glColor3d(1, 1, 1);
    glBindTexture(GL_TEXTURE_2D, txId[2]);
    glBegin(GL_QUADS);
      glTexCoord2f(1, 0);
      glVertex3f(-200, 0, -200);
      glTexCoord2f(1, 1);
      glVertex3f(-200, 400, -200);
      glTexCoord2f(0, 1);
      glVertex3f(-200, 400, 200);
      glTexCoord2f(0, 0);
      glVertex3f(-200, 0, 200);
    glEnd();
}

//--------------------------right-------------------------------------
void right()
{
    glColor3d(1, 1, 1);
    glBindTexture(GL_TEXTURE_2D, txId[3]);
    glBegin(GL_QUADS);
      glTexCoord2f(0, 0);
      glVertex3f(200, 0, -200);
      glTexCoord2f(0, 1);
      glVertex3f(200, 400, -200);
      glTexCoord2f(1, 1);
      glVertex3f(200, 400, 200);
      glTexCoord2f(1, 0);
      glVertex3f(200, 0, 200);
    glEnd();
}

//--------------------------up-------------------------------------
void up()
{
    glColor3d(1, 1, 1);
    glBindTexture(GL_TEXTURE_2D, txId[6]);
    glBegin(GL_QUADS);
      glTexCoord2f(0, 0);
      glVertex3f(-200, 400, 200);
      glTexCoord2f(1, 0);
      glVertex3f(200, 400, 200);
      glTexCoord2f(1, 1);
      glVertex3f(200, 400, -200);
      glTexCoord2f(0, 1);
      glVertex3f(-200, 400, -200);
    glEnd();
}


//---------------sky box ----------------------------------
void drawRoom()
{
    floor();
    back();
    front();
    left();
    right();
    up();
}
