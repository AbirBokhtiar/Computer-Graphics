#include <windows.h>  // for MS Windows
#include <GL/glut.h>  // GLUT, include glu.h and gl.h
#include <math.h>

building()
{
//  ################################
//  ##                            ##
//  ##      L E F T  PORTION      ##
//  ##                            ##
//  ################################

    //
    //   LOWER RECTANGLE
    //
    glBegin(GL_POLYGON);
	glColor3f(0.0f, 1.0f, 0.0f);
	glVertex2f(-26.0f, -10.0f);
	glVertex2f(-35.0f, -10.0f);
	glVertex2f(-35.0f, -9.5f);
	glVertex2f(-26.0f, -9.5f);
	glEnd();
	// OUTLINE
	glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-35.0f, -9.5f);
	glVertex2f(-35.0f, -10.0f);
	glVertex2f(-35.0f, -10.0f);
	glVertex2f(-26.0f, -10.0f);
	glVertex2f(-26.0f, -10.0f);
	glVertex2f(-26.0f, -9.5f);
	glEnd();

	//
    //   UPPER RECTANGLE
    //
    glBegin(GL_POLYGON);
	glColor3f(0.0f, 1.0f, 0.0f);
	glVertex2f(-26.0f, 35.0f);
	glVertex2f(-35.0f, 35.0f);
	glVertex2f(-35.0f, 36.0f);
	glVertex2f(-26.0f, 36.0f);
	glEnd();
	// OUTLINE
	glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-35.0f, 35.0f);
	glVertex2f(-35.0f, 36.0f);
	glVertex2f(-35.0f, 36.0f);
	glVertex2f(-26.0f, 36.0f);
	glEnd();

	//
    //   LEFT BODY
    //
    glBegin(GL_POLYGON);
	glColor3f(0.5f, 0.0f, 0.0f);
	glVertex2f(-26.0f, -9.5f);
	glVertex2f(-35.0f, -9.5f);
	glVertex2f(-35.0f, 35.0f);
	glVertex2f(-26.0f, 35.0f);
	glEnd();

	//
    //   LEFT BODY OUTLINE
    //
    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-26.0f, -9.5f);
	glVertex2f(-35.0f, -9.5f);

	glVertex2f(-35.0f, -9.5f);
	glVertex2f(-35.0f, 35.0f);

	glVertex2f(-35.0f, 35.0f);
    glVertex2f(-26.0f, 35.0f);

    glVertex2f(-26.0f, 35.0f);
    glVertex2f(-26.0f, -9.5f);
	glEnd();


	//
	//        WINDOW1
	//
    glBegin(GL_POLYGON);
	glColor3f(0.5f, 1.0f, 1.0f);    //CYAN
	glVertex2f(-29.0f, -7.0f);
	glVertex2f(-32.0f, -7.0f);
	glVertex2f(-32.0f, -3.0f);
	glVertex2f(-29.0f, -3.0f);
	glEnd();
	//
	//     WINDOW1  BORDER
	//
    glBegin(GL_LINES);
	glColor3f(0.0f, 0.0f, 0.0f);   //BLACK
	glVertex2f(-29.0f, -7.0f);
	glVertex2f(-32.0f, -7.0f);
	glVertex2f(-32.0f, -7.0f);
	glVertex2f(-32.0f, -3.0f);
	glVertex2f(-32.0f, -3.0f);
	glVertex2f(-29.0f, -3.0f);
	glVertex2f(-29.0f, -3.0f);
    glVertex2f(-29.0f, -7.0f);
    glVertex2f(-30.5f, -3.0f);  // DIVIDER
    glVertex2f(-30.5f, -7.0f);  // DIVIDER
	glEnd();

	//
	//        WINDOW2
	//
    glBegin(GL_POLYGON);
	glColor3f(0.5f, 1.0f, 1.0f);    //CYAN
	glVertex2f(-29.0f, 2.0f);
	glVertex2f(-32.0f, 2.0f);
	glVertex2f(-32.0f, 6.0f);
	glVertex2f(-29.0f, 6.0f);
	glEnd();
	//
	//     WINDOW2  BORDER
	//
    glBegin(GL_LINES);
	glColor3f(0.0f, 0.0f, 0.0f);   //BLACK
	glVertex2f(-29.0f, 2.0f);
	glVertex2f(-32.0f, 2.0f);
	glVertex2f(-32.0f, 2.0f);
	glVertex2f(-32.0f, 6.0f);
	glVertex2f(-32.0f, 6.0f);
	glVertex2f(-29.0f, 6.0f);
	glVertex2f(-29.0f, 6.0f);
	glVertex2f(-29.0f, 2.0f);
    glVertex2f(-30.5f, 6.0f);  // DIVIDER
    glVertex2f(-30.5f, 2.0f);  // DIVIDER
	glEnd();

	//
	//        WINDOW3
	//
    glBegin(GL_POLYGON);
	glColor3f(0.5f, 1.0f, 1.0f);    //CYAN
	glVertex2f(-29.0f, 11.0f);
	glVertex2f(-32.0f, 11.0f);
	glVertex2f(-32.0f, 15.0f);
	glVertex2f(-29.0f, 15.0f);
	glEnd();
	//
	//     WINDOW3  BORDER
	//
    glBegin(GL_LINES);
	glColor3f(0.0f, 0.0f, 0.0f);   //BLACK
	glVertex2f(-29.0f, 11.0f);
	glVertex2f(-32.0f, 11.0f);
	glVertex2f(-32.0f, 11.0f);
	glVertex2f(-32.0f, 15.0f);
	glVertex2f(-32.0f, 15.0f);
	glVertex2f(-29.0f, 15.0f);
	glVertex2f(-29.0f, 15.0f);
	glVertex2f(-29.0f, 11.0f);
    glVertex2f(-30.5f, 15.0f);  // DIVIDER
    glVertex2f(-30.5f, 11.0f);  // DIVIDER
	glEnd();

    //
	//        WINDOW4
	//
    glBegin(GL_POLYGON);
	glColor3f(0.5f, 1.0f, 1.0f);    //CYAN
	glVertex2f(-29.0f, 20.0f);
	glVertex2f(-32.0f, 20.0f);
	glVertex2f(-32.0f, 24.0f);
	glVertex2f(-29.0f, 24.0f);
	glEnd();
	//
	//     WINDOW4  BORDER
	//
    glBegin(GL_LINES);
	glColor3f(0.0f, 0.0f, 0.0f);   //BLACK
	glVertex2f(-29.0f, 20.0f);
	glVertex2f(-32.0f, 20.0f);
	glVertex2f(-32.0f, 20.0f);
	glVertex2f(-32.0f, 24.0f);
	glVertex2f(-32.0f, 24.0f);
	glVertex2f(-29.0f, 24.0f);
	glVertex2f(-29.0f, 24.0f);
    glVertex2f(-29.0f, 20.0f);
    glVertex2f(-30.5f, 24.0f);  // DIVIDER
    glVertex2f(-30.5f, 20.0f);  // DIVIDER
	glEnd();

    //
	//        WINDOW5
	//
    glBegin(GL_POLYGON);
	glColor3f(0.5f, 1.0f, 1.0f);    //CYAN
	glVertex2f(-29.0f, 29.0f);
	glVertex2f(-32.0f, 29.0f);
	glVertex2f(-32.0f, 33.0f);
	glVertex2f(-29.0f, 33.0f);
	glEnd();
	//
	//     WINDOW5  BORDER
	//
    glBegin(GL_LINES);
	glColor3f(0.0f, 0.0f, 0.0f);   //BLACK
	glVertex2f(-29.0f, 29.0f);
	glVertex2f(-32.0f, 29.0f);
	glVertex2f(-32.0f, 29.0f);
	glVertex2f(-32.0f, 33.0f);
	glVertex2f(-32.0f, 33.0f);
	glVertex2f(-29.0f, 33.0f);
	glVertex2f(-29.0f, 33.0f);
	glVertex2f(-29.0f, 29.0f);
    glVertex2f(-30.5f, 33.0f);  // DIVIDER
    glVertex2f(-30.5f, 29.0f);  // DIVIDER
	glEnd();




//  ################################
//  ##                            ##
//  ##      MIDDLE   PORTION      ##
//  ##                            ##
//  ################################

    //
    //   UPPER RECTANGLE
    //
    glBegin(GL_POLYGON);
	glColor3f(0.0f, 1.0f, 0.0f);
	glVertex2f(-14.0f, 37.0f);
	glVertex2f(-26.0f, 37.0f);
	glVertex2f(-26.0f, 38.0f);
	glVertex2f(-14.0f, 38.0f);
	glEnd();
	// OUTLINE
	glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-26.0f, 36.0f);
	glVertex2f(-26.0f, 38.0f);

	glVertex2f(-26.0f, 38.0f);
	glVertex2f(-14.0f, 38.0f);

	glVertex2f(-14.0f, 38.0f);
	glVertex2f(-14.0f, 36.0f);

	glVertex2f(-14.0f, 37.0f);
	glVertex2f(-26.0f, 37.0f);
	glEnd();

	//
    //   MIDDLE BODY
    //
    glBegin(GL_POLYGON);
	glColor3f(0.7f, 0.0f, 0.0f);
	glVertex2f(-14.0f, -10.0f);
	glVertex2f(-26.0f, -10.0f);
	glVertex2f(-26.0f, 37.0f);
	glVertex2f(-14.0f, 37.0f);
	glEnd();
	// OUTLINE
	glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-14.0f, 37.0f);
	glVertex2f(-14.0f, -10.0f);
	glEnd();

	//
	//        WINDOW11
	//
	glBegin(GL_POLYGON);
	glColor3f(0.5f, 0.5f, 0.5f);    //Gray
	glVertex2f(-16.0f, -1.0f);
	glVertex2f(-24.0f, -1.0f);
	glVertex2f(-24.0f, 0.0f);
	glVertex2f(-16.0f, 0.0f);
	glEnd();
	//
    glBegin(GL_POLYGON);
	glColor3f(0.5f, 1.0f, 1.0f);    //CYAN
	glVertex2f(-18.0f, 0.0f);
	glVertex2f(-22.0f, 0.0f);
	glVertex2f(-22.0f, 5.0f);
	glVertex2f(-18.0f, 5.0f);
	glEnd();
	//
	//     WINDOW11  BORDER
	//
    glBegin(GL_LINES);
	glColor3f(0.0f, 0.0f, 0.0f);   //BLACK
	glVertex2f(-18.0f, 0.0f);
	glVertex2f(-22.0f, 0.0f);
	glVertex2f(-22.0f, 0.0f);
	glVertex2f(-22.0f, 5.0f);
	glVertex2f(-22.0f, 5.0f);
	glVertex2f(-18.0f, 5.0f);
	glVertex2f(-18.0f, 5.0f);
	glVertex2f(-18.0f, 0.0f);
    glVertex2f(-20.0f, 0.0f);  // DIVIDER
    glVertex2f(-20.0f, 5.0f);  // DIVIDER
	glEnd();

	//
	//        WINDOW12
	//
	glBegin(GL_POLYGON);
	glColor3f(0.5f, 0.5f, 0.5f);    //Gray
	glVertex2f(-16.0f, 8.0f);
	glVertex2f(-24.0f, 8.0f);
	glVertex2f(-24.0f, 9.0f);
	glVertex2f(-16.0f, 9.0f);
	glEnd();
	//
    glBegin(GL_POLYGON);
	glColor3f(0.5f, 1.0f, 1.0f);    //CYAN
	glVertex2f(-18.0f, 9.0f);
	glVertex2f(-22.0f, 9.0f);
	glVertex2f(-22.0f, 14.0f);
	glVertex2f(-18.0f, 14.0f);
	glEnd();
	//
	//     WINDOW12  BORDER
	//
    glBegin(GL_LINES);
	glColor3f(0.0f, 0.0f, 0.0f);   //BLACK
	glVertex2f(-18.0f, 9.0f);
	glVertex2f(-22.0f, 9.0f);
	glVertex2f(-22.0f, 9.0f);
	glVertex2f(-22.0f, 14.0f);
	glVertex2f(-22.0f, 14.0f);
	glVertex2f(-18.0f, 14.0f);
	glVertex2f(-18.0f, 14.0f);
	glVertex2f(-18.0f, 9.0f);
    glVertex2f(-20.0f, 14.0f);  // DIVIDER
    glVertex2f(-20.0f, 9.0f);  // DIVIDER
	glEnd();

	//
	//        WINDOW13
	//
	glBegin(GL_POLYGON);
	glColor3f(0.5f, 0.5f, 0.5f);    //Gray
	glVertex2f(-16.0f, 17.0f);
	glVertex2f(-24.0f, 17.0f);
	glVertex2f(-24.0f, 18.0f);
	glVertex2f(-16.0f, 18.0f);
	glEnd();
	//
    glBegin(GL_POLYGON);
	glColor3f(0.5f, 1.0f, 1.0f);    //CYAN
	glVertex2f(-18.0f, 18.0f);
	glVertex2f(-22.0f, 18.0f);
	glVertex2f(-22.0f, 23.0f);
	glVertex2f(-18.0f, 23.0f);
	glEnd();
	//
	//     WINDOW13  BORDER
	//
    glBegin(GL_LINES);
	glColor3f(0.0f, 0.0f, 0.0f);   //BLACK
	glVertex2f(-18.0f, 18.0f);
	glVertex2f(-22.0f, 18.0f);
	glVertex2f(-22.0f, 18.0f);
	glVertex2f(-22.0f, 23.0f);
	glVertex2f(-22.0f, 23.0f);
	glVertex2f(-18.0f, 23.0f);
	glVertex2f(-18.0f, 23.0f);
	glVertex2f(-18.0f, 18.0f);
    glVertex2f(-20.0f, 18.0f);  // DIVIDER
    glVertex2f(-20.0f, 23.0f);  // DIVIDER
	glEnd();

	//
	//        WINDOW14
	//
	glBegin(GL_POLYGON);
	glColor3f(0.5f, 0.5f, 0.5f);    //Gray
	glVertex2f(-16.0f, 26.0f);
	glVertex2f(-24.0f, 26.0f);
	glVertex2f(-24.0f, 27.0f);
	glVertex2f(-16.0f, 27.0f);
	glEnd();
	//
    glBegin(GL_POLYGON);
	glColor3f(0.5f, 1.0f, 1.0f);    //CYAN
	glVertex2f(-18.0f, 27.0f);
	glVertex2f(-22.0f, 27.0f);
	glVertex2f(-22.0f, 32.0f);
	glVertex2f(-18.0f, 32.0f);
	glEnd();
	//
	//     WINDOW14  BORDER
	//
    glBegin(GL_LINES);
	glColor3f(0.0f, 0.0f, 0.0f);   //BLACK
	glVertex2f(-18.0f, 27.0f);
	glVertex2f(-22.0f, 27.0f);
	glVertex2f(-22.0f, 27.0f);
	glVertex2f(-22.0f, 32.0f);
	glVertex2f(-22.0f, 32.0f);
	glVertex2f(-18.0f, 32.0f);
	glVertex2f(-18.0f, 32.0f);
	glVertex2f(-18.0f, 27.0f);
    glVertex2f(-20.0f, 27.0f);  // DIVIDER
    glVertex2f(-20.0f, 32.0f);  // DIVIDER
	glEnd();


//  ################################
//  ##                            ##
//  ##     R I G H T   PORTION    ##
//  ##                            ##
//  ################################

    //
    //   UPPER RECTANGLE
    //
    glBegin(GL_POLYGON);
	glColor3f(0.0f, 1.0f, 0.0f);
	glVertex2f(-5.0f, 35.0f);
	glVertex2f(-14.0f, 35.0f);
	glVertex2f(-14.0f, 36.0f);
	glVertex2f(-5.0f, 36.0f);
	glEnd();
	// OUTLINE
	glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-5.0f, 35.0);
	glVertex2f(-14.0f, 35.0);

	glVertex2f(-14.0f, 35.0);
	glVertex2f(-14.0f, 36.0);

	glVertex2f(-14.0f, 36.0);
	glVertex2f(-5.0f, 36.0);

	glVertex2f(-5.0f, 36.0);
	glVertex2f(-5.0f, 35.0);
	glEnd();

	//
    //   RGHT BODY
    //
    glBegin(GL_POLYGON);
	glColor3f(0.5f, 0.0f, 0.0f);
	glVertex2f(-14.0f, 35.0f);
	glVertex2f(-5.0f, 35.0f);
	glVertex2f(-5.0f, -9.5f);
	glVertex2f(-14.0f, -9.5f);
	glEnd();
	// OUTLINE
	glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-14.0f, 35.0f);
	glVertex2f(-5.0f, 35.0f);

	glVertex2f(-5.0f, 35.0f);
	glVertex2f(-5.0f, 35.0f);

	glVertex2f(-5.0f, 35.0f);
	glVertex2f(-5.0f, -9.5f);

	glVertex2f(-5.0f, -9.5f);
	glVertex2f(-14.0f, -9.5f);

	glVertex2f(-14.0f, -9.5f);
	glVertex2f(-14.0f, 35.0f);
	glEnd();

	//
    //   RIGHT LOWER RECTANGLE
    //
    glBegin(GL_POLYGON);
	glColor3f(0.0f, 1.0f, 0.0f);
	glVertex2f(-5.0f, -10.0f);
	glVertex2f(-14.0f, -10.0f);
	glVertex2f(-14.0f, -9.5f);
	glVertex2f(-5.0f, -9.5f);
	glEnd();
	// OUTLINE
	glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-5.0f, -10.0f);
	glVertex2f(-14.0f, -10.0f);

	glVertex2f(-14.0f, -10.0f);
	glVertex2f(-14.0f, -9.5f);

	glVertex2f(-14.0f, -9.5f);
	glVertex2f(-5.0f, -9.5f);

	glVertex2f(-5.0f, -9.5f);
	glVertex2f(-5.0f, -10.0f);
	glEnd();

    //
	//        WINDOW6
	//
    glBegin(GL_POLYGON);
	glColor3f(0.5f, 1.0f, 1.0f);    //CYAN
	glVertex2f(-8.0f, -7.0f);
	glVertex2f(-11.0f, -7.0f);
	glVertex2f(-11.0f, -3.0f);
	glVertex2f(-8.0f, -3.0f);
	glEnd();
	//
	//     WINDOW6  BORDER
	//
    glBegin(GL_LINES);
	glColor3f(0.0f, 0.0f, 0.0f);   //BLACK
	glVertex2f(-8.0f, -7.0f);
	glVertex2f(-11.0f, -7.0f);
	glVertex2f(-11.0f, -7.0f);
	glVertex2f(-11.0f, -3.0f);
	glVertex2f(-11.0f, -3.0f);
	glVertex2f(-8.0f, -3.0f);
	glVertex2f(-8.0f, -3.0f);
	glVertex2f(-8.0f, -7.0f);
    glVertex2f(-9.5f, -3.0f);  // DIVIDER
    glVertex2f(-9.5f, -7.0f);  // DIVIDER
	glEnd();

    //
	//        WINDOW7
	//
    glBegin(GL_POLYGON);
	glColor3f(0.5f, 1.0f, 1.0f);    //CYAN
	glVertex2f(-8.0f, 2.0f);
	glVertex2f(-11.0f, 2.0f);
	glVertex2f(-11.0f, 6.0f);
	glVertex2f(-8.0f, 6.0f);
	glEnd();
	//
	//     WINDOW7  BORDER
	//
    glBegin(GL_LINES);
	glColor3f(0.0f, 0.0f, 0.0f);   //BLACK
	glVertex2f(-8.0f, 2.0f);
	glVertex2f(-11.0f, 2.0f);
	glVertex2f(-11.0f, 2.0f);
	glVertex2f(-11.0f, 6.0f);
	glVertex2f(-11.0f, 6.0f);
	glVertex2f(-8.0f, 6.0f);
	glVertex2f(-8.0f, 6.0f);
	glVertex2f(-8.0f, 2.0f);
    glVertex2f(-9.5f, 6.0f);  // DIVIDER
    glVertex2f(-9.5f, 2.0f);  // DIVIDER
	glEnd();

    //
	//        WINDOW8
	//
    glBegin(GL_POLYGON);
	glColor3f(0.5f, 1.0f, 1.0f);    //CYAN
	glVertex2f(-8.0f, 11.0f);
	glVertex2f(-11.0f, 11.0f);
	glVertex2f(-11.0f, 15.0f);
	glVertex2f(-8.0f, 15.0f);
	glEnd();
	//
	//     WINDOW8  BORDER
	//
    glBegin(GL_LINES);
	glColor3f(0.0f, 0.0f, 0.0f);   //BLACK
	glVertex2f(-8.0f, 11.0f);
	glVertex2f(-11.0f, 11.0f);
	glVertex2f(-11.0f, 11.0f);
	glVertex2f(-11.0f, 15.0f);
	glVertex2f(-11.0f, 15.0f);
	glVertex2f(-8.0f, 15.0f);
	glVertex2f(-8.0f, 15.0f);
	glVertex2f(-8.0f, 11.0f);
    glVertex2f(-9.5f, 11.0f);  // DIVIDER
    glVertex2f(-9.5f, 15.0f);  // DIVIDER
	glEnd();

	//
	//        WINDOW9
	//
    glBegin(GL_POLYGON);
	glColor3f(0.5f, 1.0f, 1.0f);    //CYAN
	glVertex2f(-8.0f, 20.0f);
	glVertex2f(-11.0f, 20.0f);
	glVertex2f(-11.0f, 24.0f);
	glVertex2f(-8.0f, 24.0f);
	glEnd();
	//
	//     WINDOW9  BORDER
	//
    glBegin(GL_LINES);
	glColor3f(0.0f, 0.0f, 0.0f);   //BLACK
	glVertex2f(-8.0f, 20.0f);
	glVertex2f(-11.0f, 20.0f);
	glVertex2f(-11.0f, 20.0f);
	glVertex2f(-11.0f, 24.0f);
	glVertex2f(-11.0f, 24.0f);
	glVertex2f(-8.0f, 24.0f);
	glVertex2f(-8.0f, 24.0f);
	glVertex2f(-8.0f, 20.0f);
    glVertex2f(-9.5f, 20.0f);  // DIVIDER
    glVertex2f(-9.5f, 24.0f);  // DIVIDER
	glEnd();

	//
	//        WINDOW10
	//
    glBegin(GL_POLYGON);
	glColor3f(0.5f, 1.0f, 1.0f);    //CYAN
	glVertex2f(-8.0f, 29.0f);
	glVertex2f(-11.0f, 29.0f);
	glVertex2f(-11.0f, 33.0f);
	glVertex2f(-8.0f, 33.0f);
	glEnd();
	//
	//     WINDOW10  BORDER
	//
    glBegin(GL_LINES);
	glColor3f(0.0f, 0.0f, 0.0f);   //BLACK
	glVertex2f(-8.0f, 29.0f);
	glVertex2f(-11.0f, 29.0f);
	glVertex2f(-11.0f, 29.0f);
	glVertex2f(-11.0f, 33.0f);
	glVertex2f(-11.0f, 33.0f);
	glVertex2f(-8.0f, 33.0f);
	glVertex2f(-8.0f, 33.0f);
	glVertex2f(-8.0f, 29.0f);
    glVertex2f(-9.5f, 33.0f);  // DIVIDER
    glVertex2f(-9.5f, 29.0f);  // DIVIDER
	glEnd();


//  ################################
//  ##                            ##
//  ##            D O O R         ##
//  ##                            ##
//  ################################

    glBegin(GL_POLYGON);
	glColor3f(0.0f, 1.0f, 0.0f);
	glVertex2f(-22.0f, -10.0f);
	glVertex2f(-22.2f, -10.0f);
	glVertex2f(-22.2f, -3.8f);
	glVertex2f(-22.0f, -4.0f);
	glEnd();

    glBegin(GL_POLYGON);
	glColor3f(0.0f, 1.0f, 0.0f);
	glVertex2f(-22.0f, -4.0f);
	glVertex2f(-22.2f, -3.8f);
	glVertex2f(-17.8f, -3.8f);
	glVertex2f(-18.0f, -4.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.0f, 1.0f, 0.0f);
	glVertex2f(-18.0f, -10.0f);
	glVertex2f(-17.8f, -10.0f);
	glVertex2f(-17.8f, -3.8f);
	glVertex2f(-18.0f, -4.0f);
	glEnd();




    // DOOR FILL
    glBegin(GL_POLYGON);
	glColor3f(0.5f, 0.35f, 0.05f);
	glVertex2f(-22.0f, -4.0f);
	glVertex2f(-18.0f, -4.0f);
	glVertex2f(-18.0f, -10.0f);
	glVertex2f(-22.0f, -10.0f);
	glEnd();

	//DOOR DIVIDER LINE
	glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-20.0f, -4.0f);
	glVertex2f(-20.0f, -10.0f);
	glEnd();

    // LOWER OUTLINE
	glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);   //WHITE
	glVertex2f(-14.0f, -10.0f);
	glVertex2f(-26.0f, -10.0f);
	glEnd();
}

//  ########################################################
//  ########################################################
//                      T   R   E   E
//  ########################################################
//  ########################################################
tree()
{
//  ################################
//  ##                            ##
//  ##   Perpendicular Portion    ##
//  ##                            ##
//  ################################
    glBegin(GL_POLYGON);
    glColor3f(0.35f, 0.0f, 0.0f);
	glVertex2f(-50.0f, -10.0f);
	glVertex2f(-54.0f, -10.0f);
	glVertex2f(-54.0f, 2.0f);
	glVertex2f(-50.0f, 2.0f);
	glEnd();

//  ################################
//  ##                            ##
//  ##      Leaf CIRCLE           ##
//  ##                            ##
//  ################################
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
	for(int i=0;i<200;i++)
        {
            glColor3f(0.0,1.0,0.0);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=8.6659815004197;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x-52,y+6);
        }
    glEnd();

    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
	for(int i=0;i<200;i++)
        {
            glColor3f(0.0,1.0,0.0);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=5.830845944313;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x-58,y+2);
        }
    glEnd();

    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
	for(int i=0;i<200;i++)
        {
            glColor3f(0.0,1.0,0.0);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=5.4226234335593;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x-56,y+10);
        }
    glEnd();


    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
	for(int i=0;i<200;i++)
        {
            glColor3f(0.0,1.0,0.0);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=6.4799888240209;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x-52,y+12);
        }
    glEnd();

    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
	for(int i=0;i<200;i++)
        {
            glColor3f(0.0,1.0,0.0);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=5.2014196599334;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x-48,y+10);
        }
    glEnd();


    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
	for(int i=0;i<200;i++)
        {
            glColor3f(0.0,1.0,0.0);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=5.9123382529913;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x-46,y+2);
        }
    glEnd();
}


//  ########################################################
//  ########################################################
//           L  A  M  P            P  O  S  T
//  ########################################################
//  ########################################################

lampPost()
{
//  ################################
//  ##                            ##
//  ##      LOWER PORTION         ##
//  ##                            ##
//  ################################

    glBegin(GL_POLYGON);
	glColor3f(0.5f, 0.5f, 0.5f);
	glVertex2f(3.5f, -10.0f);
	glVertex2f(2.0f, -10.0f);
	glVertex2f(2.3f, -9.5f);
	glVertex2f(3.2f, -9.5f);
	glEnd();

    //  OUTLINE
	glBegin(GL_LINES);
	glColor3f(1.f, 1.0f, 1.0f);
	glVertex2f(3.5f, -10.0f);
	glVertex2f(2.0f, -10.0f);
	glVertex2f(2.0f, -10.0f);
	glVertex2f(2.3f, -9.5f);
	glVertex2f(2.3f, -9.5f);
	glVertex2f(3.2f, -9.5f);
	glVertex2f(3.2f, -9.5f);
	glVertex2f(3.5f, -10.0f);
	glEnd();


    glBegin(GL_POLYGON);
	glColor3f(0.5f, 0.5f, 0.5f);
	glVertex2f(3.1f, -9.5f);
	glVertex2f(2.4f, -9.5f);
	glVertex2f(2.5f, -9.3f);
	glVertex2f(3.0f, -9.3f);
	glEnd();

	//    OUTLINE
	glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(3.1f, -9.5f);
	glVertex2f(2.4f, -9.5f);
	glVertex2f(2.4f, -9.5f);
	glVertex2f(2.5f, -9.3f);
	glVertex2f(2.5f, -9.3f);
	glVertex2f(3.0f, -9.3f);
	glVertex2f(3.0f, -9.3f);
	glVertex2f(3.1f, -9.5f);
	glEnd();



//  ################################
//  ##                            ##
//  ##      STAND PORTION         ##
//  ##                            ##
//  ################################

    glBegin(GL_POLYGON);
	glColor3f(0.5f, 0.5f, 0.5f);
	glVertex2f(2.9f, -9.3f);
	glVertex2f(2.6f, -9.3f);
	glVertex2f(2.6f, 0.0f);
	glVertex2f(2.9f, 0.0f);
	glEnd();

    // OUTLINE
	glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(2.9f, -9.3f);
	glVertex2f(2.6f, -9.3f);
	glVertex2f(2.6f, -9.3f);
	glVertex2f(2.6f, 0.0f);
	glVertex2f(2.6f, 0.0f);
	glVertex2f(2.9f, 0.0f);
	glVertex2f(2.9f, 0.0f);
	glVertex2f(2.9f, -9.3f);
	glEnd();



//  ################################
//  ##                            ##
//  ##      UPPER PORTION         ##
//  ##                            ##
//  ################################

    glBegin(GL_POLYGON);
	glColor3f(1.0f, 0.0f, 0.0f);   //RED
	glVertex2f(3.0f, 0.0f);
	glVertex2f(2.5f, 0.0f);
	glVertex2f(2.5f, 0.2f);
	glVertex2f(3.0f, 0.2f);
	glEnd();

	//     OUTLINE
	glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(3.0f, 0.0f);
	glVertex2f(2.5f, 0.0f);
	glVertex2f(2.5f, 0.0f);
	glVertex2f(2.5f, 0.2f);
	glVertex2f(2.5f, 0.2f);
	glVertex2f(3.0f, 0.2f);
	glVertex2f(3.0f, 0.2f);
	glVertex2f(3.0f, 0.0f);
	glEnd();


	glBegin(GL_POLYGON);
	glColor3f(1.0f, 0.0, 0.0f);   // RED
	glVertex2f(3.2f, 0.2f);
	glVertex2f(2.3f, 0.2f);
	glVertex2f(2.3f, 0.4f);
	glVertex2f(3.2f, 0.4f);
	glEnd();

	//    OUTLINE
	glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(3.2f, 0.2f);
	glVertex2f(2.3f, 0.2f);
	glVertex2f(2.3f, 0.2f);
	glVertex2f(2.3f, 0.4f);
	glVertex2f(2.3f, 0.4f);
	glVertex2f(3.2f, 0.4f);
	glVertex2f(3.2f, 0.4f);
	glVertex2f(3.2f, 0.2f);
	glEnd();



//  ################################
//  ##                            ##
//  ##      LAMP PORTION          ##
//  ##                            ##
//  ################################

    glBegin(GL_POLYGON);
	glColor3f(0.5f, 1.0f, 1.0f);
	glVertex2f(3.2f, 0.4f);
	glVertex2f(2.3f, 0.4f);
	glVertex2f(1.7f, 1.8f);
	glVertex2f(3.8f, 1.8f);
	glEnd();

    // TRIANGLE
	glBegin(GL_POLYGON);
	glColor3f(0.8f, 0.0f, 0.0f);
	glVertex2f(4.0f, 1.8f);
	glVertex2f(1.5f, 1.8f);
	glVertex2f(2.75f, 3.0f);
	glEnd();


	//  L1
	glBegin(GL_POLYGON);
	glColor3f(1.f, 1.0f, 0.0f);
	glVertex2f(2.695f, 0.45f);
	glVertex2f(2.32, 0.45f);
	glVertex2f(2.0429f, 1.105f);
	glVertex2f(2.695f, 1.105f);
	glEnd();

	// L2
	glBegin(GL_POLYGON);
	glColor3f(1.f, 1.0f, 0.0f);
	glVertex2f(2.695f, 1.205f);
	glVertex2f(2.0006, 1.205f);
	glVertex2f(1.77f, 1.75f);
	glVertex2f(2.695f, 1.75f);
	glEnd();

	//  L3
	glBegin(GL_POLYGON);
	glColor3f(1.f, 1.0f, 0.0f);
	glVertex2f(3.4778077f, 1.205f);
	glVertex2f(2.795, 1.205f);
	glVertex2f(2.795f, 1.75f);
	glVertex2f(3.7f, 1.75f);
	glEnd();

	//  L4
	glBegin(GL_POLYGON);
	glColor3f(1.f, 1.0f, 0.0f);
	glVertex2f(3.17f, 0.45f);
	glVertex2f(2.795, 0.45f);
	glVertex2f(2.795f, 1.105f);
	glVertex2f(3.437f, 1.105f);
	glEnd();
}

//  ########################################################
//  ########################################################
//                    B   E   N   C   H
//  ########################################################
//  ########################################################

bench()
{
//  ################################
//  ##                            ##
//  ##         ALL  BAR           ##
//  ##                            ##
//  ################################

    // BAR1
    glBegin(GL_POLYGON);
	glColor3f(0.5f, 0.5f, 0.5f);
	glVertex2f(8.0f, -10.0f);
	glVertex2f(7.6f, -10.0f);
	glVertex2f(7.6f, -8.2f);
	glVertex2f(8.0f, -8.2f);
	glEnd();

	// BAR2
    glBegin(GL_POLYGON);
	glColor3f(0.5f, 0.5f, 0.5f);
	glVertex2f(9.3f, -10.0f);
	glVertex2f(9.0f, -10.0f);
	glVertex2f(9.0f, -8.2f);
	glVertex2f(9.3f, -8.2f);
	glEnd();

	// BAR3
    glBegin(GL_POLYGON);
	glColor3f(0.5f, 0.5f, 0.5f);
	glVertex2f(15.0f, -10.0f);
	glVertex2f(14.7f, -10.0f);
	glVertex2f(14.7f, -8.2f);
	glVertex2f(15.0f, -8.2f);
	glEnd();

	// BAR4
    glBegin(GL_POLYGON);
	glColor3f(0.5f, 0.5f, 0.5f);
	glVertex2f(16.4f, -10.0f);
	glVertex2f(16.0f, -10.0f);
	glVertex2f(16.0f, -8.2f);
	glVertex2f(16.4f, -8.2f);
	glEnd();

	// BAR5
    glBegin(GL_POLYGON);
	glColor3f(0.5f, 0.5f, 0.5f);
	glVertex2f(9.3f, -6.0f);
	glVertex2f(9.0f, -6.0f);
	glVertex2f(9.0f, -2.5f);
	glVertex2f(9.3f, -2.5f);
	glEnd();

	// BAR6
    glBegin(GL_POLYGON);
	glColor3f(0.5f, 0.5f, 0.5f);
	glVertex2f(15, -6.0f);
	glVertex2f(14.7f, -6.0f);
	glVertex2f(14.7f, -2.5f);
	glVertex2f(15.0f, -2.5f);
	glEnd();



//  ################################
//  ##                            ##
//  ##       SITING AREA          ##
//  ##                            ##
//  ################################

    // small portion
    glBegin(GL_POLYGON);
	glColor3f(0.5f, 0.5f, 0.5f);
	glVertex2f(17.0f, -8.2f);
	glVertex2f(7.0f, -8.2f);
	glVertex2f(7.0f, -8.0f);
	glVertex2f(17.0f, -8.0f);
	glEnd();


	// large portion
    glBegin(GL_POLYGON);
	glColor3f(0.8f, 0.5f, 0.0);
	glVertex2f(17.0f, -8.0f);
	glVertex2f(16.0f, -6.0f);
	glVertex2f(8.0f, -6.0f);
	glVertex2f(7.0f, -8.0f);
	glEnd();



//  ################################
//  ##                            ##
//  ##     BACKREST AREA          ##
//  ##                            ##
//  ################################

    // it's from bottom to top
    glBegin(GL_POLYGON);
	glColor3f(0.8f, 0.5f, 0.0f);
	glVertex2f(8.0f, -5.5f);
	glVertex2f(8.0f, -5.0f);
	glVertex2f(16.0f, -5.0f);
	glVertex2f(16.0f, -5.5f);
	glEnd();
	//
	glBegin(GL_POLYGON);
	glColor3f(0.8f, 0.5f, 0.0f);
	glVertex2f(16.0f, -4.8f);
	glVertex2f(16.0f, -4.3f);
	glVertex2f(8.0f, -4.3f);
	glVertex2f(8.0f, -4.8);
	glEnd();
	//
	glBegin(GL_POLYGON);
	glColor3f(0.8f, 0.5f, 0.0f);
	glVertex2f(8.0f, -4.1f);
	glVertex2f(8.0f, -3.6f);
	glVertex2f(16.0f, -3.6f);
	glVertex2f(16.0f, -4.1f);
	glEnd();
	//
	glBegin(GL_POLYGON);
	glColor3f(0.8f, 0.5f, 0.0f);
	glVertex2f(16.0f, -3.4f);
	glVertex2f(16.0f, -2.9f);
	glVertex2f(8.0f, -2.9f);
	glVertex2f(8.0f, -3.4f);
	glEnd();
}
void display() {
	glClearColor(0.0f, 0.0f, 0.0f, 0.0f); // Set background color to black and opaque
	glClear(GL_COLOR_BUFFER_BIT);         // Clear the color buffer (background)
	glLineWidth(1);

    building();
    tree();
    lampPost();
    bench();
	glFlush();  // Render now
}

/* Main function: GLUT runs as a console application starting at main()  */
int main(int argc, char** argv) {
	glutInit(&argc, argv);                 // Initialize GLUT
	glutCreateWindow("OpenGL Setup Test"); // Create a window with the given title
	glutInitWindowSize(320, 320);// Set the window's initial width & height
	glutReshapeWindow (1024,720);
	glutDisplayFunc(display); // Register display callback handler for window re-paint
	gluOrtho2D(-65,25,-15,40);
	glutMainLoop();           // Enter the event-processing loop
	return 0;
}

