#include <windows.h> // for MS Windows

#include <GL/glut.h> // GLUT, include glu.h and gl.h
#include <math.h>
#include <cmath>

#define C -15.28f, 13.36f
#define D -15.25f, 12.87f
#define E -2.20f, 13.34f
#define F -2.20f, 12.84f
#define G -15.26f, 12.41f
#define H -15.27f, 11.93f
#define I -2.17f, 12.37f
#define J -2.20f, 11.91f
#define K -15.25f, 11.50f
#define L -15.27f, 11.0f
#define M -2.22f, 11.47f
#define N -2.23f, 11.0f
#define O -13.87f, 13.55f
#define P -13.49f, 13.54f
#define Q -13.90f, 10.10f
#define R -13.51f, 10.10f
#define S -3.86f, 10.13f
#define T -3.48f, 10.13f
#define U -3.85f, 13.57f
#define V -3.50f, 13.56f
#define W -15.82f, 10.28f
#define Z -15.80f, 9.32f
#define A1 -1.59f, 10.28f
#define B1 -1.64f, 9.32f
#define C1 -14.80f, 7.16f
#define D1 -14.27f, 7.15f
#define E1 -14.25f, 9.38f
#define F1 -14.77f, 9.38f
#define G1 -3.19f, 9.37f
#define H1 -2.68f, 9.37f
#define I1 -3.20f, 7.14f
#define J1 -2.70f, 7.13f
#define K1 21.25f, 28.02f
#define L1 22.68f, 28.04f
#define M1 23.15f, 27.15f
#define N1 20.79f, 27.23f
#define O1 21.25f, 24.21f
#define P1 22.60f, 24.21f
#define Q1 25.68f, 27.10f
#define R1 26.16f, 27.98f
#define S1 27.58f, 27.98f
#define T1 28.11f, 27.13f
#define U1 26.17f, 24.11f
#define V1 27.60f, 24.12f
#define W1 21.92f, 24.19f
#define Z1 21.93f, 23.22f
#define A2 26.93f, 23.22f
#define B2 26.93f, 24.14f
#define C2 24.51f, 23.21f
#define D2 24.48f, 25.43f
#define E2 24.47f, 7.14f
#define F2 23.83f, 13.02f
#define G2 25.17f, 13.02f
#define H2 23.85f, 7.09f
#define I2 25.15f, 7.07f
#define J2 -50.0f, 4.0f
#define K2 50.0f, 4.0f
#define L2 -50.0f, 20.0f
#define M2 50.0f, 20.0f
#define N2 -50.0f, 28.0f
#define O2 -46.78f, 28.01f
#define P2 -46.64f, 46.25f
#define Q2 -38.39f, 40.34f
#define R2 -38.33f, 32.56f
#define S2 -35.44f, 32.58f
#define T2 -35.44f, 34.71f
#define U2 -28.94f, 34.75f
#define V2 -29.03f, 23.94f
#define W2 -27.28f, 23.94f
#define Z2 -27.37f, 36.0f
#define A3 -25.69f, 36.08f
#define B3 -25.65f, 38.38f
#define C3 -24.53f, 38.44f
#define D3 -24.48f, 41.51f
#define E3 -23.9f, 41.54f
#define F3 -23.86f, 44.71f
#define G3 -23.26f, 44.71f
#define H3 -23.3f, 41.52f
#define I3 -22.65f, 41.5f
#define J3 -22.68f, 38.34f
#define K3 -21.43f, 38.34f
#define L3 -21.44f, 36.02f
#define M3 -19.84f, 36.0f
#define N3 -20.0f, 30.1f
#define O3 -18.79f, 30.12f
#define P3 -18.75f, 39.83f
#define Q3 -10.17f, 39.83f
#define R3 -10.14f, 32.22f
#define S3 -2.81f, 32.22f
#define T3 -2.88f, 37.43f
#define U3 7.93f, 37.43f
#define V3 7.93f, 29.23f
#define W3 12.03f, 29.23f
#define Z3 12.1f, 38.61f
#define A4 13.52f, 38.75f
#define B4 13.56f, 41.37f
#define C4 14.8f, 41.4f
#define D4 14.83f, 45.03f
#define E4 15.46f, 44.99f
#define F4 15.46f, 47.63f
#define G4 16.03f, 47.63f
#define H4 16.06f, 44.99f
#define I4 16.72f, 44.99f
#define J4 16.72f, 41.46f
#define K4 17.88f, 41.46f
#define L4 17.93f, 38.67f
#define M4 20.0f, 38.61f
#define N4 19.53f, 34.55f
#define O4 23.74f, 34.52f
#define P4 23.56f, 43.69f
#define Q4 26.17f, 43.69f
#define R4 26.14f, 41.69f
#define R42 26.14f, 20.0f
#define S4 28.56f, 41.69f
#define S42 28.56f, 20.0f
#define T4 33.31f, 46.24f
#define U4 33.20f, 30.0f
#define V4 36.0f, 30.0f
#define W4 36.0f, 38.0f
#define Z4 40.0f, 38.0f
#define Z42 40.0f, 20.0f
#define A5 40.0f, 40.0f
#define B5 45.0f, 40.0f
#define C5 45.0f, 30.0f
#define D5 50.0f, 30.0f
#define E5 -46.64f, 20.0f
#define F5 -38.39f, 20.0f
#define G5 -35.44f, 20.0f
#define H5 -29.03f, 20.0f
#define I5 -27.37f, 20.0f
#define J5 -20.0f, 20.0f
#define K5 -18.73f, 20.0f
#define L5 -10.17f, 20.0f
#define M5 -2.83f, 20.0f
#define N5 7.93f, 20.0f
#define O5 12.1f, 20.0f
#define P5 20.0f, 20.0f
#define Q5 23.56f, 20.0f
#define R5 33.20f, 20.0f
#define S5 36.0f, 20.0f
#define T5 45.05f, 20.0f
#define U5 -33.76f, 16.38f
#define V5 -33.13f, 16.5f
#define W5 -33.79f, 10.16f
#define Z5 -33.06f, 10.16f
#define A6 -35.16f, 17.01f
#define B6 -36.12f, 17.81f
#define C6 -36.61f, 17.63f
#define D6 -37.07f, 17.81f
#define E6 -37.54f, 18.81f
#define F6 -37.55f, 19.82f
#define G6 -37.39f, 20.43f
#define H6 -37.86f, 20.83f
#define I6 -38.25f, 21.55f
#define J6 -38.25f, 22.67f
#define K6 -37.91f, 23.7f
#define L6 -37.55f, 24.18f
#define M6 -37.95f, 24.61f
#define N6 -38.01f, 25.29f
#define O6 -37.76f, 25.94f
#define P6 -37.16f, 26.63f
#define Q6 -36.54f, 27.28f
#define R6 -36.54f, 28.13f
#define S6 -36.05f, 28.55f
#define T6 -35.53f, 28.95f
#define U6 -35.07f, 29.68f
#define V6 -34.54f, 30.46f
#define W6 -33.86f, 30.83f
#define Z6 -33.01f, 30.68f
#define A7 -32.21f, 30.24f
#define B7 -31.43f, 29.68f
#define C7 -30.74f, 29.25f
#define D7 -30.44f, 28.14f
#define E7 -29.5f, 27.0f
#define F7 -28.94f, 26.07f
#define G7 -28.96f, 25.18f
#define H7 -29.25f, 24.49f
#define I7 -29.25f, 23.78f
#define J7 -28.7f, 22.82f
#define K7 -28.61f, 21.70f
#define L7 -28.51f, 20.94f
#define M7 -28.0f, 20.0f
#define N7 -27.84f, 19.08f
#define O7 -28.0f, 18.0f
#define P7 -29.14f, 18.1f
#define Q7 -28.58f, 17.93f
#define R7 -29.224f, 17.15f
#define S7 -29.65f, 16.41f
#define T7 -30.39f, 16.53f
#define U7 -31.98f, 17.45f
#define V7 -32.49f, 16.85f

/* Handler for window-repaint event. Call back when the window first appears and

whenever the window needs to be re-painted. */

int state = 1;
float _move = 0.0f;
GLfloat speed = 0.1f;
// Variables for leaves movement
float leafOffset = 0.0f;
float sunOffset = 0.0f;

void bench()
{
    //line1
    glBegin(GL_POLYGON);
	glColor3f(0.8f, 0.5f, 0.0f);
	glVertex2f(C);
	glVertex2f(D);
	glVertex2f(F);
	glVertex2f(E);
	glEnd();
    //line2
	glBegin(GL_POLYGON);
	glColor3f(0.8f, 0.5f, 0.0f);
	glVertex2f(G);
	glVertex2f(H);
	glVertex2f(J);
	glVertex2f(I);
	glEnd();
    //line3
	glBegin(GL_POLYGON);
	glColor3f(0.8f, 0.5f, 0.0f);
	glVertex2f(K);
	glVertex2f(L);
	glVertex2f(N);
	glVertex2f(M);
	glEnd();
	//Vertline1
	glBegin(GL_POLYGON);
	glColor3f(0.5f, 0.5f, 0.5f);
	glVertex2f(O);
	glVertex2f(Q);
	glVertex2f(R);
	glVertex2f(P);
	glEnd();
	//Vertline2
	glBegin(GL_POLYGON);
	glColor3f(0.5f, 0.5f, 0.5f);
	glVertex2f(U);
	glVertex2f(S);
	glVertex2f(T);
	glVertex2f(V);
	glEnd();
	//Bline4
	glBegin(GL_POLYGON);
	glColor3f(0.8f, 0.5f, 0.0f);
	glVertex2f(W);
	glVertex2f(Z);
	glVertex2f(B1);
	glVertex2f(A1);
    glEnd();
    //Vertline3
	glBegin(GL_POLYGON);
	glColor3f(0.5f, 0.5f, 0.5f);
	glVertex2f(F1);
	glVertex2f(C1);
	glVertex2f(D1);
	glVertex2f(E1);
	glEnd();
	//Vertline4
	glBegin(GL_POLYGON);
	glColor3f(0.5f, 0.5f, 0.5f);
	glVertex2f(G1);
	glVertex2f(I1);
	glVertex2f(J1);
	glVertex2f(H1);
	glEnd();

	//Bench2
    //line1
    glBegin(GL_POLYGON);
	glColor3f(0.8f, 0.5f, 0.0f);
	glVertex2f(-15.28f+30, 13.36f);
	glVertex2f(-15.25f+30, 12.87f);
	glVertex2f(-2.20f+30, 12.84f);
	glVertex2f(-2.20f+30, 13.34f);
	glEnd();
    //line2
	glBegin(GL_POLYGON);
	glColor3f(0.8f, 0.5f, 0.0f);
	glVertex2f(-15.26f+30, 12.41f);
	glVertex2f(-15.27f+30, 11.93f);
	glVertex2f(-2.20f+30, 11.91f);
	glVertex2f(-2.17f+30, 12.37f);
	glEnd();
    //line3
	glBegin(GL_POLYGON);
	glColor3f(0.8f, 0.5f, 0.0f);
	glVertex2f(-15.25f+30, 11.50f);
	glVertex2f(-15.25f+30, 11.0f);
	glVertex2f(-2.23f+30, 11.0f);
	glVertex2f(-2.22f+30, 11.47f);
	glEnd();
	//Vertline1
	glBegin(GL_POLYGON);
	glColor3f(0.5f, 0.5f, 0.5f);
	glVertex2f(-13.87f+30, 13.55f);
	glVertex2f(-13.90f+30, 10.10f);
	glVertex2f(-13.51f+30, 10.10f);
	glVertex2f(-13.49f+30, 13.54f);
	glEnd();
	//Vertline2
	glBegin(GL_POLYGON);
	glColor3f(0.5f, 0.5f, 0.5f);
	glVertex2f(-3.85f+30, 13.57f);
	glVertex2f(-3.86f+30, 10.13f);
	glVertex2f(-3.48f+30, 10.13f);
	glVertex2f(-3.50f+30, 13.56f);
	glEnd();
	//Bline4
	glBegin(GL_POLYGON);
	glColor3f(0.8f, 0.5f, 0.0f);
	glVertex2f(-15.82f+30, 10.08f);
	glVertex2f(-15.80f+30, 9.32f);
	glVertex2f(-1.64f+30, 9.32f);
	glVertex2f(-1.59f+30, 10.08f);
    glEnd();
    //Vertline3
	glBegin(GL_POLYGON);
	glColor3f(0.5f, 0.5f, 0.5f);
	glVertex2f(-14.77f+30, 9.30f);
	glVertex2f(-14.80f+30, 7.16f);
	glVertex2f(-14.27f+30, 7.16f);
	glVertex2f(-14.25f+30, 9.30f);
	glEnd();
	//Vertline4
	glBegin(GL_POLYGON);
	glColor3f(0.5f, 0.5f, 0.5f);
	glVertex2f(-3.19f+30, 9.37f);
	glVertex2f(-3.20f+30, 7.14f);
	glVertex2f(-2.70f+30, 7.14f);
	glVertex2f(-2.68f+30, 9.37f);
	glEnd();

}

void dustbin()
{
    glBegin(GL_POLYGON);
	glColor3f(1.0f, 0.0f, 0.0f);
	glVertex2f(-3.19f+9, 9.37f);
	glVertex2f(-3.20f+9, 7.14f);
	glVertex2f(-0.70f+9, 7.14f);
	glVertex2f(-0.68f+9, 9.37f);
	glEnd();
}

void lamppost()
{
    if(state==1)
    {
        glBegin(GL_POLYGON);
        glColor3f(0.0f, 0.0f, 0.0f);
        glVertex2f(21.25f-15, 28.02f); //k1
        glVertex2f(20.79f-15, 27.23f); //n1
        glVertex2f(23.15f-15, 27.15f); //m1
        glVertex2f(22.68f-15, 28.04f); //l1
        glEnd();
        glBegin(GL_POLYGON);
        glColor3f(0.5f, 0.5f, 0.0f);
        glVertex2f(20.79f-15, 27.23f);
        glVertex2f(21.25f-15, 24.21f);
        glVertex2f(22.60f-15, 24.21f);
        glVertex2f(23.15f-15, 27.15f);
        glEnd();

        glBegin(GL_POLYGON);
        glColor3f(0.0f, 0.0f, 0.0f);
        glVertex2f(21.25f-10, 28.02f);
        glVertex2f(20.79f-10, 27.23f);
        glVertex2f(23.15f-10, 27.15f);
        glVertex2f(22.68f-10, 28.04f);
        glEnd();
        glBegin(GL_POLYGON);
        glColor3f(0.5f, 0.5f, 0.0f);
        glVertex2f(20.79f-10, 27.23f);
        glVertex2f(21.25f-10, 24.21f);
        glVertex2f(22.60f-10, 24.21f);
        glVertex2f(23.15f-10, 27.15f);
        glEnd();

        //stand
        glBegin(GL_POLYGON);
        glColor3f(0.0f, 0.0f, 0.0f);
        glVertex2f(24.48f-15, 25.43f);
        glVertex2f(24.47f-15, 7.14f);
        glVertex2f(24.87f-15, 7.14f);
        glVertex2f(24.88f-15, 25.43f);
        glEnd();
        glBegin(GL_LINES);
        glLineWidth(2);
        glColor3f(0.0f, 0.0f, 0.0f);
        glVertex2f(21.92f-14.6, 24.19f); //w1
        glVertex2f(21.93f-14.6, 23.22f); //z1
        glVertex2f(21.93f-14.6, 23.22f); //z1
        glVertex2f(26.93f-14.7, 23.22f); //a2
        glVertex2f(26.93f-14.7, 23.22f); //a2
        glVertex2f(26.93f-14.7, 24.14f); //b2
        glEnd();
    }

    if(state==2)
    {
        glBegin(GL_POLYGON);
        glColor3f(0.0f, 0.0f, 0.0f);
        glVertex2f(21.25f-15, 28.02f); //k1
        glVertex2f(20.79f-15, 27.23f); //n1
        glVertex2f(23.15f-15, 27.15f); //m1
        glVertex2f(22.68f-15, 28.04f); //l1
        glEnd();
        glBegin(GL_POLYGON);
        glColor3f(1.0f, 0.8f, 0.0f);
        glVertex2f(20.79f-15, 27.23f);
        glVertex2f(21.25f-15, 24.21f);
        glVertex2f(22.60f-15, 24.21f);
        glVertex2f(23.15f-15, 27.15f);
        glEnd();

        glBegin(GL_POLYGON);
        glColor3f(0.0f, 0.0f, 0.0f);
        glVertex2f(21.25f-10, 28.02f);
        glVertex2f(20.79f-10, 27.23f);
        glVertex2f(23.15f-10, 27.15f);
        glVertex2f(22.68f-10, 28.04f);
        glEnd();
        glBegin(GL_POLYGON);
        glColor3f(1.0f, 0.8f, 0.0f);
        glVertex2f(20.79f-10, 27.23f);
        glVertex2f(21.25f-10, 24.21f);
        glVertex2f(22.60f-10, 24.21f);
        glVertex2f(23.15f-10, 27.15f);
        glEnd();

        //stand
        glBegin(GL_POLYGON);
        glColor3f(0.5f, 0.5f, 0.5f);
        glVertex2f(24.48f-15, 25.43f);
        glVertex2f(24.47f-15, 7.14f);
        glVertex2f(24.87f-15, 7.14f);
        glVertex2f(24.88f-15, 25.43f);
        glEnd();
        glBegin(GL_LINES);
        glLineWidth(2);
        glColor3f(0.5f, 0.5f, 0.5f);
        glVertex2f(21.92f-14.6, 24.19f); //w1
        glVertex2f(21.93f-14.6, 23.22f); //z1
        glVertex2f(21.93f-14.6, 23.22f); //z1
        glVertex2f(26.93f-14.7, 23.22f); //a2
        glVertex2f(26.93f-14.7, 23.22f); //a2
        glVertex2f(26.93f-14.7, 24.14f); //b2
        glEnd();
    }
}

void path()
{
    glBegin(GL_POLYGON);
	glColor3f(1.0f, 0.8f, 0.6f);
	glVertex2f(J2);
	glVertex2f(-80.4f, -5.0f);
	glVertex2f(80.4f, -5.0f);
	glVertex2f(K2);
	glEnd();
}

void parkGreen()
{
    glBegin(GL_POLYGON);
	glColor3f(0.67f, 0.97f, 0.63f);
	glVertex2f(L2);
	glVertex2f(J2);
	glVertex2f(K2);
	glVertex2f(M2);
	glEnd();
}

void buildings()
{
    if(state==1)
    {
        glBegin(GL_POLYGON);
        glColor3f(0.67f, 0.84f, 0.82f);
        glVertex2f(L2);
        glVertex2f(N2);
        glVertex2f(O2);
        glVertex2f(E5);
        glEnd();

        glBegin(GL_POLYGON);
        glColor3f(0.56f, 0.74f, 0.7f);
        glVertex2f(E5);
        glVertex2f(P2);
        glVertex2f(Q2);
        glVertex2f(F5);
        glEnd();

        //lights1
        glBegin(GL_POLYGON);
        glColor3f(0.67f, 0.82f, 0.75f);
        glVertex2f(-45.79f, 36.59f);
        glVertex2f(-45.79f, 35.86f);
        glVertex2f(-40.91f, 35.86f);
        glVertex2f(-40.91f, 36.59f);
        glEnd();

        glBegin(GL_POLYGON);
        glColor3f(0.67f, 0.82f, 0.75f);
        glVertex2f(-45.79f, 36.59f+2);
        glVertex2f(-45.79f, 35.86f+2);
        glVertex2f(-40.91f, 35.86f+2);
        glVertex2f(-40.91f, 36.59f+2);
        glEnd();

        glBegin(GL_POLYGON);
        glColor3f(0.67f, 0.82f, 0.75f);
        glVertex2f(-45.79f, 36.59f-2);
        glVertex2f(-45.79f, 35.86f-2);
        glVertex2f(-40.91f, 35.86f-2);
        glVertex2f(-40.91f, 36.59f-2);
        glEnd();

        glBegin(GL_POLYGON);
        glColor3f(0.67f, 0.82f, 0.75f);
        glVertex2f(-45.79f+2, 36.59f-5);
        glVertex2f(-45.79f+2, 35.86f-5);
        glVertex2f(-40.91f+2, 35.86f-5);
        glVertex2f(-40.91f+2, 36.59f-5);
        glEnd();

        glBegin(GL_POLYGON);
        glColor3f(0.67f, 0.82f, 0.75f);
        glVertex2f(-45.79f+2, 36.59f-7);
        glVertex2f(-45.79f+2, 35.86f-7);
        glVertex2f(-40.91f+2, 35.86f-7);
        glVertex2f(-40.91f+2, 36.59f-7);
        glEnd();

        ////

        glBegin(GL_POLYGON);
        glColor3f(0.56f, 0.74f, 0.7f);
        glVertex2f(F5);
        glVertex2f(R2);
        glVertex2f(S2);
        glVertex2f(G5);
        glEnd();

        //lights2

        glBegin(GL_POLYGON);
        glColor3f(0.67f, 0.82f, 0.75f);
        glVertex2f(-45.79f+8, 36.59f-6);
        glVertex2f(-45.79f+8, 35.86f-6);
        glVertex2f(-42.91f+8, 35.86f-6);
        glVertex2f(-42.91f+8, 36.59f-6);
        glEnd();

        glBegin(GL_POLYGON);
        glColor3f(0.67f, 0.82f, 0.75f);
        glVertex2f(-45.79f+8, 36.59f-8);
        glVertex2f(-45.79f+8, 35.86f-8);
        glVertex2f(-42.91f+8, 35.86f-8);
        glVertex2f(-42.91f+8, 36.59f-8);
        glEnd();

        ////

        glBegin(GL_POLYGON);
        glColor3f(0.56f, 0.74f, 0.7f);
        glVertex2f(G5);
        glVertex2f(T2);
        glVertex2f(U2);
        glVertex2f(H5);
        glEnd();

        //lights3

        glBegin(GL_POLYGON);
        glColor3f(0.67f, 0.82f, 0.75f);
        glVertex2f(-45.79f+12, 38.59f-6);
        glVertex2f(-45.79f+12, 35.86f-12);
        glVertex2f(-44.91f+12, 35.86f-12);
        glVertex2f(-44.91f+12, 38.59f-6);
        glEnd();

        glBegin(GL_POLYGON);
        glColor3f(0.67f, 0.82f, 0.75f);
        glVertex2f(-45.79f+14, 38.59f-6);
        glVertex2f(-45.79f+14, 35.86f-12);
        glVertex2f(-44.91f+14, 35.86f-12);
        glVertex2f(-44.91f+14, 38.59f-6);
        glEnd();
        ////

        glBegin(GL_POLYGON);
        glColor3f(0.67f, 0.84f, 0.82f);
        glVertex2f(H5);
        glVertex2f(V2);
        glVertex2f(W2);
        glVertex2f(I5);
        glEnd();

        glBegin(GL_POLYGON);
        glColor3f(0.56f, 0.74f, 0.7f);
        glVertex2f(I5);
        glVertex2f(Z2);
        glVertex2f(M3);
        glVertex2f(J5);
        glEnd();

        //lights4

        glBegin(GL_POLYGON);
        glColor3f(0.67f, 0.82f, 0.75f);
        glVertex2f(-45.79f+20, 38.59f-4);
        glVertex2f(-45.79f+20, 35.86f-12);
        glVertex2f(-44.91f+20, 35.86f-12);
        glVertex2f(-44.91f+20, 38.59f-4);
        glEnd();

        glBegin(GL_POLYGON);
        glColor3f(0.67f, 0.82f, 0.75f);
        glVertex2f(-45.79f+22, 38.59f-4);
        glVertex2f(-45.79f+22, 35.86f-12);
        glVertex2f(-44.91f+22, 35.86f-12);
        glVertex2f(-44.91f+22, 38.59f-4);
        glEnd();

        glBegin(GL_POLYGON);
        glColor3f(0.67f, 0.82f, 0.75f);
        glVertex2f(-45.79f+24, 38.59f-4);
        glVertex2f(-45.79f+24, 35.86f-12);
        glVertex2f(-44.91f+24, 35.86f-12);
        glVertex2f(-44.91f+24, 38.59f-4);
        glEnd();
        ////

        glBegin(GL_POLYGON);
        glColor3f(0.67f, 0.84f, 0.82f);
        glVertex2f(J5);
        glVertex2f(N3);
        glVertex2f(O3);
        glVertex2f(K5);
        glEnd();

        glBegin(GL_POLYGON);
        glColor3f(0.56f, 0.74f, 0.7f);
        glVertex2f(K5);
        glVertex2f(P3);
        glVertex2f(Q3);
        glVertex2f(L5);
        glEnd();

        //lights5
        glBegin(GL_POLYGON);
        glColor3f(0.67f, 0.82f, 0.75f);
        glVertex2f(-45.79f+28, 36.6f);
        glVertex2f(-45.79f+28, 35.9f);
        glVertex2f(-39.0f+28, 35.9f);
        glVertex2f(-39.0f+28, 36.6f);
        glEnd();

        glBegin(GL_POLYGON);
        glColor3f(0.67f, 0.82f, 0.75f);
        glVertex2f(-45.79f+28, 36.6f-2);
        glVertex2f(-45.79f+28, 35.9f-2);
        glVertex2f(-39.0f+28, 35.9f-2);
        glVertex2f(-39.0f+28, 36.6f-2);
        glEnd();

        glBegin(GL_POLYGON);
        glColor3f(0.67f, 0.82f, 0.75f);
        glVertex2f(-45.79f+28, 36.59f-6);
        glVertex2f(-45.79f+28, 35.86f-6);
        glVertex2f(-42.91f+28, 35.86f-6);
        glVertex2f(-42.91f+28, 36.59f-6);
        glEnd();

        glBegin(GL_POLYGON);
        glColor3f(0.67f, 0.82f, 0.75f);
        glVertex2f(-45.79f+28, 36.59f-8);
        glVertex2f(-45.79f+28, 35.86f-8);
        glVertex2f(-42.91f+28, 35.86f-8);
        glVertex2f(-42.91f+28, 36.59f-8);
        glEnd();

        ////

        glBegin(GL_POLYGON);
        glColor3f(0.56f, 0.74f, 0.7f);
        glVertex2f(L5);
        glVertex2f(R3);
        glVertex2f(S3);
        glVertex2f(M5);
        glEnd();

        //lights6

        glBegin(GL_POLYGON);
        glColor3f(0.67f, 0.82f, 0.75f);
        glVertex2f(-45.79f+36, 36.59f-6);
        glVertex2f(-45.79f+36, 35.86f-6);
        glVertex2f(-42.91f+38, 35.86f-6);
        glVertex2f(-42.91f+38, 36.59f-6);
        glEnd();

        glBegin(GL_POLYGON);
        glColor3f(0.67f, 0.82f, 0.75f);
        glVertex2f(-45.79f+36, 36.59f-8);
        glVertex2f(-45.79f+36, 35.86f-8);
        glVertex2f(-42.91f+38, 35.86f-8);
        glVertex2f(-42.91f+38, 36.59f-8);
        glEnd();

        glBegin(GL_POLYGON);
        glColor3f(0.67f, 0.82f, 0.75f);
        glVertex2f(-45.79f+36, 36.59f-10);
        glVertex2f(-45.79f+36, 35.86f-10);
        glVertex2f(-42.91f+38, 35.86f-10);
        glVertex2f(-42.91f+38, 36.59f-10);
        glEnd();


        ////

        glBegin(GL_POLYGON);
        glColor3f(0.56f, 0.74f, 0.7f);
        glVertex2f(M5);
        glVertex2f(T3);
        glVertex2f(U3);
        glVertex2f(N5);
        glEnd();

        //lights7

        glBegin(GL_POLYGON);
        glColor3f(0.67f, 0.82f, 0.75f);
        glVertex2f(-45.79f+48, 38.59f-4);
        glVertex2f(-45.79f+48, 35.86f-12);
        glVertex2f(-44.91f+48, 35.86f-12);
        glVertex2f(-44.91f+48, 38.59f-4);
        glEnd();
        //window
        glBegin(GL_POLYGON);
        glColor3f(0.67f, 0.82f, 0.75f);
        glVertex2f(-45.79f+44, 36.59f-2);
        glVertex2f(-45.79f+44, 35.86f-2);
        glVertex2f(-43.91f+44, 35.86f-2);
        glVertex2f(-43.91f+44, 36.59f-2);
        glEnd();

        glBegin(GL_POLYGON);
        glColor3f(0.67f, 0.82f, 0.75f);
        glVertex2f(-45.79f+51, 36.59f-2);
        glVertex2f(-45.79f+51, 35.86f-2);
        glVertex2f(-43.91f+51, 35.86f-2);
        glVertex2f(-43.91f+51, 36.59f-2);
        glEnd();

        glBegin(GL_POLYGON);
        glColor3f(0.67f, 0.82f, 0.75f);
        glVertex2f(-45.79f+44, 36.59f-5);
        glVertex2f(-45.79f+44, 35.86f-5);
        glVertex2f(-43.91f+44, 35.86f-5);
        glVertex2f(-43.91f+44, 36.59f-5);
        glEnd();

        glBegin(GL_POLYGON);
        glColor3f(0.67f, 0.82f, 0.75f);
        glVertex2f(-45.79f+51, 36.59f-5);
        glVertex2f(-45.79f+51, 35.86f-5);
        glVertex2f(-43.91f+51, 35.86f-5);
        glVertex2f(-43.91f+51, 36.59f-5);
        glEnd();

        glBegin(GL_POLYGON);
        glColor3f(0.67f, 0.82f, 0.75f);
        glVertex2f(-45.79f+44, 36.59f-8);
        glVertex2f(-45.79f+44, 35.86f-8);
        glVertex2f(-43.91f+44, 35.86f-8);
        glVertex2f(-43.91f+44, 36.59f-8);
        glEnd();

        glBegin(GL_POLYGON);
        glColor3f(0.67f, 0.82f, 0.75f);
        glVertex2f(-45.79f+51, 36.59f-8);
        glVertex2f(-45.79f+51, 35.86f-8);
        glVertex2f(-43.91f+51, 35.86f-8);
        glVertex2f(-43.91f+51, 36.59f-8);
        glEnd();

        ////

        glBegin(GL_POLYGON);
        glColor3f(0.56f, 0.74f, 0.7f);
        glVertex2f(N5);
        glVertex2f(V3);
        glVertex2f(W3);
        glVertex2f(O5);
        glEnd();

        glBegin(GL_POLYGON);
        glColor3f(0.56f, 0.74f, 0.7f);
        glVertex2f(O5);
        glVertex2f(Z3);
        glVertex2f(M4);
        glVertex2f(P5);
        glEnd();

        //lights8

        glBegin(GL_POLYGON);
        glColor3f(0.67f, 0.82f, 0.75f);
        glVertex2f(-45.79f+60, 38.59f-4);
        glVertex2f(-45.79f+60, 35.86f-12);
        glVertex2f(-44.91f+60, 35.86f-12);
        glVertex2f(-44.91f+60, 38.59f-4);
        glEnd();

        glBegin(GL_POLYGON);
        glColor3f(0.67f, 0.82f, 0.75f);
        glVertex2f(-45.79f+63, 38.59f-4);
        glVertex2f(-45.79f+63, 35.86f-12);
        glVertex2f(-44.91f+63, 35.86f-12);
        glVertex2f(-44.91f+63, 38.59f-4);
        glEnd();
        ////


        glBegin(GL_POLYGON);
        glColor3f(0.56f, 0.74f, 0.7f);
        glVertex2f(Q5);
        glVertex2f(P4);
        glVertex2f(Q4);
        glVertex2f(R42);
        glEnd();

        glBegin(GL_POLYGON);
        glColor3f(0.56f, 0.74f, 0.7f);
        glVertex2f(R42);
        glVertex2f(R4);
        glVertex2f(S4);
        glVertex2f(S42);
        glEnd();

        glBegin(GL_POLYGON);
        glColor3f(0.56f, 0.74f, 0.7f);
        glVertex2f(R42);
        glVertex2f(R4);
        glVertex2f(S4);
        glVertex2f(S42);
        glEnd();

        glBegin(GL_POLYGON);
        glColor3f(0.56f, 0.74f, 0.7f);
        glVertex2f(S42);
        glVertex2f(S4);
        glVertex2f(T4);
        glVertex2f(R5);
        glEnd();

        //lights9
        glBegin(GL_POLYGON);
        glColor3f(0.67f, 0.82f, 0.75f);
        glVertex2f(-45.79f+70, 36.59f);
        glVertex2f(-45.79f+70, 35.86f);
        glVertex2f(-40.91f+70, 35.86f);
        glVertex2f(-40.91f+70, 36.59f);
        glEnd();

        glBegin(GL_POLYGON);
        glColor3f(0.67f, 0.82f, 0.75f);
        glVertex2f(-45.79f+70, 36.59f+2);
        glVertex2f(-45.79f+70, 35.86f+2);
        glVertex2f(-40.91f+70, 35.86f+2);
        glVertex2f(-40.91f+70, 36.59f+2);
        glEnd();

        glBegin(GL_POLYGON);
        glColor3f(0.67f, 0.82f, 0.75f);
        glVertex2f(-45.79f+70, 36.59f-2);
        glVertex2f(-45.79f+70, 35.86f-2);
        glVertex2f(-40.91f+70, 35.86f-2);
        glVertex2f(-40.91f+70, 36.59f-2);
        glEnd();

        glBegin(GL_POLYGON);
        glColor3f(0.67f, 0.82f, 0.75f);
        glVertex2f(-45.79f+72, 36.59f-5);
        glVertex2f(-45.79f+72, 35.86f-5);
        glVertex2f(-40.91f+72, 35.86f-5);
        glVertex2f(-40.91f+72, 36.59f-5);
        glEnd();

        glBegin(GL_POLYGON);
        glColor3f(0.67f, 0.82f, 0.75f);
        glVertex2f(-45.79f+72, 36.59f-7);
        glVertex2f(-45.79f+72, 35.86f-7);
        glVertex2f(-40.91f+72, 35.86f-7);
        glVertex2f(-40.91f+72, 36.59f-7);
        glEnd();

        ////

        glBegin(GL_POLYGON);
        glColor3f(0.67f, 0.84f, 0.82f);
        glVertex2f(R5);
        glVertex2f(U4);
        glVertex2f(V4);
        glVertex2f(S5);
        glEnd();

        glBegin(GL_POLYGON);
        glColor3f(0.56f, 0.74f, 0.7f);
        glVertex2f(S5);
        glVertex2f(W4);
        glVertex2f(Z4);
        glVertex2f(Z42);
        glEnd();

        glBegin(GL_POLYGON);
        glColor3f(0.56f, 0.74f, 0.7f);
        glVertex2f(Z42);
        glVertex2f(W4);
        glVertex2f(Z4);
        glVertex2f(Z42);
        glEnd();

        glBegin(GL_POLYGON);
        glColor3f(0.56f, 0.74f, 0.7f);
        glVertex2f(Z42);
        glVertex2f(A5);
        glVertex2f(B5);
        glVertex2f(T5);
        glEnd();

        //window
        glBegin(GL_POLYGON);
        glColor3f(0.67f, 0.82f, 0.75f);
        glVertex2f(-45.79f+83, 36.59f-2);
        glVertex2f(-45.79f+83, 35.86f-2);
        glVertex2f(-43.91f+83, 35.86f-2);
        glVertex2f(-43.91f+83, 36.59f-2);
        glEnd();

        glBegin(GL_POLYGON);
        glColor3f(0.67f, 0.82f, 0.75f);
        glVertex2f(-45.79f+87, 36.59f-2);
        glVertex2f(-45.79f+87, 35.86f-2);
        glVertex2f(-43.91f+87, 35.86f-2);
        glVertex2f(-43.91f+87, 36.59f-2);
        glEnd();

        glBegin(GL_POLYGON);
        glColor3f(0.67f, 0.82f, 0.75f);
        glVertex2f(-45.79f+83, 36.59f-5);
        glVertex2f(-45.79f+83, 35.86f-5);
        glVertex2f(-43.91f+83, 35.86f-5);
        glVertex2f(-43.91f+83, 36.59f-5);
        glEnd();

        glBegin(GL_POLYGON);
        glColor3f(0.67f, 0.82f, 0.75f);
        glVertex2f(-45.79f+87, 36.59f-5);
        glVertex2f(-45.79f+87, 35.86f-5);
        glVertex2f(-43.91f+87, 35.86f-5);
        glVertex2f(-43.91f+87, 36.59f-5);
        glEnd();

        glBegin(GL_POLYGON);
        glColor3f(0.67f, 0.82f, 0.75f);
        glVertex2f(-45.79f+83, 36.59f-8);
        glVertex2f(-45.79f+83, 35.86f-8);
        glVertex2f(-43.91f+83, 35.86f-8);
        glVertex2f(-43.91f+83, 36.59f-8);
        glEnd();

        glBegin(GL_POLYGON);
        glColor3f(0.67f, 0.82f, 0.75f);
        glVertex2f(-45.79f+87, 36.59f-8);
        glVertex2f(-45.79f+87, 35.86f-8);
        glVertex2f(-43.91f+87, 35.86f-8);
        glVertex2f(-43.91f+87, 36.59f-8);
        glEnd();

        ////

        glBegin(GL_POLYGON);
        glColor3f(0.56f, 0.74f, 0.7f);
        glVertex2f(T5);
        glVertex2f(C5);
        glVertex2f(D5);
        glVertex2f(M2);
        glEnd();

        //lights10

        glBegin(GL_POLYGON);
        glColor3f(0.67f, 0.82f, 0.75f);
        glVertex2f(-45.79f+92, 36.59f-8);
        glVertex2f(-45.79f+92, 35.86f-8);
        glVertex2f(-43.91f+92, 35.86f-8);
        glVertex2f(-43.91f+92, 36.59f-8);
        glEnd();

        glBegin(GL_POLYGON);
        glColor3f(0.67f, 0.82f, 0.75f);
        glVertex2f(-45.79f+92, 36.59f-10);
        glVertex2f(-45.79f+92, 35.86f-10);
        glVertex2f(-43.91f+92, 35.86f-10);
        glVertex2f(-43.91f+92, 36.59f-10);
        glEnd();
    }


    if(state==2)
    {
        glBegin(GL_POLYGON);
        glColor3f(0.67f, 0.84f, 0.82f);
        glVertex2f(L2);
        glVertex2f(N2);
        glVertex2f(O2);
        glVertex2f(E5);
        glEnd();

        glBegin(GL_POLYGON);
        glColor3f(0.56f, 0.74f, 0.7f);
        glVertex2f(E5);
        glVertex2f(P2);
        glVertex2f(Q2);
        glVertex2f(F5);
        glEnd();

        //lights1
        glBegin(GL_POLYGON);
        glColor3f(1.0f, 0.8f, 0.0f);
        glVertex2f(-45.79f, 36.59f);
        glVertex2f(-45.79f, 35.86f);
        glVertex2f(-40.91f, 35.86f);
        glVertex2f(-40.91f, 36.59f);
        glEnd();

        glBegin(GL_POLYGON);
        glColor3f(1.0f, 0.8f, 0.0f);
        glVertex2f(-45.79f, 36.59f+2);
        glVertex2f(-45.79f, 35.86f+2);
        glVertex2f(-40.91f, 35.86f+2);
        glVertex2f(-40.91f, 36.59f+2);
        glEnd();

        glBegin(GL_POLYGON);
        glColor3f(1.0f, 0.8f, 0.0f);
        glVertex2f(-45.79f, 36.59f-2);
        glVertex2f(-45.79f, 35.86f-2);
        glVertex2f(-40.91f, 35.86f-2);
        glVertex2f(-40.91f, 36.59f-2);
        glEnd();

        glBegin(GL_POLYGON);
        glColor3f(1.0f, 0.8f, 0.0f);
        glVertex2f(-45.79f+2, 36.59f-5);
        glVertex2f(-45.79f+2, 35.86f-5);
        glVertex2f(-40.91f+2, 35.86f-5);
        glVertex2f(-40.91f+2, 36.59f-5);
        glEnd();

        glBegin(GL_POLYGON);
        glColor3f(1.0f, 0.8f, 0.0f);
        glVertex2f(-45.79f+2, 36.59f-7);
        glVertex2f(-45.79f+2, 35.86f-7);
        glVertex2f(-40.91f+2, 35.86f-7);
        glVertex2f(-40.91f+2, 36.59f-7);
        glEnd();

        ////

        glBegin(GL_POLYGON);
        glColor3f(0.56f, 0.74f, 0.7f);
        glVertex2f(F5);
        glVertex2f(R2);
        glVertex2f(S2);
        glVertex2f(G5);
        glEnd();

        //lights2

        glBegin(GL_POLYGON);
        glColor3f(1.0f, 0.8f, 0.0f);
        glVertex2f(-45.79f+8, 36.59f-6);
        glVertex2f(-45.79f+8, 35.86f-6);
        glVertex2f(-42.91f+8, 35.86f-6);
        glVertex2f(-42.91f+8, 36.59f-6);
        glEnd();

        glBegin(GL_POLYGON);
        glColor3f(1.0f, 0.8f, 0.0f);
        glVertex2f(-45.79f+8, 36.59f-8);
        glVertex2f(-45.79f+8, 35.86f-8);
        glVertex2f(-42.91f+8, 35.86f-8);
        glVertex2f(-42.91f+8, 36.59f-8);
        glEnd();

        ////

        glBegin(GL_POLYGON);
        glColor3f(0.56f, 0.74f, 0.7f);
        glVertex2f(G5);
        glVertex2f(T2);
        glVertex2f(U2);
        glVertex2f(H5);
        glEnd();

        //lights3

        glBegin(GL_POLYGON);
        glColor3f(1.0f, 0.8f, 0.0f);
        glVertex2f(-45.79f+12, 38.59f-6);
        glVertex2f(-45.79f+12, 35.86f-12);
        glVertex2f(-44.91f+12, 35.86f-12);
        glVertex2f(-44.91f+12, 38.59f-6);
        glEnd();

        glBegin(GL_POLYGON);
        glColor3f(1.0f, 0.8f, 0.0f);
        glVertex2f(-45.79f+14, 38.59f-6);
        glVertex2f(-45.79f+14, 35.86f-12);
        glVertex2f(-44.91f+14, 35.86f-12);
        glVertex2f(-44.91f+14, 38.59f-6);
        glEnd();
        ////

        glBegin(GL_POLYGON);
        glColor3f(0.67f, 0.84f, 0.82f);
        glVertex2f(H5);
        glVertex2f(V2);
        glVertex2f(W2);
        glVertex2f(I5);
        glEnd();

        glBegin(GL_POLYGON);
        glColor3f(0.56f, 0.74f, 0.7f);
        glVertex2f(I5);
        glVertex2f(Z2);
        glVertex2f(M3);
        glVertex2f(J5);
        glEnd();

        //lights4

        glBegin(GL_POLYGON);
        glColor3f(1.0f, 0.8f, 0.0f);
        glVertex2f(-45.79f+20, 38.59f-4);
        glVertex2f(-45.79f+20, 35.86f-12);
        glVertex2f(-44.91f+20, 35.86f-12);
        glVertex2f(-44.91f+20, 38.59f-4);
        glEnd();

        glBegin(GL_POLYGON);
        glColor3f(1.0f, 0.8f, 0.0f);
        glVertex2f(-45.79f+22, 38.59f-4);
        glVertex2f(-45.79f+22, 35.86f-12);
        glVertex2f(-44.91f+22, 35.86f-12);
        glVertex2f(-44.91f+22, 38.59f-4);
        glEnd();

        glBegin(GL_POLYGON);
        glColor3f(1.0f, 0.8f, 0.0f);
        glVertex2f(-45.79f+24, 38.59f-4);
        glVertex2f(-45.79f+24, 35.86f-12);
        glVertex2f(-44.91f+24, 35.86f-12);
        glVertex2f(-44.91f+24, 38.59f-4);
        glEnd();
        ////

        glBegin(GL_POLYGON);
        glColor3f(0.67f, 0.84f, 0.82f);
        glVertex2f(J5);
        glVertex2f(N3);
        glVertex2f(O3);
        glVertex2f(K5);
        glEnd();

        glBegin(GL_POLYGON);
        glColor3f(0.56f, 0.74f, 0.7f);
        glVertex2f(K5);
        glVertex2f(P3);
        glVertex2f(Q3);
        glVertex2f(L5);
        glEnd();

        //lights5
        glBegin(GL_POLYGON);
        glColor3f(1.0f, 0.8f, 0.0f);
        glVertex2f(-45.79f+28, 36.6f);
        glVertex2f(-45.79f+28, 35.9f);
        glVertex2f(-39.0f+28, 35.9f);
        glVertex2f(-39.0f+28, 36.6f);
        glEnd();

        glBegin(GL_POLYGON);
        glColor3f(1.0f, 0.8f, 0.0f);
        glVertex2f(-45.79f+28, 36.6f-2);
        glVertex2f(-45.79f+28, 35.9f-2);
        glVertex2f(-39.0f+28, 35.9f-2);
        glVertex2f(-39.0f+28, 36.6f-2);
        glEnd();

        glBegin(GL_POLYGON);
        glColor3f(1.0f, 0.8f, 0.0f);
        glVertex2f(-45.79f+28, 36.59f-6);
        glVertex2f(-45.79f+28, 35.86f-6);
        glVertex2f(-42.91f+28, 35.86f-6);
        glVertex2f(-42.91f+28, 36.59f-6);
        glEnd();

        glBegin(GL_POLYGON);
        glColor3f(1.0f, 0.8f, 0.0f);
        glVertex2f(-45.79f+28, 36.59f-8);
        glVertex2f(-45.79f+28, 35.86f-8);
        glVertex2f(-42.91f+28, 35.86f-8);
        glVertex2f(-42.91f+28, 36.59f-8);
        glEnd();

        ////

        glBegin(GL_POLYGON);
        glColor3f(0.56f, 0.74f, 0.7f);
        glVertex2f(L5);
        glVertex2f(R3);
        glVertex2f(S3);
        glVertex2f(M5);
        glEnd();

        //lights6

        glBegin(GL_POLYGON);
        glColor3f(1.0f, 0.8f, 0.0f);
        glVertex2f(-45.79f+36, 36.59f-6);
        glVertex2f(-45.79f+36, 35.86f-6);
        glVertex2f(-42.91f+38, 35.86f-6);
        glVertex2f(-42.91f+38, 36.59f-6);
        glEnd();

        glBegin(GL_POLYGON);
        glColor3f(1.0f, 0.8f, 0.0f);
        glVertex2f(-45.79f+36, 36.59f-8);
        glVertex2f(-45.79f+36, 35.86f-8);
        glVertex2f(-42.91f+38, 35.86f-8);
        glVertex2f(-42.91f+38, 36.59f-8);
        glEnd();

        glBegin(GL_POLYGON);
        glColor3f(1.0f, 0.8f, 0.0f);
        glVertex2f(-45.79f+36, 36.59f-10);
        glVertex2f(-45.79f+36, 35.86f-10);
        glVertex2f(-42.91f+38, 35.86f-10);
        glVertex2f(-42.91f+38, 36.59f-10);
        glEnd();


        ////

        glBegin(GL_POLYGON);
        glColor3f(0.56f, 0.74f, 0.7f);
        glVertex2f(M5);
        glVertex2f(T3);
        glVertex2f(U3);
        glVertex2f(N5);
        glEnd();

        //lights7

        glBegin(GL_POLYGON);
        glColor3f(0.67f, 0.82f, 0.75f);
        glVertex2f(-45.79f+48, 38.59f-4);
        glVertex2f(-45.79f+48, 35.86f-12);
        glVertex2f(-44.91f+48, 35.86f-12);
        glVertex2f(-44.91f+48, 38.59f-4);
        glEnd();
        //window
        glBegin(GL_POLYGON);
        glColor3f(1.0f, 0.8f, 0.0f);
        glVertex2f(-45.79f+44, 36.59f-2);
        glVertex2f(-45.79f+44, 35.86f-2);
        glVertex2f(-43.91f+44, 35.86f-2);
        glVertex2f(-43.91f+44, 36.59f-2);
        glEnd();

        glBegin(GL_POLYGON);
        glColor3f(1.0f, 0.8f, 0.0f);
        glVertex2f(-45.79f+51, 36.59f-2);
        glVertex2f(-45.79f+51, 35.86f-2);
        glVertex2f(-43.91f+51, 35.86f-2);
        glVertex2f(-43.91f+51, 36.59f-2);
        glEnd();

        glBegin(GL_POLYGON);
        glColor3f(1.0f, 0.8f, 0.0f);
        glVertex2f(-45.79f+44, 36.59f-5);
        glVertex2f(-45.79f+44, 35.86f-5);
        glVertex2f(-43.91f+44, 35.86f-5);
        glVertex2f(-43.91f+44, 36.59f-5);
        glEnd();

        glBegin(GL_POLYGON);
        glColor3f(1.0f, 0.8f, 0.0f);
        glVertex2f(-45.79f+51, 36.59f-5);
        glVertex2f(-45.79f+51, 35.86f-5);
        glVertex2f(-43.91f+51, 35.86f-5);
        glVertex2f(-43.91f+51, 36.59f-5);
        glEnd();

        glBegin(GL_POLYGON);
        glColor3f(1.0f, 0.8f, 0.0f);
        glVertex2f(-45.79f+44, 36.59f-8);
        glVertex2f(-45.79f+44, 35.86f-8);
        glVertex2f(-43.91f+44, 35.86f-8);
        glVertex2f(-43.91f+44, 36.59f-8);
        glEnd();

        glBegin(GL_POLYGON);
        glColor3f(1.0f, 0.8f, 0.0f);
        glVertex2f(-45.79f+51, 36.59f-8);
        glVertex2f(-45.79f+51, 35.86f-8);
        glVertex2f(-43.91f+51, 35.86f-8);
        glVertex2f(-43.91f+51, 36.59f-8);
        glEnd();

        ////

        glBegin(GL_POLYGON);
        glColor3f(0.56f, 0.74f, 0.7f);
        glVertex2f(N5);
        glVertex2f(V3);
        glVertex2f(W3);
        glVertex2f(O5);
        glEnd();

        glBegin(GL_POLYGON);
        glColor3f(0.56f, 0.74f, 0.7f);
        glVertex2f(O5);
        glVertex2f(Z3);
        glVertex2f(M4);
        glVertex2f(P5);
        glEnd();

        //lights8

        glBegin(GL_POLYGON);
        glColor3f(1.0f, 0.8f, 0.0f);
        glVertex2f(-45.79f+60, 38.59f-4);
        glVertex2f(-45.79f+60, 35.86f-12);
        glVertex2f(-44.91f+60, 35.86f-12);
        glVertex2f(-44.91f+60, 38.59f-4);
        glEnd();

        glBegin(GL_POLYGON);
        glColor3f(1.0f, 0.8f, 0.0f);
        glVertex2f(-45.79f+63, 38.59f-4);
        glVertex2f(-45.79f+63, 35.86f-12);
        glVertex2f(-44.91f+63, 35.86f-12);
        glVertex2f(-44.91f+63, 38.59f-4);
        glEnd();
        ////


        glBegin(GL_POLYGON);
        glColor3f(0.56f, 0.74f, 0.7f);
        glVertex2f(Q5);
        glVertex2f(P4);
        glVertex2f(Q4);
        glVertex2f(R42);
        glEnd();

        glBegin(GL_POLYGON);
        glColor3f(0.56f, 0.74f, 0.7f);
        glVertex2f(R42);
        glVertex2f(R4);
        glVertex2f(S4);
        glVertex2f(S42);
        glEnd();

        glBegin(GL_POLYGON);
        glColor3f(0.56f, 0.74f, 0.7f);
        glVertex2f(R42);
        glVertex2f(R4);
        glVertex2f(S4);
        glVertex2f(S42);
        glEnd();

        glBegin(GL_POLYGON);
        glColor3f(0.56f, 0.74f, 0.7f);
        glVertex2f(S42);
        glVertex2f(S4);
        glVertex2f(T4);
        glVertex2f(R5);
        glEnd();

        //lights9
        glBegin(GL_POLYGON);
        glColor3f(1.0f, 0.8f, 0.0f);
        glVertex2f(-45.79f+70, 36.59f);
        glVertex2f(-45.79f+70, 35.86f);
        glVertex2f(-40.91f+70, 35.86f);
        glVertex2f(-40.91f+70, 36.59f);
        glEnd();

        glBegin(GL_POLYGON);
        glColor3f(1.0f, 0.8f, 0.0f);
        glVertex2f(-45.79f+70, 36.59f+2);
        glVertex2f(-45.79f+70, 35.86f+2);
        glVertex2f(-40.91f+70, 35.86f+2);
        glVertex2f(-40.91f+70, 36.59f+2);
        glEnd();

        glBegin(GL_POLYGON);
        glColor3f(1.0f, 0.8f, 0.0f);
        glVertex2f(-45.79f+70, 36.59f-2);
        glVertex2f(-45.79f+70, 35.86f-2);
        glVertex2f(-40.91f+70, 35.86f-2);
        glVertex2f(-40.91f+70, 36.59f-2);
        glEnd();

        glBegin(GL_POLYGON);
        glColor3f(1.0f, 0.8f, 0.0f);
        glVertex2f(-45.79f+72, 36.59f-5);
        glVertex2f(-45.79f+72, 35.86f-5);
        glVertex2f(-40.91f+72, 35.86f-5);
        glVertex2f(-40.91f+72, 36.59f-5);
        glEnd();

        glBegin(GL_POLYGON);
        glColor3f(1.0f, 0.8f, 0.0f);
        glVertex2f(-45.79f+72, 36.59f-7);
        glVertex2f(-45.79f+72, 35.86f-7);
        glVertex2f(-40.91f+72, 35.86f-7);
        glVertex2f(-40.91f+72, 36.59f-7);
        glEnd();

        ////

        glBegin(GL_POLYGON);
        glColor3f(0.67f, 0.84f, 0.82f);
        glVertex2f(R5);
        glVertex2f(U4);
        glVertex2f(V4);
        glVertex2f(S5);
        glEnd();

        glBegin(GL_POLYGON);
        glColor3f(0.56f, 0.74f, 0.7f);
        glVertex2f(S5);
        glVertex2f(W4);
        glVertex2f(Z4);
        glVertex2f(Z42);
        glEnd();

        glBegin(GL_POLYGON);
        glColor3f(0.56f, 0.74f, 0.7f);
        glVertex2f(Z42);
        glVertex2f(W4);
        glVertex2f(Z4);
        glVertex2f(Z42);
        glEnd();

        glBegin(GL_POLYGON);
        glColor3f(0.56f, 0.74f, 0.7f);
        glVertex2f(Z42);
        glVertex2f(A5);
        glVertex2f(B5);
        glVertex2f(T5);
        glEnd();

        //window
        glBegin(GL_POLYGON);
        glColor3f(1.0f, 0.8f, 0.0f);
        glVertex2f(-45.79f+83, 36.59f-2);
        glVertex2f(-45.79f+83, 35.86f-2);
        glVertex2f(-43.91f+83, 35.86f-2);
        glVertex2f(-43.91f+83, 36.59f-2);
        glEnd();

        glBegin(GL_POLYGON);
        glColor3f(1.0f, 0.8f, 0.0f);
        glVertex2f(-45.79f+87, 36.59f-2);
        glVertex2f(-45.79f+87, 35.86f-2);
        glVertex2f(-43.91f+87, 35.86f-2);
        glVertex2f(-43.91f+87, 36.59f-2);
        glEnd();

        glBegin(GL_POLYGON);
        glColor3f(1.0f, 0.8f, 0.0f);
        glVertex2f(-45.79f+83, 36.59f-5);
        glVertex2f(-45.79f+83, 35.86f-5);
        glVertex2f(-43.91f+83, 35.86f-5);
        glVertex2f(-43.91f+83, 36.59f-5);
        glEnd();

        glBegin(GL_POLYGON);
        glColor3f(1.0f, 0.8f, 0.0f);
        glVertex2f(-45.79f+87, 36.59f-5);
        glVertex2f(-45.79f+87, 35.86f-5);
        glVertex2f(-43.91f+87, 35.86f-5);
        glVertex2f(-43.91f+87, 36.59f-5);
        glEnd();

        glBegin(GL_POLYGON);
        glColor3f(1.0f, 0.8f, 0.0f);
        glVertex2f(-45.79f+83, 36.59f-8);
        glVertex2f(-45.79f+83, 35.86f-8);
        glVertex2f(-43.91f+83, 35.86f-8);
        glVertex2f(-43.91f+83, 36.59f-8);
        glEnd();

        glBegin(GL_POLYGON);
        glColor3f(1.0f, 0.8f, 0.0f);
        glVertex2f(-45.79f+87, 36.59f-8);
        glVertex2f(-45.79f+87, 35.86f-8);
        glVertex2f(-43.91f+87, 35.86f-8);
        glVertex2f(-43.91f+87, 36.59f-8);
        glEnd();

        ////

        glBegin(GL_POLYGON);
        glColor3f(0.56f, 0.74f, 0.7f);
        glVertex2f(T5);
        glVertex2f(C5);
        glVertex2f(D5);
        glVertex2f(M2);
        glEnd();

        //lights10

        glBegin(GL_POLYGON);
        glColor3f(1.0f, 0.8f, 0.0f);
        glVertex2f(-45.79f+92, 36.59f-8);
        glVertex2f(-45.79f+92, 35.86f-8);
        glVertex2f(-43.91f+92, 35.86f-8);
        glVertex2f(-43.91f+92, 36.59f-8);
        glEnd();

        glBegin(GL_POLYGON);
        glColor3f(1.0f, 0.8f, 0.0f);
        glVertex2f(-45.79f+92, 36.59f-10);
        glVertex2f(-45.79f+92, 35.86f-10);
        glVertex2f(-43.91f+92, 35.86f-10);
        glVertex2f(-43.91f+92, 36.59f-10);
        glEnd();
    }


}


void tree()
{
    glBegin(GL_POLYGON);
    glColor3f(0.35f, 0.0f, 0.0f);
	glVertex2f(-43.79f, 10.16f);
	glVertex2f(-43.76f, 16.38f);
	glVertex2f(-43.13f, 16.5f);
	glVertex2f(-43.06, 10.16);
	glEnd();

    glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3f(0.0,1.0,0.0);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x-44,y+16);
        }
    glEnd();

    glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3f(0.0,1.0,0.0);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x-42,y+16);
        }
    glEnd();

    glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3f(0.0,1.0,0.0);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x-45,y+18);
        }
    glEnd();


    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
	for(int i=0;i<200;i++)
        {
            glColor3f(0.0,1.0,0.0);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x-41,y+18);
        }
    glEnd();

    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
	for(int i=0;i<200;i++)
        {
            glColor3f(0.0,1.0,0.0);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x-43,y+20);
        }
    glEnd();

    ////
    glBegin(GL_POLYGON);
    glColor3f(0.35f, 0.0f, 0.0f);
	glVertex2f(43.79f, 10.16f);
	glVertex2f(43.76f, 16.38f);
	glVertex2f(43.13f, 16.5f);
	glVertex2f(43.06, 10.16);
	glEnd();

    glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3f(0.0,1.0,0.0);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x+44,y+16);
        }
    glEnd();

    glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3f(0.0,1.0,0.0);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x+42,y+16);
        }
    glEnd();

    glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3f(0.0,1.0,0.0);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x+45,y+18);
        }
    glEnd();


    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
	for(int i=0;i<200;i++)
        {
            glColor3f(0.0,1.0,0.0);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x+41,y+18);
        }
    glEnd();

    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
	for(int i=0;i<200;i++)
        {
            glColor3f(0.0,1.0,0.0);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x+43,y+20);
        }
    glEnd();

    glFlush();  // Render now


}


void car()
{


    glPushMatrix();
    glTranslatef(_move, 0.0f, 0.0f);

    glBegin(GL_POLYGON);
	glColor3f(0.7f, 0.0f, 0.0f);
	glVertex2f(K5);
	glVertex2f(-18.73f, 21.0f);
	glVertex2f(-18.73f, 21.0f);
	glVertex2f(-16.73f, 21.0f);
	glVertex2f(-16.73f, 21.0f);
	glVertex2f(-16.73f, 22.0f);
	glVertex2f(-16.73f, 22.0f);
	glVertex2f(-14.73f, 22.0f);
	glVertex2f(-14.73f, 22.0f);
	glVertex2f(-14.73f, 21.0f);
	glVertex2f(-14.73f, 21.0f);
	glVertex2f(-12.73f, 21.0f);
	glVertex2f(-12.73f, 21.0f);
	glVertex2f(-12.73f, 20.0f);
	glVertex2f(-12.73f, 20.0f);
	glVertex2f(L5);
	glVertex2f(L5);
	glVertex2f(K5);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.0f, 0.0f, 0.5f);
	glVertex2f(-18.73f+35, 20.0f);
	glVertex2f(-18.73f+35, 21.0f);
	glVertex2f(-18.73f+35, 21.0f);
	glVertex2f(-16.73f+35, 21.0f);
	glVertex2f(-16.73f+35, 21.0f);
	glVertex2f(-16.73f+35, 22.0f);
	glVertex2f(-16.73f+35, 22.0f);
	glVertex2f(-14.73f+35, 22.0f);
	glVertex2f(-14.73f+35, 22.0f);
	glVertex2f(-14.73f+35, 21.0f);
	glVertex2f(-14.73f+35, 21.0f);
	glVertex2f(-12.73f+35, 21.0f);
	glVertex2f(-12.73f+35, 21.0f);
	glVertex2f(-12.73f+35, 20.0f);
	glVertex2f(-12.73f+35, 20.0f);
	glVertex2f(-10.36f+35, 20.0f);
	glVertex2f(-10.36f+35, 20.0f);
	glVertex2f(-18.73f+35, 20.0f);
	glEnd();

	//wheels
	glBegin(GL_POLYGON);// Blue car
	for(int i=0;i<200;i++)
    {
        glColor3f(0.4f, 0.4f, 0.4f);
        float pi=3.1416;
        float A=(i*1*pi)/200;
        float r=0.60;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-18.73f+36,y+20.0f);
    }
    glEnd();
    glBegin(GL_POLYGON);// Blue car
	for(int i=0;i<200;i++)
    {
        glColor3f(0.4f, 0.4f, 0.4f);
        float pi=3.1416;
        float A=(i*1*pi)/200;
        float r=0.60;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-18.73f+40,y+20.0f);
    }

    glEnd();

    glBegin(GL_POLYGON);// red car
	for(int i=0;i<200;i++)
    {
        glColor3f(0.4f, 0.4f, 0.4f);
        float pi=3.1416;
        float A=(i*1*pi)/200;
        float r=0.60;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-17.73f,y+20.0f);
    }

    glEnd();


    glBegin(GL_POLYGON);// red car
	for(int i=0;i<200;i++)
    {
        glColor3f(0.4f, 0.4f, 0.4f);
        float pi=3.1416;
        float A=(i*1*pi)/200;
        float r=0.60;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-13.73f,y+20.0f);
    }

    glEnd();



	glPopMatrix();
    glutSwapBuffers();
}

void update(int value) {

    _move += speed;
    if(_move > 70.3)
    {
    _move = -70.0;
    }
    if(_move < -70.3)
    {
    _move = 70.0;
    }
    glutPostRedisplay();
    glutTimerFunc(20, update, 0);
}


// Function to draw text
void drawText(const char* text, float x, float y) {
    glRasterPos2f(x, y);
    for (const char* c = text; *c != '\0'; c++) {
        glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, *c);
    }
}

void foodCart()
{
    // Draw the cart body (striped pattern)
    glColor3f(0.9f, 0.75f, 0.0f); // Yellow color
    glBegin(GL_QUADS);
    glVertex2f(-40.0f, 10.0f); // Cart base top left
    glVertex2f(-25.0f, 10.0f);  // Cart base top right
    glVertex2f(-25.0f, 5.0f);   // Cart base bottom right
    glVertex2f(-40.0f, 5.0f);  // Cart base bottom left
    glEnd();

    glColor3f(0.0f, 0.5f, 0.0f); // Green stripes
    float stripeWidth = 2.5f;
    for (float x = -40.0f; x < -25.0f; x += stripeWidth * 2) {
        glBegin(GL_QUADS);
        glVertex2f(x, 10.0f); // Top left of stripe
        glVertex2f(x + stripeWidth, 10.0f); // Top right of stripe
        glVertex2f(x + stripeWidth, 5.0f);  // Bottom right of stripe
        glVertex2f(x, 5.0f);  // Bottom left of stripe
        glEnd();
    }

    // Draw the roof of the cart (striped)
    glColor3f(0.9f, 0.75f, 0.0f); // Yellow color
    glBegin(GL_QUADS);
    glVertex2f(-40.0f, 17.0f); // Roof top left
    glVertex2f(-25.0f, 17.0f);  // Roof top right
    glVertex2f(-25.0f, 12.0f);  // Roof bottom right
    glVertex2f(-40.0f, 12.0f); // Roof bottom left
    glEnd();

    // Green stripes on the roof
    for (float x = -40.0f; x < -25.0f; x += stripeWidth * 2) {
        glColor3f(0.0f, 0.5f, 0.0f); // Green color for stripes
        glBegin(GL_QUADS);
        glVertex2f(x, 17.0f); // Top left of stripe
        glVertex2f(x + stripeWidth, 17.0f); // Top right of stripe
        glVertex2f(x + stripeWidth, 12.0f);  // Bottom right of stripe
        glVertex2f(x, 12.0f);  // Bottom left of stripe
        glEnd();
    }

    // Draw vertical poles for the roof
    glColor3f(0.0f, 0.0f, 0.0f); // Black color for poles
    glLineWidth(5.0f);
    glBegin(GL_LINES);
    glVertex2f(-19.0f-20, 12.0f); // Left pole
    glVertex2f(-19.0f-20, 10.0f);
    glVertex2f(-6.0f-20, 12.0f); // Right pole
    glVertex2f(-6.0f-20, 10.0f);
    glEnd();

    // Draw wheels (two circles)
    float radius = 2.0f;
    int num_segments = 100;

    // Left wheel
    glColor3f(0.0f, 0.0f, 0.0f); // Black color
    glBegin(GL_POLYGON);
    for (int i = 0; i < num_segments; i++) {
        float theta = 2.0f * 3.1415926f * float(i) / float(num_segments);
        float dx = radius * cosf(theta);
        float dy = radius * sinf(theta);
        glVertex2f(dx - 18.0f-20, dy + 5.0f); // Centered around (-18, -1)
    }
    glEnd();

    // Right wheel
    glBegin(GL_POLYGON);
    for (int i = 0; i < num_segments; i++) {
        float theta = 2.0f * 3.1415926f * float(i) / float(num_segments);
        float dx = radius * cosf(theta);
        float dy = radius * sinf(theta);
        glVertex2f(dx - 7.0f-20, dy + 5.0f); // Centered around (-7, -1)
    }
    glEnd();

    // Draw a circle around the text "Food"
    float circle_radius = 4.0f;  // Circle radius around the text
    glColor3f(1.0f, 0.75f, 0.5f); // Red color for circle (like a signboard)
    glBegin(GL_POLYGON);
    for (int i = 0; i < num_segments; i++) {
        float theta = 1.0f * 3.1415926f * float(i) / float(num_segments);
        float dx = circle_radius * cosf(theta);
        float dy = circle_radius * sinf(theta);
        glVertex2f(dx - 33.0f, dy + 16.9f); // Center the circle around (-35, 17)
    }
    glEnd();

    // Draw the text "Food" on the roof
    glColor3f(1.0f, 0.0f, 0.0f); // White color for text
    drawText("Food", -34.5f, 17.5f); // Placed in the middle of the circle
}

void change_day_night(int value){
    if (state== 1){
        state = 2;
    }
    else if (state == 2){
        state = 1;

    }
    glutPostRedisplay();
    glutTimerFunc(2000,change_day_night, 0 );

}


void display4(int val) {

 glutDisplayFunc(display3);


}

void display2(int val) {

 glutDisplayFunc(displayCity);


}

void display1(int val) {

 glutDisplayFunc(display2);


}

void dis()
{
       glutDisplayFunc(displayVillage);
}


void display3(int val) {

 glutDisplayFunc(dis);


}

void displayCity() {

    if (state == 1)
    {
        glClearColor(1.0f, 1.0f,1.0f, 1.0f); // Set background color to black and opaque
        glClear(GL_COLOR_BUFFER_BIT);

        parkGreen();
        buildings();
        bench();
        dustbin();
        car();
        lamppost();
        tree();
        path();
        foodCart();
    }


    else if (state == 2)
    {
        glClearColor(0.0f, 0.0f,0.0f, 1.0f); // Set background color to black and opaque

        glClear(GL_COLOR_BUFFER_BIT);

        //parkGreen();
        buildings();
        bench();
        dustbin();
        car();
        lamppost();
        //tree();
        //path();
        foodCart();

    }

    glutTimerFunc(1500,display3,0);

    glFlush();
}



void handleMouse(int button, int state, int x, int y) {
	if (button == GLUT_LEFT_BUTTON)
	{	speed += 0.1f;
			}
if (button == GLUT_RIGHT_BUTTON)
	{speed -= 0.1f;   }
glutPostRedisplay();}


void handleKeypress(unsigned char key, int x, int y) {
	switch (key) {
case 's':
    speed = 0.0f;
    break;
case 'a':
    speed = 0.1f;
    break;
glutPostRedisplay();
	}}




////////////////////////////////////////////////////////////////////////
                //village life
///////////////////////////////////////////////////////////////////////


void khor_pala(){

     //upper extension of the khor pala

     glColor3f(0, 0, 0);
    glBegin(GL_POLYGON);

    //right yellow chad
    glVertex2f(-433.98356, 57.3442926);
    glVertex2f(-434, 80);
    glVertex2f(-425, 80);
    glVertex2f(-425, 57.3442926);

    glEnd();

    //yellow khor pala
    glColor3f(1, 1, 0);
    glBegin(GL_POLYGON);

    glVertex2f(-387.48784, 23.76182488);
    glVertex2f(-400, 45);
    glVertex2f(-430, 60);
    glVertex2f(-468, 34);
    glVertex2f(-484, 6);
    glVertex2f(-490, -52);
    glVertex2f(-486, -78);
    glVertex2f(-455, -100);
    glVertex2f(-405, -100);
    glVertex2f(-380, -80);
    glVertex2f(-380, -20);

    glEnd();

}

void outline_khor_pala()
{
     //upper extension of the khor pala

    glColor3f(0, 0, 0);
    glBegin(GL_POLYGON);

    //right yellow chad
    glVertex2f(-433.98356, 57.3442926);
    glVertex2f(-434, 80);
    glVertex2f(-425, 80);
    glVertex2f(-425, 57.3442926);

    glEnd();

    glColor3f(0, 0, 0);
    glLineWidth(1.5);
    glBegin(GL_LINES);

    glVertex2f(-387.48784, 23.76182488);
    glVertex2f(-400, 45);
    glVertex2f(-430, 60);
    glVertex2f(-468, 34);
    glVertex2f(-484, 6);
    glVertex2f(-490, -52);
    glVertex2f(-486, -78);
    glVertex2f(-455, -100);
    glVertex2f(-405, -100);
    glVertex2f(-380, -80);
    glVertex2f(-380, -20);

    glEnd();

}


void house_2(){

    //right yellow chad
    glColor3f(1, 0.5, 0);
    glBegin(GL_POLYGON);

    glVertex2f(-365, 50);
    glVertex2f(-320, -20);
    glVertex2f(-165, -20);
    glVertex2f(-225, 50);

    glEnd();

    glColor3f(1, 0.5, 0);

    glBegin(GL_POLYGON);

    //left yellow chad
    glVertex2f(-365, 50);
    glVertex2f(-425, -20);
    glVertex2f(-380, -20);
    glVertex2f(-347.9209, 23.43264033);

    glEnd();

    //under 1 gray color area (door)
    glColor3f(0.9, 0.9, 0.9);
    glBegin(GL_POLYGON);
    glVertex2f(-347.9209, 23.43264033);
    glVertex2f(-380, -20);
    glVertex2f(-380, -80);
    glVertex2f(-320, -90);
    glVertex2f(-320, -20);

    glEnd();

    //under 2 gray color area (window)
    glColor3f(0.9, 0.9, 0.9);
    glBegin(GL_POLYGON);

    glVertex2f(-320, -20);
    glVertex2f(-320, -90);
    glVertex2f(-185, -65);
    glVertex2f(-185, -20);

    glEnd();


    //under extension of house 2

    // number 1(door)

    glColor3f(0.9, 0.8, 0.7);
    glBegin(GL_POLYGON);

    glVertex2f(-380, -80);
    glVertex2f(-405, -100);
    glVertex2f(-320, -115);
    glVertex2f(-320, -90);

    glEnd();


    // number 2(extension)

    glColor3f(0.9, 0.9, 0.9);
    glBegin(GL_POLYGON);

    glVertex2f(-320, -90);
    glVertex2f(-320, -115);
    glVertex2f(-170, -80);
    glVertex2f(-185, -65);

    glEnd();


     //door
     glColor3f(1, 0.5, 0);
    glBegin(GL_POLYGON);

    glVertex2f(-360, -30);
    glVertex2f(-360, -70);
    glVertex2f(-340, -70);
    glVertex2f(-340, -30);

    glEnd();

    //window
     glColor3f(1, 0.5, 0);
    glBegin(GL_POLYGON);

    glVertex2f(-280, -30);
    glVertex2f(-280, -60);
    glVertex2f(-250, -60);
    glVertex2f(-250, -30);

    glEnd();


}

void outline_house_2(){

    //right yellow chad
    glColor3f(0, 0, 0);
    glLineWidth(1.5);
    glBegin(GL_LINES);

    glVertex2f(-365, 50);
    glVertex2f(-320, -20);
    glVertex2f(-320, -20);
    glVertex2f(-165, -20);
    glVertex2f(-165, -20);
    glVertex2f(-225, 50);
    glVertex2f(-225, 50);
    glVertex2f(-365, 50);

    glEnd();

    glColor3f(0, 0, 0);
    glLineWidth(1.5);
    glBegin(GL_LINES);

    //left yellow chad
    glVertex2f(-365, 50);
    glVertex2f(-425, -20);
    glVertex2f(-425, -20);
    glVertex2f(-380, -20);
    glVertex2f(-380, -20);
    glVertex2f(-347.9209, 23.43264033);

    glEnd();

    //under 1 gray color area (door)
    glColor3f(0, 0, 0);
    glLineWidth(1.5);
    glBegin(GL_LINES);
    glVertex2f(-347.9209, 23.43264033);
    glVertex2f(-380, -20);
    glVertex2f(-380, -20);
    glVertex2f(-380, -80);
    glVertex2f(-380, -80);
    glVertex2f(-320, -90);
    glVertex2f(-320, -90);
    glVertex2f(-320, -20);

    glEnd();

    //under 2 gray color area (window)
    glColor3f(0, 0, 0);
    glLineWidth(1.5);
    glBegin(GL_LINES);

    glVertex2f(-320, -20);
    glVertex2f(-320, -90);
    glVertex2f(-320, -90);
    glVertex2f(-185, -65);
    glVertex2f(-185, -65);
    glVertex2f(-185, -20);

    glEnd();


    //under extension of house 2

    // number 1(door)

    glColor3f(0, 0, 0);
    glLineWidth(1.5);
    glBegin(GL_LINES);

    glVertex2f(-380, -80);
    glVertex2f(-405, -100);
    glVertex2f(-405, -100);
    glVertex2f(-320, -115);
    glVertex2f(-320, -115);
    glVertex2f(-320, -90);

    glEnd();


    // number 2(extension)

    glColor3f(0, 0, 0);
    glLineWidth(1.5);
    glBegin(GL_LINES);

    glVertex2f(-320, -90);
    glVertex2f(-320, -115);
    glVertex2f(-320, -115);
    glVertex2f(-170, -80);
    glVertex2f(-170, -80);
    glVertex2f(-185, -65);

    glEnd();


     //door
    glColor3f(0, 0, 0);
    glLineWidth(1.5);
    glBegin(GL_LINES);

    glVertex2f(-360, -30);
    glVertex2f(-360, -70);
    glVertex2f(-360, -70);
    glVertex2f(-340, -70);
    glVertex2f(-340, -70);
    glVertex2f(-340, -30);
    glVertex2f(-340, -30);
    glVertex2f(-360, -30);

    glEnd();

    //window
    glColor3f(0, 0, 0);
    glLineWidth(1.5);
    glBegin(GL_LINES);

    glVertex2f(-280, -30);
    glVertex2f(-280, -60);
    glVertex2f(-280, -60);
    glVertex2f(-250, -60);
    glVertex2f(-250, -60);
    glVertex2f(-250, -30);
    glVertex2f(-250, -30);
    glVertex2f(-280, -30);

    glEnd();


}


void house_1(){
  //black area under traffic light poll
    //upper portion
    glColor3f(1, 0.7, 0);
    glBegin(GL_POLYGON);

    glVertex2f(-455, 50);
    glVertex2f(-555, 50);
    glVertex2f(-650, -25);
    glVertex2f(-490, -25);
    glVertex2f(-440, 0);

    glEnd();

    //lowerportion
         glColor3f(0.9, 0.9, 0.9);
    glBegin(GL_POLYGON);

    glVertex2f(-620.0788546, -25);
    glVertex2f(-619.975899, -78);
    glVertex2f(-486, -78);
    glVertex2f(-486, -25);

    glEnd();

    //extream lower portion
    glColor3f(1, 1, 1);
    glBegin(GL_POLYGON);

    glVertex2f(-636, -78);
    glVertex2f(-636, -100);
    glVertex2f(-455, -100);
    glVertex2f(-455, -78);

    glEnd();

    //door
    glColor3f(1, 0.5, 0);
    glBegin(GL_POLYGON);

    glVertex2f(-570, -30);
    glVertex2f(-570, -70);
    glVertex2f(-540, -70);
    glVertex2f(-540, -30);


    glEnd();

}

void outline_house_1(){
  //black area under traffic light poll
    //upper portion
    glColor3f(0, 0, 0);
    glLineWidth(1.5);
    glBegin(GL_LINES);

    glVertex2f(-455, 50);
    glVertex2f(-555, 50);
    glVertex2f(-555, 50);
    glVertex2f(-650, -25);
    glVertex2f(-650, -25);
    glVertex2f(-490, -25);
    glVertex2f(-490, -25);
    glVertex2f(-440, 0);
    glVertex2f(-440, 0);
    glVertex2f(-455, 50);

    glEnd();

    //lowerportion
    glColor3f(0, 0, 0);
    glLineWidth(1.5);
    glBegin(GL_LINES);

    glVertex2f(-620.0788546, -25);
    glVertex2f(-619.975899, -78);
    glVertex2f(-619.975899, -78);
    glVertex2f(-486, -78);
    glVertex2f(-486, -78);
    glVertex2f(-486, -25);
    glVertex2f(-486, -25);
    glVertex2f(-620.0788546, -25);

    glEnd();

    glColor3f(0, 0, 0);
    glLineWidth(1.5);
    glBegin(GL_LINES);

    glVertex2f(-636, -78);
    glVertex2f(-636, -100);
    glVertex2f(-636, -100);
    glVertex2f(-455, -100);
    glVertex2f(-455, -100);
    glVertex2f(-455, -78);
    glVertex2f(-455, -78);
    glVertex2f(-636, -78);

    glEnd();

    //door
    glColor3f(0, 0, 0);
    glLineWidth(1.5);
    glBegin(GL_LINES);

    glVertex2f(-570, -30);
    glVertex2f(-570, -70);
    glVertex2f(-570, -70);
    glVertex2f(-540, -70);
    glVertex2f(-540, -70);
    glVertex2f(-540, -30);
    glVertex2f(-540, -30);
    glVertex2f(-570, -30);

    glEnd();

}

void grass(){

    glColor3f(0, 1, 0);
    glBegin(GL_POLYGON);

    glVertex2f(-1000, -75);
    glVertex2f(-1000, -100);
    glVertex2f(-710, -140);
    glVertex2f(-765, -180);
    glVertex2f(-425, -230);
    glVertex2f(-445, -250);
    glVertex2f(-435, -265);
    glVertex2f(-380, -275);
    glVertex2f(-315, -280);
    glVertex2f(-150, -300);
    glVertex2f(50, -300);
    glVertex2f(50, -40);


    glEnd();
}



void trunk()
{
    glColor3f(0.5f, 0.3f, 0.0f);
    glBegin(GL_POLYGON);
    /*
    glVertex2f(-120, 24.5);
    glVertex2f(-140, 24.5);
    glVertex2f(-140, -65);
    glVertex2f(-162, -83);
    glVertex2f(-108, -83);
    glVertex2f(-120, -65);
    glVertex2f(-120, -24.5);
    */

    glVertex2f(-140, -65);
    glVertex2f(-162, -83);
    glVertex2f(-108, -83);
    glVertex2f(-120, -65);
    glVertex2f(-120, 24.5);
    glVertex2f(-140, 24.5);
    /*
    */

    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(-120, 24.5);
    glVertex2f(-107.7, 35);
    glVertex2f(-113.7, 42);
    glVertex2f(-119.7, 37);
    glVertex2f(-119.7, 61);
    glVertex2f(-131.7, 61);
    glVertex2f(-131.7, 43);
    glVertex2f(-140.2, 50.6);
    glVertex2f(-144.7, 42);
    glVertex2f(-140, 37);
    glVertex2f(-140, 24.5);
    glEnd();

}

void leaves()
{
    glBegin(GL_POLYGON);

    glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(-140+ leafOffset, 30.5);
    glVertex2f(-152.5+ leafOffset, 17.5);
    glVertex2f(-168+ leafOffset, 16.5);
    glVertex2f(-179+ leafOffset, 27);
    glVertex2f(-180+ leafOffset, 40);
    glVertex2f(-189+ leafOffset, 44);
    glVertex2f(-197.2+ leafOffset, 53.4);
    glVertex2f(-200.2+ leafOffset, 68);
    glVertex2f(-197.5+ leafOffset,80.5);
    glVertex2f(-192.5+ leafOffset,87.5);
    glVertex2f(-184.3+ leafOffset,91.3);
    glVertex2f(-182.6+ leafOffset,101.1);
    glVertex2f(-176+ leafOffset,109);
    glVertex2f(-166+ leafOffset,111.5);
    glVertex2f(-155.8+ leafOffset,111.85 );
    glVertex2f(-150.8+ leafOffset,110.2 );
    glVertex2f(-145.4+ leafOffset,109.2 );
    glVertex2f(-140.4+ leafOffset,114 );
    glVertex2f(-129.8+ leafOffset,117.6 );
    glVertex2f(-119.05+ leafOffset,117.35 );
    glVertex2f(-111.1+ leafOffset,113.7 );
    glVertex2f(-104.4+ leafOffset,106.2 );
    glVertex2f(-100+ leafOffset,100 );
    glVertex2f(-92+ leafOffset,100.6 );
    glVertex2f(-82+ leafOffset,97.4 );
    glVertex2f(-76.1+ leafOffset,88.8);
    glVertex2f(-76+ leafOffset,78.8);
    glVertex2f(-78.45+ leafOffset, 71.9);
    glVertex2f(-73.6+ leafOffset, 67.8);
    glVertex2f(-70.2+ leafOffset, 61.4);
    glVertex2f(-71+ leafOffset, 51);
    glVertex2f(-75.86+ leafOffset, 43.68);
    glVertex2f(-73.04+ leafOffset, 37.78);
    glVertex2f(-70+ leafOffset, 30);
    glVertex2f(-73+ leafOffset, 19);
    glVertex2f(-85+ leafOffset, 8.5);
    glVertex2f(-99+ leafOffset, 7.2);
    glVertex2f(-112+ leafOffset, 10);
    glVertex2f(-120+ leafOffset, 24.5);

    glEnd();
}

// Function to render the tree with moving leaves
void renderTree() {
    // Clear the screen
    //glClear(GL_COLOR_BUFFER_BIT);

    // Animate the leaves by slightly changing their position
    leaves();

    // Draw the trunk
    trunk();

    //glFlush();  // Render the tree
}

// Timer function to update the leaf movement
void timer(int value) {
    // Simulate simple leaf movement (oscillating back and forth)
    leafOffset = 3.0f * sin(value * 0.1f);  // Simple sine wave motion
    //sunOffset = 100.0f * cos(value * 0.1f);  // Simple cos wave motion
    // Request a redraw
    glutPostRedisplay();

    // Set up the next timer event
    glutTimerFunc(30, timer, value + 1);  // Update every 30 ms
}


void two_hills(){
    // first hill
    glColor3f(0, 0.8, 0);
    glBegin(GL_POLYGON);

    glVertex2f(-1000, -45.5);
    glVertex2f(-900, 50);
    glVertex2f(-883, 61);
    glVertex2f(-870, 61);
    glVertex2f(-850, 51);
    glVertex2f(-812.251844, 26.727090);
    glVertex2f(-895, -75);
    glVertex2f(-1000, -75);


    glEnd();

    //second hill
    glBegin(GL_POLYGON);

    glColor3f(0, 0.5, 0);
    glVertex2f(-895, -75);
    //glVertex2f(-812.251844, 26.727090);
    glVertex2f(-786, 59);
    glVertex2f(-780, 65);
    glVertex2f(-773, 65);
    glVertex2f(-764, 61);
    glVertex2f(-580, -75);



    glEnd();
}

void sun(){
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
	for(int i=0;i<360;i++)
    {
        glColor3f(1,0.9,0);
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r= 85.3901037;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x - 824.535315,y + 53.8050655+sunOffset );
    }

    //glVertex2f(0.3f,0.4f);
    //glVertex2f(0.1f,0.4f);

	glEnd();

	glLineWidth(5);
	glColor3f(0, 0, 0);
	glBegin(GL_LINES);
	glVertex2f(-968, 48+sunOffset);
	glVertex2f(-926, 56+sunOffset);
	glEnd();

	glBegin(GL_LINES);
	glVertex2f(-980, 88+sunOffset);
	glVertex2f(-918, 70+sunOffset);
	glEnd();

	glBegin(GL_LINES);
	glVertex2f(-954, 124+sunOffset);
	glVertex2f(-922, 104+sunOffset);
	glEnd();

	glBegin(GL_LINES);
	glVertex2f(-954, 124+sunOffset);
	glVertex2f(-922, 104+sunOffset);
	glEnd();

	glBegin(GL_LINES);
	glVertex2f(-925, 150+sunOffset);
	glVertex2f(-896, 124+sunOffset);
	glEnd();

	glBegin(GL_LINES);
	glVertex2f(-888,158+sunOffset);
	glVertex2f(-874,138+sunOffset);
	glEnd();

	glBegin(GL_LINES);
	glVertex2f(-852, 194+sunOffset);
	glVertex2f(-850, 150+sunOffset);
	glEnd();

	glBegin(GL_LINES);
	glVertex2f(-814, 170+sunOffset);
	glVertex2f(-816, 152+sunOffset);
	glEnd();

	glBegin(GL_LINES);
	glVertex2f(-758, 172+sunOffset);
	glVertex2f(-780, 142+sunOffset);
	glEnd();

	glBegin(GL_LINES);
	glVertex2f(-744, 142+sunOffset);
	glVertex2f(-760, 128+sunOffset);
	glEnd();

	glBegin(GL_LINES);
	glVertex2f(-680, 150+sunOffset);
	glVertex2f(-740, 110+sunOffset);
	glEnd();

	glBegin(GL_LINES);
	glVertex2f(-680, 100+sunOffset);
	glVertex2f(-730, 90+sunOffset);
	glEnd();

	glBegin(GL_LINES);
	glVertex2f(-728, 66+sunOffset);
	glVertex2f(-674, 58+sunOffset);
	glEnd();

}

void timer2(int value) {
    // Simulate simple leaf movement (oscillating back and forth)
    sunOffset = 100.0f * sin(value * 0.05f);  // Simple sin wave motion
    // Request a redraw
    glutPostRedisplay();

    // Set up the next timer event
    glutTimerFunc(30, timer2, value + 1);  // Update every 30 ms
}


void boat(){

 //sitting area
    glBegin(GL_POLYGON);
    glColor3f(0.5, 0.3, 0);
    glVertex2f(-936- leafOffset, -218);
    glVertex2f(-824- leafOffset, -218);
    glVertex2f(-800.6849- leafOffset, -179.6123);
    glVertex2f(-972- leafOffset, -180);

    glEnd();

    //shade
    glBegin(GL_POLYGON);
    glColor3f(1, .9, .6);
    glVertex2f(-880- leafOffset, -194);
    glVertex2f(-836- leafOffset, -194);
    glVertex2f(-817.9758973- leafOffset, -186.61688);
    glVertex2f(-826.261432- leafOffset, -169.25207);
    glVertex2f(-850- leafOffset, -148);
    glVertex2f(-907- leafOffset, -148);
    glVertex2f(-894- leafOffset, -157);
    glVertex2f(-885.1914705- leafOffset, -180.2796);

    glEnd();

    //shade left

    glBegin(GL_POLYGON);
    glColor3f(1, .9, .6);
    glVertex2f(-936.8605- leafOffset, -180.1132086);
    glVertex2f(-885.1914705- leafOffset, -180.2796);
    glVertex2f(-894- leafOffset, -157);
    glVertex2f(-907- leafOffset, -148);
    glVertex2f(-924- leafOffset, -156);
    glVertex2f(-934- leafOffset, -174);

    glEnd();

    //stick

    glLineWidth(6);
    glBegin(GL_LINES);
    glColor3f(0, 0, 0);
    glVertex2f(-846, -240);
    glVertex2f(-806, -106);


    glEnd();

    //black lower area
    glBegin(GL_POLYGON);
    glColor3f(0, 0, 0);
    glVertex2f(-936- leafOffset, -218);
    glVertex2f(-824- leafOffset, -218);
    glVertex2f(-782- leafOffset, -172);
    glVertex2f(-836- leafOffset, -194);
    glVertex2f(-930- leafOffset, -194);
    glVertex2f(-972- leafOffset, -180);
    glEnd();

}

void change_day_night(int value){
    if (state== 1){
        glutTimerFunc(500,change_day_night, 0 );
        state = 2;
    }
    else if (state == 2){
        state = 1;
        glutTimerFunc(3000,change_day_night, 0 );

    }
        glutPostRedisplay();
        //glutTimerFunc(2000,change_day_night, 0 );

}


void display2(int val) {

 glutDisplayFunc(display3);


}

void displayVillage() {

    glClear(GL_COLOR_BUFFER_BIT);
    glLoadIdentity();

    if (state == 1)
    glClearColor(0.0f, 0.6f,0.90f, 1.0f); // Set background color to black and opaque

    else if (state == 2)
    glClearColor(0.0f, 0.0f,0.0f, 1.0f); // Set background color to black and opaque
    glClear(GL_COLOR_BUFFER_BIT);
    if (state == 1)
    sun();
    two_hills();
    grass(); // Clear the color buffer (background)
    renderTree();
    house_1();
    outline_house_1();
    khor_pala();
    outline_khor_pala();
    house_2();
    outline_house_2();
    boat();
    glFlush(); // Render now

    glutTimerFunc(1500,display1,0);
}






/* Main function: GLUT runs as a console application starting at main() */

int main(int argc, char** argv) {

    glutInitWindowSize(1020, 520); // Set the window's initial width & height
    glutInit(&argc, argv); // Initialize GLUT

    glutCreateWindow("OpenGL Setup Test"); // Create a window with the given title


    glutDisplayFunc(dis); // Register display callback handler for window re-paint
    glutTimerFunc(0, timer, 0);  // Start the timer for animation
    glutTimerFunc(0, timer2, -100);  // Start the timer2 for animation
    gluOrtho2D(-1000, +50, -300, 200);
    glutTimerFunc(2000,change_day_night, 0 );

    gluOrtho2D(-50.0, 50.0, -5.0, 50.0);
    glutTimerFunc(20, update, 0); //Add a timer
    glutKeyboardFunc(handleKeypress);
    glutMouseFunc(handleMouse);
    glutTimerFunc(2000,change_day_night, 0 );

    glutMainLoop(); // Enter the event-processing loop

    return 0;

}
