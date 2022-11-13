
///Scenery***********************
#define PI 3.1416
#include<glut.h>
#include <GL/gl.h>
#include <GL/glu.h>
#include <GL/glut.h>
#include <stdlib.h>
#include <stdio.h>
#include <windows.h>
#include <math.h>

//int windowWidth=500;
//int windowHeight=500;

double Txval=0;
double Tyval=0;
double sval=1.5;
double txval=0,txval1=0,txvalC=0,txval1lC=0, txval1C=0,txvallSS=0, txvalS=0,txval1S=0,txvalCC=0,txvallCC=0;
bool flagScale=false;
double  r=0.07,s=0.1,l=0.03,m=0.03;
int i;
float  tx=10,bx=10,rx=10;


////double sval=1;
////bool flagScale=false;



void sun(GLfloat x, GLfloat y, GLfloat radius){

	int i;
	int triangleAmount = 40; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi = 2.0f * PI;


	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
}

void trangle(void){
glPushMatrix();
glBegin(GL_QUADS);
glColor3f(0.0,0.0,0.0);
glVertex2f(8,60);
glVertex2f(8.5,59);
glVertex2f(8,58);
glVertex2f(10,59);

glEnd();
glPopMatrix();
}

void bird(void){
glPushMatrix();
trangle();
glPopMatrix();

glPushMatrix();
glTranslatef(-2,0,0);
trangle();
glPopMatrix();

glPushMatrix();
glTranslatef(-4,0,0);
trangle();
glPopMatrix();

glPushMatrix();
glTranslatef(-2,2,0);
trangle();
glPopMatrix();

glPushMatrix();
glTranslatef(-2,-2,0);
trangle();
glPopMatrix();

glPushMatrix();
glTranslatef(-4,2,0);
trangle();
glPopMatrix();

glPushMatrix();
glTranslatef(-4,-2,0);
trangle();
glPopMatrix();

glPushMatrix();
glTranslatef(-6,1,0);
trangle();
glPopMatrix();

glPushMatrix();
glTranslatef(-6,-1,0);
trangle();
glPopMatrix();


}





void car(void){
glPushMatrix();
glBegin(GL_QUADS);
glColor3f(0.0,0.0,0.4);
glVertex2f(79,4);
glVertex2f(97,4);
glVertex2f(97,9);
glVertex2f(79,9);

glEnd();
glPopMatrix();

//glPushMatrix();
//glBegin(GL_QUADS);
//glColor3f(0.0,0.0,0.3);
//glVertex2f(81,9);
//glVertex2f(97,9);
//glVertex2f(94,14);
//glVertex2f(84,14);
//
//glEnd();
//glPopMatrix();

glPushMatrix();
glBegin(GL_QUADS);
glColor3f(0.0,0.0,0.3);
glVertex2f(81,9);
glVertex2f(82,9);
glVertex2f(84,14);
glVertex2f(83,14);

glEnd();
glPopMatrix();

glPushMatrix();
glBegin(GL_QUADS);
glColor3f(0.0,0.0,0.3);
glVertex2f(83,14);
glVertex2f(83,13);
glVertex2f(94,13);
glVertex2f(94,14);

glEnd();
glPopMatrix();


glPushMatrix();
glBegin(GL_QUADS);
glColor3f(0.0,0.0,0.3);
glVertex2f(94,14);
glVertex2f(94,13);
glVertex2f(96,9);
glVertex2f(97,9);

glEnd();
glPopMatrix();

glPushMatrix();
glBegin(GL_QUADS);
glColor3f(0.0,0.0,0.3);
glVertex2f(88,14);
glVertex2f(89,14);
glVertex2f(89,9);
glVertex2f(88,9);

glEnd();
glPopMatrix();

///man****
glPushMatrix();
glBegin(GL_QUADS);
glColor3f(0.1,0.2,0.3);
glVertex2f(85,12);
glVertex2f(86,12);
glVertex2f(86,9);
glVertex2f(85,9);
glEnd();
glPopMatrix();
glPushMatrix() ;
glColor3f(0.0,0.0,0.0);
sun(85.5,11.5,1.5) ;
glPopMatrix();

glPushMatrix() ;
sun(84,4,2) ;
glPopMatrix();

glPushMatrix() ;
sun(92,4,2) ;
glPopMatrix();

}



void car_2(void){

glPushMatrix();
glBegin(GL_QUADS);
glColor3f(0.6,0.1,0.1);
glVertex2f(20,17);
glVertex2f(21,17);
glVertex2f(17,24);
glVertex2f(16,23);

glEnd();
glPopMatrix();


glPushMatrix();
glBegin(GL_QUADS);
glColor3f(0.6,0.1,0.1);
glVertex2f(17,24);
glVertex2f(13,24);
glVertex2f(13,23);
glVertex2f(17,23);

glEnd();
glPopMatrix();

glPushMatrix();
glBegin(GL_QUADS);
glColor3f(0.6,0.1,0.1);
glVertex2f(13,24);
glVertex2f(12,24);
glVertex2f(12,17);
glVertex2f(13,17);

glEnd();
glPopMatrix();

///BOdy***
glPushMatrix();
glBegin(GL_QUADS);
glColor3f(0.6,0.2,0.1);
glVertex2f(2,18);
glVertex2f(2,12);
glVertex2f(22,12);
glVertex2f(22,18);

glEnd();
glPopMatrix();


///man****
glPushMatrix();
glBegin(GL_QUADS);
glColor3f(0.1,0.2,0.3);
glVertex2f(15,18);
glVertex2f(16,18);
glVertex2f(16,20);
glVertex2f(15,20);
glEnd();
glPopMatrix();
glPushMatrix() ;
glColor3f(0.0,0.0,0.0);
sun(15.5,20.5,1.5) ;
glPopMatrix();
///while
glPushMatrix() ;
glScalef(.9,1,1);
sun(7,13,2.5) ;
glPopMatrix();

glPushMatrix() ;
glScalef(.9,1,1);
sun(18,13,2.5) ;
glPopMatrix();

}


void cloud_1(void){
glPushMatrix();
glColor3f(1.0,1.0,1.0);
sun(37,68,3) ;
glPopMatrix();

glPushMatrix();
glColor3f(1.0,1.0,1.0);
sun(40,70,3) ;
glPopMatrix();

glPushMatrix();
glColor3f(1.0,1.0,1.0);
sun(40,67,3) ;
glPopMatrix();

glPushMatrix();
glColor3f(1.0,1.0,1.0);
sun(43,68,3) ;
glPopMatrix();
}

void cloud_2(void){
glPushMatrix();
glColor3f(1.0,1.0,1.0);
sun(62,64,2.5) ;
glPopMatrix();

glPushMatrix();
glColor3f(1.0,1.0,1.0);
sun(65,66,3) ;
glPopMatrix();

glPushMatrix();
glColor3f(1.0,1.0,1.0);
sun(65,63,3) ;
glPopMatrix();

glPushMatrix();
glColor3f(1.0,1.0,1.0);
sun(68,64,2.5) ;
glPopMatrix();
}

void tree(void){
glPushMatrix();
glColor3f(0.4,0.6,0.1);
sun(63,23,3) ;
glPopMatrix();
glPushMatrix();
glColor3f(0.4,0.6,0.1);
sun(67,23,3) ;
glPopMatrix();
glPushMatrix();
glColor3f(0.4,0.6,0.1);
sun(65,26,3) ;
glPopMatrix();
glPushMatrix();
glColor3f(0.4,0.6,0.1);
sun(65,23,3) ;
glPopMatrix();
}


void road(void){
glPushMatrix();
glBegin(GL_QUADS);
glColor3f(0.4,0.4,0.4);
glVertex2f(0,0);
glVertex2f(100,0);
glVertex2f(100,20);
glVertex2f(0,20);

glEnd();
glPopMatrix();


///*****road_stripe*********

glPushMatrix();
glBegin(GL_QUADS);
glColor3f(1.0,1.0,1.0);
glVertex2f(5,9);
glVertex2f(10,9);
glVertex2f(10,11);
glVertex2f(5,11);

glEnd();
glPopMatrix();



glPushMatrix();
glBegin(GL_QUADS);
glColor3f(1.0,1.0,1.0);
glVertex2f(15,9);
glVertex2f(20,9);
glVertex2f(20,11);
glVertex2f(15,11);

glEnd();
glPopMatrix();

glPushMatrix();
glBegin(GL_QUADS);
glColor3f(1.0,1.0,1.0);
glVertex2f(25,9);
glVertex2f(30,9);
glVertex2f(30,11);
glVertex2f(25,11);

glEnd();
glPopMatrix();

glPushMatrix();
glBegin(GL_QUADS);
glColor3f(1.0,1.0,1.0);
glVertex2f(35,9);
glVertex2f(40,9);
glVertex2f(40,11);
glVertex2f(35,11);

glEnd();
glPopMatrix();

glPushMatrix();
glBegin(GL_QUADS);
glColor3f(1.0,1.0,1.0);
glVertex2f(45,9);
glVertex2f(50,9);
glVertex2f(50,11);
glVertex2f(45,11);

glEnd();
glPopMatrix();

glPushMatrix();
glBegin(GL_QUADS);
glColor3f(1.0,1.0,1.0);
glVertex2f(55,9);
glVertex2f(60,9);
glVertex2f(60,11);
glVertex2f(55,11);

glEnd();
glPopMatrix();

glPushMatrix();
glBegin(GL_QUADS);
glColor3f(1.0,1.0,1.0);
glVertex2f(65,9);
glVertex2f(70,9);
glVertex2f(70,11);
glVertex2f(65,11);

glEnd();
glPopMatrix();

glPushMatrix();
glBegin(GL_QUADS);
glColor3f(1.0,1.0,1.0);
glVertex2f(75,9);
glVertex2f(80,9);
glVertex2f(80,11);
glVertex2f(75,11);

glEnd();
glPopMatrix();

glPushMatrix();
glBegin(GL_QUADS);
glColor3f(1.0,1.0,1.0);
glVertex2f(85,9);
glVertex2f(90,9);
glVertex2f(90,11);
glVertex2f(85,11);

glEnd();
glPopMatrix();

glPushMatrix();
glBegin(GL_QUADS);
glColor3f(1.0,1.0,1.0);
glVertex2f(95,9);
glVertex2f(100,9);
glVertex2f(100,11);
glVertex2f(95,11);

glEnd();
glPopMatrix();

}

void footpath(void){
///Background of chair******
 ///tree1
glPushMatrix();
glBegin(GL_QUADS);
glColor3f(0.4,0.2,0.0 );
glVertex2f(95.5,27);
glVertex2f(97,27);
glVertex2f(97,40);
glVertex2f(95.5,40);
glEnd();
glPopMatrix();
glPushMatrix();
glTranslatef(31,16,0);
tree();
glPopMatrix();
///***tree2
glPushMatrix();
glBegin(GL_QUADS);
glColor3f(0.4,0.2,0.0 );
glVertex2f(67.5,22);
glVertex2f(69,22);
glVertex2f(69,40);
glVertex2f(67.5,40);
glEnd();
glPopMatrix();
glPushMatrix();
glTranslatef(3,12,0);
tree();
glPopMatrix();

glPushMatrix();
glTranslatef(8,3,0);
tree();
glPopMatrix();
glPushMatrix();
glTranslatef(24,3,0);
tree();
glPopMatrix();

glPushMatrix();
glTranslatef(13,3,0);
tree();
glPopMatrix();

glPushMatrix();
glTranslatef(19,3,0);
tree();
glPopMatrix();

glPushMatrix();
glBegin(GL_QUADS);
glColor3f(1.0,1.0,1.0 );
glVertex2f(60,23);
glVertex2f(60,20);
glVertex2f(100,20);
glVertex2f(100,23);

glEnd();
glPopMatrix();

///**********chair**********
glPushMatrix();
glBegin(GL_POLYGON);
glColor3f(0.4,0.1,0.1 );
glVertex2f(70,29);
glVertex2f(70,26);
glVertex2f(72,24);
glVertex2f(79,24);
glVertex2f(77,26);
glVertex2f(77,29);
glEnd();
glPopMatrix();
glBegin(GL_LINE_STRIP);
       glColor3f(0.0, 0.0, 0.0);//Black
       glVertex2i(70,26);
       glVertex2i(77,26);
   glEnd();
   glBegin(GL_LINE_STRIP);
       glColor3f(0.0, 0.0, 0.0);//Black
        glVertex2i(70,26);
       glVertex2i(70,23);

   glEnd();
glBegin(GL_LINE_STRIP);
       glColor3f(0.0, 0.0, 0.0);//Black
        glVertex2i(72,24);
       glVertex2i(72,22);
   glEnd();
   glBegin(GL_LINE_STRIP);
       glColor3f(0.0, 0.0, 0.0);//Black
        glVertex2i(77,24);
       glVertex2i(77,22);
   glEnd();
    glBegin(GL_LINE_STRIP);
       glColor3f(0.0, 0.0, 0.0);//Black
        glVertex2i(79,24);
       glVertex2i(79,22);
   glEnd();


glPushMatrix();
glBegin(GL_POLYGON);
glColor3f(0.4,0.1,0.1 );
glVertex2f(83,29);
glVertex2f(83,26);
glVertex2f(85,24);
glVertex2f(92,24);
glVertex2f(90,26);
glVertex2f(90,29);
glEnd();
glPopMatrix();

glBegin(GL_LINE_STRIP);
       glColor3f(0.0, 0.0, 0.0);//Black
       glVertex2i(83,26);
       glVertex2i(90,26);
   glEnd();
   glBegin(GL_LINE_STRIP);
       glColor3f(0.0, 0.0, 0.0);//Black
        glVertex2i(83,26);
       glVertex2i(83,23);

   glEnd();
glBegin(GL_LINE_STRIP);
       glColor3f(0.0, 0.0, 0.0);//Black
        glVertex2i(85,24);
       glVertex2i(85,22);
   glEnd();
   glBegin(GL_LINE_STRIP);
       glColor3f(0.0, 0.0, 0.0);//Black
        glVertex2i(90,24);
       glVertex2i(90,22);
   glEnd();
    glBegin(GL_LINE_STRIP);
       glColor3f(0.0, 0.0, 0.0);//Black
        glVertex2i(92,24);
       glVertex2i(92,22);
   glEnd();


///************light**********
glPushMatrix();
glBegin(GL_QUADS);
glColor3f(0.4,0.2,0.0 );
glVertex2f(80.5,21);
glVertex2f(82,21);
glVertex2f(82,44);
glVertex2f(80.5,44);

glEnd();
glPopMatrix();

glPushMatrix();
glColor3f(0.9,0.6,0.0);
sun(81.3,45,2);
glPopMatrix();
glPushMatrix();
glColor3f(0.9,0.5,0.1);
sun(79.3,43,2);
glPopMatrix();
glPushMatrix();
glColor3f(0.9,0.5,0.1);
sun(83.3,43,2);
glPopMatrix();
}

 void window(void){
glPushMatrix();
glBegin(GL_QUADS);
glColor3f(0.4,0.2,0.0);
glVertex2f(1.5,35);
glVertex2f(3.5,35);
glVertex2f(3.5,38);
glVertex2f(1.5,38);

glEnd();
glPopMatrix();
}

 void window_2(void){
glPushMatrix();
glBegin(GL_QUADS);
glColor3f(0.3,0.0,0.1);
glVertex2f(7,47);
glVertex2f(7,44);
glVertex2f(9,44);
glVertex2f(9,47);

glEnd();
glPopMatrix();

glPushMatrix();
glBegin(GL_QUADS);
glColor3f(0.3,0.0,0.1);
glVertex2f(12,47);
glVertex2f(12,44);
glVertex2f(14,44);
glVertex2f(14,47);

glEnd();
glPopMatrix();
}

 void window_3(void){
glPushMatrix();
glBegin(GL_QUADS);
glColor3f(0.1,0.1,0.);
glVertex2f(7,47);
glVertex2f(7,44);
glVertex2f(9,44);
glVertex2f(9,47);

glEnd();
glPopMatrix();

glPushMatrix();
glBegin(GL_QUADS);
glColor3f(0.1,0.1,0.);
glVertex2f(10.5,47);
glVertex2f(10.5,44);
glVertex2f(12.5,44);
glVertex2f(12.5,47);

glEnd();
glPopMatrix();
}

void building(void){
///************back 1*********
glPushMatrix();
glBegin(GL_POLYGON);
glColor3f(0.6,0.6,0.5);
glVertex2f(10,65);
glVertex2f(10,40);
glVertex2f(20,40);
glVertex2f(20,67);
glVertex2f(16,67);

glEnd();
glPopMatrix();
              //
 glBegin(GL_LINE_STRIP);
       glColor3f(0.0, 0.0, 0.0);//Black
       glVertex2i(16,67);
       glVertex2i(16,40);
   glEnd();
   ///window********
glPushMatrix();
glTranslatef(3,16,0);
window_3();
glPopMatrix();

glPushMatrix();
glTranslatef(3,11,0);
window_3();
glPopMatrix();

glPushMatrix();
glTranslatef(3,6,0);
window_3();
glPopMatrix();

///***Back2******
 glPushMatrix();
glBegin(GL_QUADS);
glColor3f(0.6,0.3,0.3);
glVertex2f(40,45);
glVertex2f(40,20);
glVertex2f(45,20);
glVertex2f(45,45);

glEnd();
glPopMatrix();


              //
 glBegin(GL_LINE_STRIP);
       glColor3f(0.0, 0.0, 0.0);//Black
       glVertex2i(56,65);
       glVertex2i(56,20);
   glEnd();


///void first_building(void){

glPushMatrix();
glBegin(GL_QUADS);
glColor3f(0.6,0.6,0.5);
glVertex2f(0,20);
glVertex2f(5,20);
glVertex2f(5,40);
glVertex2f(0,40);

glEnd();
glPopMatrix();
///**************Window*************
glPushMatrix();
window();
glPopMatrix();

glPushMatrix();
glTranslatef(0,-6,0);
window();
glPopMatrix();

glPushMatrix();
glTranslatef(0,-12,0);
window();
glPopMatrix();

//}
///******3rd B *************
glPushMatrix();

glBegin(GL_QUADS);
glColor3f(0.6,0.5,0.4);
glVertex2f(13,55);
glVertex2f(13,20);
glVertex2f(20,20);
glVertex2f(20,54);
glVertex2f(30,55);

glEnd();
glPopMatrix();


glPushMatrix();

glBegin(GL_POLYGON);
glColor3f(0.6,0.5,0.5);
glVertex2f(20,20);
glVertex2f(30,20);
glVertex2f(30,54);
glVertex2f(20,54);

glEnd();
glPopMatrix();
 glBegin(GL_LINE_STRIP);
       glColor3f(0.0, 0.0, 0.0);//Black
       glVertex2i(20,54);
       glVertex2i(20,20);
   glEnd();
///Window********8
   glPushMatrix();
glTranslatef(15,2,0);
window_2();
glPopMatrix();

   glPushMatrix();
glTranslatef(15,-3,0);
window_2();
glPopMatrix();

   glPushMatrix();
glTranslatef(15,-8,0);
window_2();
glPopMatrix();

   glPushMatrix();
glTranslatef(15,-13,0);
window_2();
glPopMatrix();

   glPushMatrix();
glTranslatef(15,-18,0);
window_2();
glPopMatrix();
///Door****
   glPushMatrix();
glTranslatef(23,-15,0);
window();
glPopMatrix();

   glPushMatrix();
glTranslatef(23,-13,0);
window();
glPopMatrix();


///void second_building(void){

glPushMatrix();
glBegin(GL_QUADS);
glColor3f(0.8,0.3,0.1 );
glVertex2f(5,20);
glVertex2f(15,20);
glVertex2f(15,50);
glVertex2f(5,50);

glEnd();
glPopMatrix();
///Window*********
glPushMatrix();
glTranslatef(0,0,0);
window_2();
glPopMatrix();

glPushMatrix();
glTranslatef(0,-4,0);
window_2();
glPopMatrix();

///*********4th B****************
glPushMatrix();
glBegin(GL_QUADS);
glColor3f(0.9,0.7,0.3);
glVertex2f(30,52.5);
glVertex2f(30,20);
glVertex2f(33,20);
glVertex2f(33,52);

glEnd();
glPopMatrix();

glPushMatrix();
glBegin(GL_QUADS);
glColor3f(0.9,0.7,0.5 );
glVertex2f(33,52);
glVertex2f(33,20);
glVertex2f(40,20);
glVertex2f(40,52);

glEnd();
glPopMatrix();
 glBegin(GL_LINE_STRIP);
       glColor3f(0.0, 0.0, 0.0);//Black
       glVertex2i(33,52);
       glVertex2i(33,20);
   glEnd();
///window*******
      glPushMatrix();
glTranslatef(27,2,0);
window_3();
glPopMatrix();

   glPushMatrix();
glTranslatef(27,-3,0);
window_3();
glPopMatrix();

   glPushMatrix();
glTranslatef(27,-8,0);
window_3();
glPopMatrix();

   glPushMatrix();
glTranslatef(27,-13,0);
window_3();
glPopMatrix();

   glPushMatrix();
glTranslatef(27,-18,0);
window_3();
glPopMatrix();
///Door
   glPushMatrix();
glTranslatef(34,-15,0);
window();
glPopMatrix();

   glPushMatrix();
glTranslatef(34,-13,0);
window();
glPopMatrix();

///************6th B**************
glPushMatrix();
glBegin(GL_QUADS);
glColor3f(0.6,0.6,0.5);
glVertex2f(43,54.5);
glVertex2f(43,20);
glVertex2f(46,20);
glVertex2f(46,54);

glEnd();
glPopMatrix();

glPushMatrix();
glBegin(GL_QUADS);
glColor3f(0.6,0.6,0.6);
glVertex2f(46,54);
glVertex2f(46,20);
glVertex2f(53,20);
glVertex2f(53,54);

///window***
glPushMatrix();
glTranslatef(38,0,0);
window() ;
glPopMatrix();

glEnd();
glPopMatrix();
 glBegin(GL_LINE_STRIP);
       glColor3f(0.0, 0.0, 0.0);//Black
       glVertex2i(46,54);
       glVertex2i(46,20);
   glEnd();
///*************7th B*************
glPushMatrix();
glBegin(GL_POLYGON);
glColor3f(0.9,0.7,0.4);
glVertex2f(50,63);
glVertex2f(50,20);
glVertex2f(60,20);
glVertex2f(60,65);
glVertex2f(56,65);

glEnd();
glPopMatrix();

///window******
glPushMatrix();
glTranslatef(43,12,0);
window_3();
glPopMatrix();

glPushMatrix();
glTranslatef(43,7,0);
window_3();
glPopMatrix();

glPushMatrix();
glTranslatef(43,2,0);
window_3();
glPopMatrix();

   glPushMatrix();
glTranslatef(43,-3,0);
window_3();
glPopMatrix();

   glPushMatrix();
glTranslatef(43,-8,0);
window_3();
glPopMatrix();

   glPushMatrix();
glTranslatef(43,-13,0);
window_3();
glPopMatrix();

   glPushMatrix();
glTranslatef(43,-18,0);
window_3();
glPopMatrix();

glPushMatrix();
glTranslatef(43,-23,0);
window_3();
glPopMatrix();

glBegin(GL_LINE_STRIP);
       glColor3f(0.0, 0.0, 0.0);//Black
       glVertex2i(56,20);
       glVertex2i(56,65);
   glEnd();



///***********tree beside buildinig*****
glPushMatrix();
tree();
glPopMatrix();

///tree2******
glPushMatrix();
glColor3f(0.4,0.6,0.1);
sun(95,23,3) ;
glPopMatrix();
glPushMatrix();
glColor3f(0.4,0.6,0.1);
sun(99,23,3) ;
glPopMatrix();
glPushMatrix();
glColor3f(0.4,0.6,0.1);
sun(97,26,3) ;
glPopMatrix();
glPushMatrix();
glColor3f(0.4,0.6,0.1);
sun(97,23,3) ;
glPopMatrix();

///*****front 1*******

glPushMatrix();

glBegin(GL_QUADS);
glColor3f(0.6,0.3,0.3);
glVertex2f(7,20);
glVertex2f(17,20);
glVertex2f(17,38);
glVertex2f(7,38);

glEnd();
glPopMatrix();
///window********
glPushMatrix();
glTranslatef(2,-10,0);
window_2();
glPopMatrix();

glPushMatrix();
glTranslatef(2,-15,0);
window_2();
glPopMatrix();

glPushMatrix();
glTranslatef(2,-20,0);
window_2();
glPopMatrix();

}




void display(void)
{
glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);

glMatrixMode( GL_PROJECTION );
glLoadIdentity();
gluOrtho2D(-0, 100, -0, 80);

glMatrixMode( GL_MODELVIEW );
glLoadIdentity();



///***********Background*************


///************************SKY***********

glPushMatrix();
glBegin(GL_QUADS);
glColor3f(0.3,0.9,1);
glVertex2f(0,0);
glColor3f(0.6,0.9,0.8);
glVertex2f(100,0);
glColor3f(0.9,0.9,1 );
glVertex2f(100,80);
glColor3f(0.6,0.9,01);
glVertex2f(0,80);

glEnd();
glPopMatrix();

///**********sun*********
glPushMatrix();
glColor3f(1.0,1.0,0.0);
glTranslatef(txvalS,txvallSS,0);
glScalef(0.9,1,1);
sun(94,68,4.5);
glPopMatrix();

///*****************cloud**************
glPushMatrix();
glTranslatef(-19,0,0);
glTranslatef(txvalC,0,0);
cloud_1();
glPopMatrix();

glPushMatrix();
glTranslatef(txvalC,0,0);
cloud_2();
glPopMatrix();

///**********************ROAD***********************

glPushMatrix();
road();
glPopMatrix();


///********footpath**************
glPushMatrix();
footpath();
glPopMatrix();

///***bird*****
glPushMatrix();
glTranslatef(txvalCC,txvallCC,0);
bird();
glPopMatrix();


///**************************Building****************************

glPushMatrix();
building();
glPopMatrix();




///**************
glBegin(GL_LINE_STRIP);
       glColor3f(0.0, 0.0, 0.0);//Black
       glVertex2i(0,20);
       glVertex2i(100,20);
   glEnd();



///*******car2**************
 glPushMatrix();

glTranslatef(txval1lC,0,0);
car_2() ;
glPopMatrix();



///**************car***************
glPushMatrix();
glTranslatef(2,0,0);
glTranslatef(txval,0,0);
car() ;
glPopMatrix();



glFlush();
glutSwapBuffers();
}

void myKeyboardFunc( unsigned char key, int x, int y )
{
    switch ( key )
    {

    case 'R':
        flagScale=true;
        break;
    case 'r':
        flagScale=false;
        break;



    case 27:	// Escape key
        exit(1);
    }
    glutPostRedisplay();
}

void animate()
{
	if (flagScale == true)
	{    ///for  car
		//txval-= 0.005;
		txval-= 0.06;
		if(txval <= -100){
           txval = -2;
			//txval1 = 1;
		}


		{    ///for  car 2***
		//txval-= 0.005;
		txval1lC+= 0.06;
		if(txval1lC >= 100){
           txval1lC = -2;
			//txval1 = 1;
		}
        ///for cloud
		txvalC += 0.01;
		if(txvalC >= 100){
           txvalC = 0;
			//txval1 = 1;
		}
         ///for sun
		txvalS-= 0.005;
		if(txvalS <= -100){
           txvalS = 5;
		}
         ///for sun
		txvallSS-= 0.0005;
		if(txvallSS <= -100){
           txvallSS = 5;
			//txval1 = 1;
		}

         ///for bird
        txvalCC+= 0.02;
		if(txvalCC >= 100){
           txvalCC = 2;
			//txval1 = 1;
		}

		  ///for bird
        txvallCC+= 0.003;
		if(txvallCC >= 100){
           txvallCC = 2;
			//txval1 = 1;
		}

		//cloud circle txvalCC
//		 txvalCC-= 0.01;
//		if(txvalCC < -35){
//           txvalCC = 5;
//			//txval1 = 1;
//		}
//
//		txvalCC-= 0.01;
//		if(txvalCC < -35){
//           txvalCC = 5;
//			//txval1 = 1;
//		}

	}
	if (flagScale == false)
	{
		txval = 0;
		txval1 = 0;

		txvalC = 0;
		txval1C = 0;

		txvalS = 0;
		txval1S = 0;

		txvallSS = 0;

		//circle cloud

		txvalCC=0;
		txvallCC=0;

	}

	glutPostRedisplay();
}
}
int main (int argc, char **argv){
glutInit(&argc, argv);
glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH);
glutInitWindowPosition(100,100);
//glutInitWindowSize(windowWidth, windowHeight);
glutCreateWindow("City_1");

glutKeyboardFunc(myKeyboardFunc);
glutIdleFunc(animate);

glutDisplayFunc(display);
glutMainLoop();
return 0;
}
