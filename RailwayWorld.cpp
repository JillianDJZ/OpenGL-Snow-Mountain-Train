#include <math.h>
#include <GL/freeglut.h>
#include "RailModels.cpp"
#include <glm/gtc/matrix_transform.hpp>

float theta = 0, angle=0, look_x = 0, look_y = 10, look_z=0, eye_x = 150, eye_y = 10, eye_z = 150, delay= 0;
int option = 1;         //View modes: 1 = move view2 = train view, 3 = station view,

//--------------------initialize function-------------------------------------
void initialize(void)
{
    glEnable(GL_DEPTH_TEST);
    glEnable(GL_NORMALIZE);

    // texture
    loadTexture();
    glEnable(GL_TEXTURE_2D);

    //Background colour
    glClearColor (0.0, 0.0, 0.0, 0.0);

    //Perspective projection
    glMatrixMode (GL_PROJECTION);
    glLoadIdentity ();
    gluPerspective(60., 1.0, 10.0, 1000.0);
}

//------------------------display function------------------------------------
void display(void)
{
    float x1, z1, x2, z2;
    float toRad = 3.14159265/180.0;
    x1 = (120 - 0.5)*(sin(theta * toRad));
    z1 = (120 - 0.5)*(cos(theta * toRad));
    x2 = (120 - 0.5)*(sin((theta + 10.5)* toRad));
    z2 = (120 - 0.5)*(cos((theta + 10.5) * toRad));

   glClear (GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
   glMatrixMode(GL_MODELVIEW);
   glLoadIdentity();

    // camera
    if (option == 1){
        gluLookAt(eye_x, eye_y, eye_z,  look_x, look_y, look_z,   0, 1, 0);
    } else if (option == 2) {

        gluLookAt(-x1, 10, -z1,  -x2, 10, -z2,   0, 1, 0);
    } else {
        gluLookAt(40, 8, 140,  -x1, 8, -z1,   0, 1, 0);
    }

  //station
  drawStation(139);

  //trafficLight
  drawTrafficLight();
  greenTunnel();
  if(theta >= 10.5*13 && theta < 10.5*17){
      redStation();
    }else if (theta >= 10.5*9 && theta < 10.5*13){
        yellowStation();
    }else {
        greenStation();
    }

   //sky box
   drawRoom();

   //tracks
   tracks(120, 10);
   allOfSleepers(120);

   //tunnel
   drawTunnel(120);

    //engion
   glPushMatrix();
   glRotatef(theta, 0, 1, 0);
   glTranslatef(0, 3, -120);
   engine();
   glPopMatrix();

    //wagon
   for (int i = 1; i < 5; i++){
       glPushMatrix();
       glRotatef((i * (-10.5)) + theta, 0, 1, 0);
       glTranslatef(0, 3, -120);
       wagon();
       glPopMatrix();
   }

    //Useful for animation
   glutSwapBuffers();
}

//-----------timer callback function ---------
void myTimer(int value)
{
    if (theta >= 360){
        theta -= 360;
    }
    if (theta >= 10.5*16 && theta < 10.5*17 &&  delay < 50){
        delay++;
    } else{
        theta += 10.5;
        delay = 0;
        }
    glutPostRedisplay();
    glutTimerFunc(120, myTimer, 0);
}

//---------------------special function-------------------
//use keyboard to change the camera position
void special(int key, int x, int y)
{
    if(key == GLUT_KEY_LEFT) angle -= 0.1;
    else if(key == GLUT_KEY_RIGHT) angle += 0.1;
    else if(key == GLUT_KEY_DOWN)
    {  //Move backward
        eye_x -= sin(angle);
        eye_z += cos(angle);
    }
    else if(key == GLUT_KEY_UP)
    { //Move forward
        eye_x += sin(angle);
        eye_z -= cos(angle);
    }
    else if(key == GLUT_KEY_PAGE_DOWN)
    { // decrease height
        look_y -= 1;
    }
    else if(key == GLUT_KEY_PAGE_UP)
    { // Increase height
        look_y += 1;
    }
    if (eye_x >= 185) {eye_x = 184;}
    else if (eye_x <= -185) {eye_x = -184;}
    if (eye_z >= 185) {eye_z = 184;}
    else if (eye_z <= -185) {eye_z = -184;}
    look_x = eye_x + 100*sin(angle);
    look_z = eye_z - 100*cos(angle);

    if (key == GLUT_KEY_F12) {
        option ++;
    }
    if (option == 4) {
        option = 1;
    }
    glutPostRedisplay();
}

//---------------------------------------------------------------------
int main(int argc, char** argv)
{
   glutInit(&argc, argv);
   glutInitDisplayMode (GLUT_DOUBLE|GLUT_DEPTH);
   glutInitWindowSize (600, 600);
   glutInitWindowPosition (50, 50);
   glutCreateWindow ("Assignment Train");
   initialize ();

   glutDisplayFunc(display);

   glutInitDisplayMode(GLUT_DOUBLE);
   glutSwapBuffers();

   glutTimerFunc(50, myTimer, 0);

   glutSpecialFunc(special);
   glutMainLoop();
   return 0;
}
