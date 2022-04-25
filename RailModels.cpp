#include <cmath>
#include <GL/freeglut.h>
#include "skybox.cpp"



//------------------------ engine--back---------------------------------------
void engineBack()
{
    glColor3d(1, 1, 1);
    glBindTexture(GL_TEXTURE_2D, txId[8]);
    glBegin(GL_QUADS);
      glTexCoord2f(0, 1);
      glVertex3f(9, -5, 5);
      glTexCoord2f(0.02, 1);
      glVertex3f(9, -5, -5);
      glTexCoord2f(0.02, 0);
      glVertex3f(9, 5, -5);
      glTexCoord2f(0, 0);
      glVertex3f(9, 5, 5);
    glEnd();
}

//----------------------- engine---front-------------------------------------
void engineFront()
{
    glColor3d(1, 1, 1);
    glBindTexture(GL_TEXTURE_2D, txId[8]);
    glBegin(GL_QUADS);
      glTexCoord2f(0.8, 1);
      glVertex3f(-9, -5, 5);
      glTexCoord2f(1, 1);
      glVertex3f(-9, -5, -5);
      glTexCoord2f(1, 0);
      glVertex3f(-4, 5, -5);
      glTexCoord2f(0.8, 0);
      glVertex3f(-4, 5, 5);
    glEnd();
}

//----------------------- engine--left-------------------------------------
void engineLeft()
{
    glColor3d(1, 1, 1);
    glBindTexture(GL_TEXTURE_2D, txId[8]);
    glBegin(GL_QUADS);
      glTexCoord2f(1, 1);
      glVertex3f(9, -5, 5);
      glTexCoord2f(1, 0);
      glVertex3f(9, 5, 5);
      glTexCoord2f(0, 0);
      glVertex3f(-4, 5, 5);
      glTexCoord2f(0, 1);
      glVertex3f(-9, -5, 5);
    glEnd();
}

//------------------------ engine--right-------------------------------------
void engineRight()
{
    glColor3d(1, 1, 1);
    glBindTexture(GL_TEXTURE_2D, txId[8]);
    glBegin(GL_QUADS);
      glTexCoord2f(1, 1);
      glVertex3f(9, -5, -5);
      glTexCoord2f(1, 0);
      glVertex3f(9, 5, -5);
      glTexCoord2f(0, 0);
      glVertex3f(-4, 5, -5);
      glTexCoord2f(0, 1);
      glVertex3f(-9, -5, -5);
    glEnd();
}

//------------------------ engine--up-------------------------------------
void engineUp()
{
    glColor3d(1, 1, 1);
    glBindTexture(GL_TEXTURE_2D, txId[8]);
    glBegin(GL_QUADS);
      glTexCoord2f(0, 0.01);
      glVertex3f(-4, 5, 5);
      glTexCoord2f(0, 0);
      glVertex3f(-4, 5, -5);
      glTexCoord2f(1, 0);
      glVertex3f(9, 5, -5);
      glTexCoord2f(1, 0.01);
      glVertex3f(9, 5, 5);
    glEnd();
}


//--------------- engine --------------------------------

void engine()
{
glPushMatrix();
      glTranslatef(0.0, 3, 0.0);
      engineBack();
      engineFront();
      engineLeft();
      engineRight();
      engineUp();
    glPopMatrix();
}

//------------------------wagon--back---------------------------------------
void wagonBack()
{
    glColor3d(1, 1, 1);
    glBindTexture(GL_TEXTURE_2D, txId[8]);
    glBegin(GL_QUADS);
      glTexCoord2f(0, 1);
      glVertex3f(9, -5, 5);
      glTexCoord2f(0.02, 1);
      glVertex3f(9, -5, -5);
      glTexCoord2f(0.02, 0);
      glVertex3f(9, 5, -5);
      glTexCoord2f(0, 0);
      glVertex3f(9, 5, 5);
    glEnd();
}

//-----------------------wagon---front-------------------------------------
void wagonFront()
{
    glColor3d(1, 1, 1);
    glBindTexture(GL_TEXTURE_2D, txId[8]);
    glBegin(GL_QUADS);
      glTexCoord2f(0, 1);
      glVertex3f(-9, -5, 5);
      glTexCoord2f(0.02, 1);
      glVertex3f(-9, -5, -5);
      glTexCoord2f(0.02, 0);
      glVertex3f(-9, 5, -5);
      glTexCoord2f(0, 0);
      glVertex3f(-9, 5, 5);
    glEnd();
}

//------------------------wagon--left-------------------------------------
void wagonLeft()
{
    glColor3d(1, 1, 1);
    glBindTexture(GL_TEXTURE_2D, txId[8]);
    glBegin(GL_QUADS);
      glTexCoord2f(1, 1);
      glVertex3f(9, -5, 5);
      glTexCoord2f(1, 0);
      glVertex3f(9, 5, 5);
      glTexCoord2f(0, 0);
      glVertex3f(-9, 5, 5);
      glTexCoord2f(0, 1);
      glVertex3f(-9, -5, 5);
    glEnd();
}

//------------------------wagon--right-------------------------------------
void wagonRight()
{
    glColor3d(1, 1, 1);
    glBindTexture(GL_TEXTURE_2D, txId[8]);
    glBegin(GL_QUADS);
      glTexCoord2f(1, 1);
      glVertex3f(9, -5, -5);
      glTexCoord2f(1, 0);
      glVertex3f(9, 5, -5);
      glTexCoord2f(0, 0);
      glVertex3f(-9, 5, -5);
      glTexCoord2f(0, 1);
      glVertex3f(-9, -5, -5);
    glEnd();
}

//------------------------wagon--up-------------------------------------
void wagonUp()
{
    glColor3d(1, 1, 1);
    glBindTexture(GL_TEXTURE_2D, txId[8]);
    glBegin(GL_QUADS);
      glTexCoord2f(0, 0.01);
      glVertex3f(-9, 5, 5);
      glTexCoord2f(0, 0);
      glVertex3f(-9, 5, -5);
      glTexCoord2f(1, 0);
      glVertex3f(9, 5, -5);
      glTexCoord2f(1, 0.01);
      glVertex3f(9, 5, 5);
    glEnd();
}

//---------------wagon ----------------------------------

void wagon()
{
    glPushMatrix();
      glTranslatef(0.0, 3, 0.0);
      wagonBack();
      wagonFront();
      wagonLeft();
      wagonRight();
      wagonUp();
    glPopMatrix();
}


//---------------station ----------------------------------

void station()
{
    //base-front
    glColor3d(1, 1, 1);
    glBindTexture(GL_TEXTURE_2D, txId[9]);
        glBegin(GL_QUADS);
            glTexCoord2f(0, 1);
            glVertex3f(-2, 3, 10);
            glTexCoord2f(0, 0);
            glVertex3f(-2, 0, 10);
            glTexCoord2f(1, 0);
            glVertex3f(2, 0, 10);
            glTexCoord2f(1, 1);
            glVertex3f(2, 3, 10);
        glEnd();

    //base-back
    glColor3d(1, 1, 1);
    glBindTexture(GL_TEXTURE_2D, txId[9]);
        glBegin(GL_QUADS);
            glTexCoord2f(0, 1);
            glVertex3f(-2, 3, -10);
            glTexCoord2f(0, 0);
            glVertex3f(-2, 0, -10);
            glTexCoord2f(1, 0);
            glVertex3f(2, 0, -10);
            glTexCoord2f(1, 1);
            glVertex3f(2, 3, -10);
        glEnd();

    //base-up
    glColor3d(1, 1, 1);
    glBindTexture(GL_TEXTURE_2D, txId[13]);
        glBegin(GL_QUADS);
            glTexCoord2f(0, 1);
            glVertex3f(-2, 3, 10);
            glTexCoord2f(0, 0);
            glVertex3f(2, 3, 10);
            glTexCoord2f(1, 0);
            glVertex3f(2, 3, -10);
            glTexCoord2f(1, 1);
            glVertex3f(-2, 3, -10);
        glEnd();

    //base-right
    glColor3d(1, 1, 1);
    glBindTexture(GL_TEXTURE_2D, txId[9]);
        glBegin(GL_QUADS);
            glTexCoord2f(0, 1);
            glVertex3f(2, 3, 10);
            glTexCoord2f(0, 0);
            glVertex3f(2, 0, 10);
            glTexCoord2f(1, 0);
            glVertex3f(2, 0, -10);
            glTexCoord2f(1, 1);
            glVertex3f(2, 3, -10);
        glEnd();

    //base-left
    glColor3d(1, 1, 1);
    glBindTexture(GL_TEXTURE_2D, txId[9]);
        glBegin(GL_QUADS);
            glTexCoord2f(0, 1);
            glVertex3f(-2, 3, 10);
            glTexCoord2f(0, 0);
            glVertex3f(-2, 0, 10);
            glTexCoord2f(1, 0);
            glVertex3f(-2, 0, -10);
            glTexCoord2f(1, 1);
            glVertex3f(-2, 3, -10);
        glEnd();

    //bracket
    glColor3d(1, 1, 1);
    glBindTexture(GL_TEXTURE_2D, txId[9]);
        glBegin(GL_QUADS);
            glTexCoord2f(0, 1);
            glVertex3f(-0.5, 3, -10);
            glTexCoord2f(0, 0);
            glVertex3f(0.5, 3, -10);
            glTexCoord2f(1, 0);
            glVertex3f(0.5, 13, -10);
            glTexCoord2f(1, 1);
            glVertex3f(-0.5, 13, -10);
        glEnd();

    //top-front
    glColor3d(1, 1, 1);
    glBindTexture(GL_TEXTURE_2D, txId[9]);
        glBegin(GL_QUADS);
            glTexCoord2f(0, 1);
            glVertex3f(-2, 14, 10);
            glTexCoord2f(0, 0);
            glVertex3f(-2, 13, 10);
            glTexCoord2f(1, 0);
            glVertex3f(2, 13, 10);
            glTexCoord2f(1, 1);
            glVertex3f(2, 14, 10);
        glEnd();

    //yellow line
    glColor3d(1, 1, 1);
    glBindTexture(GL_TEXTURE_2D, txId[12]);
        glBegin(GL_QUADS);
            glTexCoord2f(0, 1);
            glVertex3f(-2, 3.1, 7);
            glTexCoord2f(0, 0);
            glVertex3f(2, 3.1, 7);
            glTexCoord2f(1, 0);
            glVertex3f(2, 3.1, 6);
            glTexCoord2f(1, 1);
            glVertex3f(-2, 3.1, 6);
        glEnd();

    //top-back
    glColor3d(1, 1, 1);
    glBindTexture(GL_TEXTURE_2D, txId[9]);
        glBegin(GL_QUADS);
            glTexCoord2f(0, 1);
            glVertex3f(-2, 14, -10);
            glTexCoord2f(0, 0);
            glVertex3f(-2, 13, -10);
            glTexCoord2f(1, 0);
            glVertex3f(2, 13, -10);
            glTexCoord2f(1, 1);
            glVertex3f(2, 14, -10);
        glEnd();


    //top-up -1
    glColor3d(1, 1, 1);
    glBindTexture(GL_TEXTURE_2D, txId[9]);
        glBegin(GL_QUADS);
            glTexCoord2f(0, 1);
            glVertex3f(-2, 14, 10);
            glTexCoord2f(0, 0);
            glVertex3f(2, 14, 10);
            glTexCoord2f(1, 0);
            glVertex3f(2, 20, 0);
            glTexCoord2f(1, 1);
            glVertex3f(-2, 20, 0);
        glEnd();

    //top-up -2
    glColor3d(1, 1, 1);
    glBindTexture(GL_TEXTURE_2D, txId[9]);
        glBegin(GL_QUADS);
            glTexCoord2f(0, 1);
            glVertex3f(-2, 20, 0);
            glTexCoord2f(0, 0);
            glVertex3f(2, 20, 0);
            glTexCoord2f(1, 0);
            glVertex3f(2, 14, -10);
            glTexCoord2f(1, 1);
            glVertex3f(-2, 14, -10);
        glEnd();

    //top-down
    glColor3d(1, 1, 1);
    glBindTexture(GL_TEXTURE_2D, txId[9]);
        glBegin(GL_QUADS);
            glTexCoord2f(0, 1);
            glVertex3f(-2, 13, 10);
            glTexCoord2f(0, 0);
            glVertex3f(2, 13, 10);
            glTexCoord2f(1, 0);
            glVertex3f(2, 13, -10);
            glTexCoord2f(1, 1);
            glVertex3f(-2, 13, -10);
        glEnd();

    //top-right
    glColor3d(1, 1, 1);
    glBindTexture(GL_TEXTURE_2D, txId[9]);
        glBegin(GL_QUADS);
            glTexCoord2f(0, 1);
            glVertex3f(2, 14, 10);
            glTexCoord2f(0, 0);
            glVertex3f(2, 13, 10);
            glTexCoord2f(1, 0);
            glVertex3f(2, 13, -10);
            glTexCoord2f(1, 1);
            glVertex3f(2, 14, -10);
        glEnd();

    //top-right-triangles
    glColor3d(1, 1, 1);
    glBindTexture(GL_TEXTURE_2D, txId[9]);
        glBegin(GL_TRIANGLES);
            glTexCoord2f(0.5, 1);
            glVertex3f(2, 20, 0);
            glTexCoord2f(0, 0);
            glVertex3f(2, 14, 10);
            glTexCoord2f(1, 0);
            glVertex3f(2, 14, -10);
        glEnd();

    //top-left
    glColor3d(1, 1, 1);
    glBindTexture(GL_TEXTURE_2D, txId[9]);
        glBegin(GL_QUADS);
            glTexCoord2f(0, 1);
            glVertex3f(-2, 14, 10);
            glTexCoord2f(0, 0);
            glVertex3f(-2, 13, 10);
            glTexCoord2f(1, 0);
            glVertex3f(-2, 13, -10);
            glTexCoord2f(1, 1);
            glVertex3f(-2, 14, -10);
        glEnd();

    //top-right-triangles
    glColor3d(1, 1, 1);
    glBindTexture(GL_TEXTURE_2D, txId[9]);
        glBegin(GL_TRIANGLES);
            glTexCoord2f(0.5, 1);
            glVertex3f(-2, 20, 0);
            glTexCoord2f(0, 0);
            glVertex3f(-2, 14, 10);
            glTexCoord2f(1, 0);
            glVertex3f(-2, 14, -10);
        glEnd();
}

//--------------draw-station ----------------------------------

void drawStation(float medRadius)
{
    float angle1,ca1,sa1;
    float x1,z1;
    float toRad = 3.14159265/180.0;

    for (int i = 110; i < 190; i += 1){
        angle1 = i * toRad;
        ca1 = cos(angle1);
        sa1 = sin(angle1);
        x1 = (medRadius - 0.5)*sa1; z1 = (medRadius - 0.5)*ca1;
        glPushMatrix();
            glTranslatef(-x1, 0.2, -z1);
            glRotatef(i, 0.0, 1.0, 0.0);
            station();
        glPopMatrix();
    }

}


//--------------- tracks ------------------------------------

void tracks(float medRadius, float width)
{
    glDisable(GL_TEXTURE_2D);
    float inRad  = medRadius - width * 0.5;
    float outRad = medRadius + width * 0.5;
    float angle1,angle2, ca1,sa1, ca2,sa2;
    float x1,z1, x2,z2, x3,z3, x4,z4;  //four points of a quad
    float toRad = 3.14159265/180.0;  //Conversion from degrees to radians

    glColor3f(0.43, 0.43, 0.42);
    glBegin(GL_QUADS);
    float radius = inRad;
    for (int i = 0; i < 2; i++)   //Two parallel tracks (radius = inRad, outRad)
    {
        for (int i = 0; i < 360; i += 5)    //5 deg intervals
        {
            angle1 = i * toRad;       //Computation of angles, cos, sin etc
            angle2 = (i + 5) * toRad;
            ca1 = cos(angle1); ca2 = cos(angle2);
            sa1 = sin(angle1); sa2 = sin(angle2);
            x1 = (radius - 0.5)*sa1; z1 = (radius - 0.5)*ca1;
            x2 = (radius + 0.5)*sa1; z2 = (radius + 0.5)*ca1;
            x3 = (radius + 0.5)*sa2; z3 = (radius + 0.5)*ca2;
            x4 = (radius - 0.5)*sa2; z4 = (radius - 0.5)*ca2;

            glNormal3f(0., 1., 0.);       //Quad 1 facing up
            glVertex3f(x1, 1.0, z1);
            glVertex3f(x2, 1.0, z2);
            glVertex3f(x3, 1.0, z3);
            glVertex3f(x4, 1.0, z4);

            glNormal3f(-sa1, 0.0, -ca1);   //Quad 2 facing inward
            glVertex3f(x1, 0.0, z1);
            glVertex3f(x1, 1.0, z1);
            glNormal3f(-sa2, 0.0, -ca2);
            glVertex3f(x4, 1.0, z4);
            glVertex3f(x4, 0.0, z4);

            glNormal3f(sa1, 0.0, ca1);   //Quad 3 facing outward
            glVertex3f(x2, 1.0, z2);
            glVertex3f(x2, 0.0, z2);
            glNormal3f(sa2, 0.0, ca2);
            glVertex3f(x3, 0.0, z3);
            glVertex3f(x3, 1.0, z3);
        }
        radius = outRad;
    }
    glEnd();
    glEnable(GL_TEXTURE_2D);
}

//---------------sleeper ----------------------------------

void sleeper()
{
    glColor3d(1, 1, 1);
    glBindTexture(GL_TEXTURE_2D, txId[9]);
        glBegin(GL_QUADS);
            glTexCoord2f(0.1, 0.4);
            glVertex3f(-7, 0, -1);
            glTexCoord2f(0.1, 0.1);
            glVertex3f(-7, 0, 1);
            glTexCoord2f(0.8, 0.1);
            glVertex3f(7, 0, 1);
            glTexCoord2f(0.8, 0.4);
            glVertex3f(7, 0, -1);
        glEnd();
}

//-------------all-of-sleepers ----------------------------------

void allOfSleepers(float medRadius)
{
    float angle1,ca1,sa1;
    float x1,z1;
    float toRad = 3.14159265/180.0;

    for (int i = 0; i < 360; i += 2.5){
        angle1 = i * toRad;
        ca1 = cos(angle1);
        sa1 = sin(angle1);
        x1 = (medRadius - 0.5)*sa1; z1 = (medRadius - 0.5)*ca1;
        glPushMatrix();
            glTranslatef(x1, 0.2, z1);
            glRotatef((90.0+i), 0.0, 1.0, 0.0);
            sleeper();
        glPopMatrix();
    }

}

//---------------tunnel ----------------------------------

void tunnel()
{
    const int NSIDE = 22;   //Size of the array
    float vz[] = { -13.8, -10.0, -12.7, -8.9, -10.8, -6.4, -8.4, -4.5, -4.7, -2.3, 0.0, 0.0, 4.2, 2.2, 7.9, 4.4, 10.3, 6.3, 12.3, 9.0, 13.7,10.0};
    float vx[] = {0.0, 4.0 };
    float vy[] = { 0.0,  0.0, 10.8/2, 6.4/2, 25.0/2, 20.5/2, 39.2/2, 27.7/2, 52.8/2, 32.9/2, 59.5/2, 34.7/2, 55.1/2, 32.9/2, 41.8/2, 27.7/2, 27.8/2, 20.6/2, 13.4/2, 6.5/2, 0.0, 0.0 };
    glColor3d(1, 1, 1);
    glBindTexture(GL_TEXTURE_2D, txId[10]);
        for (int i = 0; i < NSIDE-3; i+=2) {

            // face 1
            glColor3d(1, 1, 1);
            glBindTexture(GL_TEXTURE_2D, txId[10]);
            glBegin(GL_QUADS);
                glTexCoord2f(0, 0);
                glVertex3f(vx[0], vy[i], vz[i]);
                glTexCoord2f(1, 0);
                glVertex3f(vx[0], vy[i+1], vz[i+1]);
                glTexCoord2f(1, 1);
                glVertex3f(vx[0], vy[i+3], vz[i+3]);
                glTexCoord2f(0, 1);
                glVertex3f(vx[0], vy[i+2], vz[i+2]);
            glEnd();

            // face 2
            glColor3d(1, 1, 1);
            glBindTexture(GL_TEXTURE_2D, txId[10]);
            glBegin(GL_QUADS);
                glTexCoord2f(0, 0);
                glVertex3f(vx[1], vy[i], vz[i]);
                glTexCoord2f(1, 0);
                glVertex3f(vx[1], vy[i+1], vz[i+1]);
                glTexCoord2f(1, 1);
                glVertex3f(vx[1], vy[i+3], vz[i+3]);
                glTexCoord2f(0, 1);
                glVertex3f(vx[1], vy[i+2], vz[i+2]);
            glEnd();

            // top
            glColor3d(1, 1, 1);
            glBindTexture(GL_TEXTURE_2D, txId[11]);
            glBegin(GL_QUADS);
                glTexCoord2f(0, 0);
                glVertex3f(vx[1], vy[i], vz[i]);
                glTexCoord2f(1, 0);
                glVertex3f(vx[0], vy[i], vz[i]);
                glTexCoord2f(1, 1);
                glVertex3f(vx[0], vy[i+2], vz[i+2]);
                glTexCoord2f(0, 1);
                glVertex3f(vx[1], vy[i+2], vz[i+2]);
            glEnd();

            // down
            glColor3d(1, 1, 1);
            glBindTexture(GL_TEXTURE_2D, txId[10]);
            glBegin(GL_QUADS);
                glTexCoord2f(0, 0);
                glVertex3f(vx[1], vy[i+1], vz[i+1]);
                glTexCoord2f(1, 0);
                glVertex3f(vx[0], vy[i+1], vz[i+1]);
                glTexCoord2f(1, 1);
                glVertex3f(vx[0], vy[i+3], vz[i+3]);
                glTexCoord2f(0, 1);
                glVertex3f(vx[1], vy[i+3], vz[i+3]);
            glEnd();

        }
}

//--------------draw-tunnel ----------------------------------

void drawTunnel(float medRadius)
{
    float angle1,ca1,sa1;
    float x1,z1;
    float toRad = 3.14159265/180.0;

    for (int i = 10; i < 90; i += 1){
        angle1 = i * toRad;
        ca1 = cos(angle1);
        sa1 = sin(angle1);
        x1 = (medRadius - 0.5)*sa1; z1 = (medRadius - 0.5)*ca1;
        glPushMatrix();
            glTranslatef(-x1, 0.2, -z1);
            glRotatef(i, 0.0, 1.0, 0.0);
            tunnel();
        glPopMatrix();
    }

}

//---------------tranffic light ----------------------------------

void trafficLight()
{
    //top-front
    glColor3d(1, 1, 1);
    glBindTexture(GL_TEXTURE_2D, txId[14]);
        glBegin(GL_QUADS);
            glTexCoord2f(1, 0);
            glVertex3f(-1.5, 13, 1.5);
            glTexCoord2f(1, 1);
            glVertex3f(-1.5, 4, 1.5);
            glTexCoord2f(0, 1);
            glVertex3f(1.5, 4, 1.5);
            glTexCoord2f(0, 0);
            glVertex3f(1.5, 13, 1.5);
        glEnd();

    //top-back
    glColor3d(1, 1, 1);
    glBindTexture(GL_TEXTURE_2D, txId[14]);
        glBegin(GL_QUADS);
            glTexCoord2f(0, 1);
            glVertex3f(-1.5, 13, -1.5);
            glTexCoord2f(0, 0);
            glVertex3f(-1.5, 4, -1.5);
            glTexCoord2f(0.01, 0);
            glVertex3f(1.5, 4, -1.5);
            glTexCoord2f(0.01, 1);
            glVertex3f(1.5, 13, -1.5);
        glEnd();

    //top-up
    glColor3d(1, 1, 1);
    glBindTexture(GL_TEXTURE_2D, txId[13]);
        glBegin(GL_QUADS);
            glTexCoord2f(0, 1);
            glVertex3f(-1.5, 13, -1.5);
            glTexCoord2f(0, 0);
            glVertex3f(-1.5, 13, 1.5);
            glTexCoord2f(0.01, 0);
            glVertex3f(1.5, 13, 1.5);
            glTexCoord2f(0.01, 1);
            glVertex3f(1.5, 13, -1.5);
        glEnd();

    //top-down
    glColor3d(1, 1, 1);
    glBindTexture(GL_TEXTURE_2D, txId[13]);
        glBegin(GL_QUADS);
            glTexCoord2f(0, 1);
            glVertex3f(-1.5, 4, -1.5);
            glTexCoord2f(0, 0);
            glVertex3f(-1.5, 4, 1.5);
            glTexCoord2f(0.01, 0);
            glVertex3f(1.5, 4, 1.5);
            glTexCoord2f(0.01, 1);
            glVertex3f(1.5, 4, -1.5);
        glEnd();

    //top-right
    glColor3d(1, 1, 1);
    glBindTexture(GL_TEXTURE_2D, txId[14]);
        glBegin(GL_QUADS);
            glTexCoord2f(0, 1);
            glVertex3f(-1.5, 13, -1.5);
            glTexCoord2f(0, 0);
            glVertex3f(-1.5, 4, -1.5);
            glTexCoord2f(0.01, 0);
            glVertex3f(-1.5, 4, 1.5);
            glTexCoord2f(0.01, 1);
            glVertex3f(-1.5, 13, 1.5);
        glEnd();

    //top-left
    glColor3d(1, 1, 1);
    glBindTexture(GL_TEXTURE_2D, txId[14]);
        glBegin(GL_QUADS);
            glTexCoord2f(0, 1);
            glVertex3f(1.5, 13, -1.5);
            glTexCoord2f(0, 0);
            glVertex3f(1.5, 4, -1.5);
            glTexCoord2f(0.01, 0);
            glVertex3f(1.5, 4, 1.5);
            glTexCoord2f(0.01, 1);
            glVertex3f(1.5, 13, 1.5);
        glEnd();
}

//---------------tranffic light stand----------------------------------

void trafficLightStand()
{
    //top-front
    glColor3d(1, 1, 1);
    glBindTexture(GL_TEXTURE_2D, txId[14]);
        glBegin(GL_QUADS);
            glTexCoord2f(0.01, 0);
            glVertex3f(-0.5, 4, 0.5);
            glTexCoord2f(0.01, 1);
            glVertex3f(-0.5, 0, 0.5);
            glTexCoord2f(0, 1);
            glVertex3f(0.5, 0, 0.5);
            glTexCoord2f(0, 0);
            glVertex3f(0.5, 4, 0.5);
        glEnd();

    //top-back
    glColor3d(1, 1, 1);
    glBindTexture(GL_TEXTURE_2D, txId[14]);
        glBegin(GL_QUADS);
            glTexCoord2f(0, 1);
            glVertex3f(-0.5, 4, -0.5);
            glTexCoord2f(0, 0);
            glVertex3f(-0.5, 0, -0.5);
            glTexCoord2f(0.01, 0);
            glVertex3f(0.5, 0, -0.5);
            glTexCoord2f(0.01, 1);
            glVertex3f(0.5, 4, -0.5);
        glEnd();

    //top-right
    glColor3d(1, 1, 1);
    glBindTexture(GL_TEXTURE_2D, txId[14]);
        glBegin(GL_QUADS);
            glTexCoord2f(0, 1);
            glVertex3f(-0.5, 4, -0.5);
            glTexCoord2f(0, 0);
            glVertex3f(-0.5, 0, -0.5);
            glTexCoord2f(0.01, 0);
            glVertex3f(-0.5, 0, 0.5);
            glTexCoord2f(0.01, 1);
            glVertex3f(-0.5, 4, 0.5);
        glEnd();

    //top-left
    glColor3d(1, 1, 1);
    glBindTexture(GL_TEXTURE_2D, txId[14]);
        glBegin(GL_QUADS);
            glTexCoord2f(0, 1);
            glVertex3f(0.5, 4, -0.5);
            glTexCoord2f(0, 0);
            glVertex3f(0.5, 0, -0.5);
            glTexCoord2f(0.01, 0);
            glVertex3f(0.5, 0, 0.5);
            glTexCoord2f(0.01, 1);
            glVertex3f(0.5, 4, 0.5);
        glEnd();
}

//--------------draw-traffic-light ----------------------------------

void drawTrafficLight()
{
        glPushMatrix();
            glTranslatef(-(130 - 0.5)*sin(200 * (3.14159265/180.0)), 0.2, -(130 - 0.5)*cos(200 * (3.14159265/180.0)));
            glRotatef(290, 0.0, 1.0, 0.0);
            trafficLightStand();
            trafficLight();
        glPopMatrix();

        glPushMatrix();
            glTranslatef(-(129 - 0.5)*sin(8 * (3.14159265/180.0)), 20, -(129 - 0.5)*cos(8 * (3.14159265/180.0)));
            glRotatef(98, 0.0, 1.0, 0.0);
            glRotatef(90, 0.0, 0.0, 1.0);
            trafficLight();
        glPopMatrix();
}

//--------------color-light ----------------------------------

void yellowLight(){
    glDisable(GL_TEXTURE_2D);
    glPushMatrix();

        glTranslatef(0.0, 8.5, 1.6);
        glColor3d(1, 1, 0);
        glutSolidSphere(1.15, 36, 12);
    glPopMatrix();
    glEnable(GL_TEXTURE_2D);
}

void redLight(){
    glDisable(GL_TEXTURE_2D);
    glPushMatrix();
        glTranslatef(0.0, 11.5, 1.6);
        glColor3d(1, 0, 0);
        glutSolidSphere(1.15, 36, 12);
    glPopMatrix();
    glEnable(GL_TEXTURE_2D);
}

void greenLight(){
    glDisable(GL_TEXTURE_2D);
    glPushMatrix();
        glTranslatef(0.0, 5.5, 1.6);
        glColor3d(0, 1, 0);
        glutSolidSphere(1.15, 36, 12);
    glPopMatrix();
    glEnable(GL_TEXTURE_2D);
}
void yellowStation(){
        glPushMatrix();
            glTranslatef(-(130 - 0.5)*sin(200 * (3.14159265/180.0)), 0.2, -(130 - 0.5)*cos(200 * (3.14159265/180.0)));
            glRotatef(290, 0.0, 1.0, 0.0);
            yellowLight();
        glPopMatrix();
}
void yellowTunnel(){
    glPushMatrix();
            glTranslatef(-(129 - 0.5)*sin(8 * (3.14159265/180.0)), 20, -(129 - 0.5)*cos(8 * (3.14159265/180.0)));
            glRotatef(98, 0.0, 1.0, 0.0);
            glRotatef(90, 0.0, 0.0, 1.0);
            yellowLight();
        glPopMatrix();

}
void redStation(){
        glPushMatrix();
            glTranslatef(-(130 - 0.5)*sin(200 * (3.14159265/180.0)), 0.2, -(130 - 0.5)*cos(200 * (3.14159265/180.0)));
            glRotatef(290, 0.0, 1.0, 0.0);
            redLight();
        glPopMatrix();
}
void redTunnel(){
    glPushMatrix();
            glTranslatef(-(129 - 0.5)*sin(8 * (3.14159265/180.0)), 20, -(129 - 0.5)*cos(8 * (3.14159265/180.0)));
            glRotatef(98, 0.0, 1.0, 0.0);
            glRotatef(90, 0.0, 0.0, 1.0);
            redLight();
        glPopMatrix();

}
void greenStation(){
        glPushMatrix();
            glTranslatef(-(130 - 0.5)*sin(200 * (3.14159265/180.0)), 0.2, -(130 - 0.5)*cos(200 * (3.14159265/180.0)));
            glRotatef(290, 0.0, 1.0, 0.0);
            greenLight();
        glPopMatrix();
}
void greenTunnel(){
    glPushMatrix();
            glTranslatef(-(129 - 0.5)*sin(8 * (3.14159265/180.0)), 20, -(129 - 0.5)*cos(8 * (3.14159265/180.0)));
            glRotatef(98, 0.0, 1.0, 0.0);
            glRotatef(90, 0.0, 0.0, 1.0);
            greenLight();
        glPopMatrix();

}

