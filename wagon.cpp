#include <cmath>
#include <GL/freeglut.h>
#include "skybox.cpp"


//------------------------wagon--back---------------------------------------
void wagonBack()
{
    glColor3d(1, 1, 1);
    glBindTexture(GL_TEXTURE_2D, txId[8]);
    glBegin(GL_QUADS);
      glTexCoord2f(0, 0);
      glVertex3f(9, -5, 5);
      glTexCoord2f(0.02, 0);
      glVertex3f(9, -5, -5);
      glTexCoord2f(0.02, 1);
      glVertex3f(9, 5, -5);
      glTexCoord2f(0, 1);
      glVertex3f(9, 5, 5);
    glEnd();
}

//-----------------------wagon---front-------------------------------------
void wagonFront()
{
    glColor3d(1, 1, 1);
    glBindTexture(GL_TEXTURE_2D, txId[8]);
    glBegin(GL_QUADS);
      glTexCoord2f(0, 0);
      glVertex3f(-9, -5, 5);
      glTexCoord2f(0.02, 0);
      glVertex3f(-9, -5, -5);
      glTexCoord2f(0.02, 1);
      glVertex3f(-9, 5, -5);
      glTexCoord2f(0, 1);
      glVertex3f(-9, 5, 5);
    glEnd();
}

//------------------------wagon--left-------------------------------------
void wagonLeft()
{
    glColor3d(1, 1, 1);
    glBindTexture(GL_TEXTURE_2D, txId[8]);
    glBegin(GL_QUADS);
      glTexCoord2f(1, 0);
      glVertex3f(9, -5, 5);
      glTexCoord2f(1, 1);
      glVertex3f(9, 5, 5);
      glTexCoord2f(0, 1);
      glVertex3f(-9, 5, 5);
      glTexCoord2f(0, 0);
      glVertex3f(-9, -5, 5);
    glEnd();
}

//------------------------wagon--right-------------------------------------
void wagonRight()
{
    glColor3d(1, 1, 1);
    glBindTexture(GL_TEXTURE_2D, txId[8]);
    glBegin(GL_QUADS);
      glTexCoord2f(1, 0);
      glVertex3f(9, -5, -5);
      glTexCoord2f(1, 1);
      glVertex3f(9, 5, -5);
      glTexCoord2f(0, 1);
      glVertex3f(-9, 5, -5);
      glTexCoord2f(0, 0);
      glVertex3f(-9, -5, -5);
    glEnd();
}

//------------------------wagon--up-------------------------------------
void wagonUp()
{
    glColor3d(1, 1, 1);
    glBindTexture(GL_TEXTURE_2D, txId[8]);
    glBegin(GL_QUADS);
      glTexCoord2f(0, 9.99);
      glVertex3f(-9, 5, 5);
      glTexCoord2f(0, 1);
      glVertex3f(-9, 5, -5);
      glTexCoord2f(1, 1);
      glVertex3f(9, 5, -5);
      glTexCoord2f(1, 9.99);
      glVertex3f(9, 5, 5);
    glEnd();
}

//---------------wagon ----------------------------------

void wagon()
{
    base();

    glPushMatrix();
      glTranslatef(0.0, 10.0, 0.0);
      wagonBack();
      wagonFront();
      wagonLeft();
      wagonRight();
      wagonUp();
    glPopMatrix();
}


