#include <windows.h>  // for MS Windows
#include <GL/glut.h>  // GLUT, include glu.h and gl.h

/* Program entry point */

/* Handler for window-repaint event. Call back when the window first appears and
whenever the window needs to be re-painted. */

void task1() {
	glClearColor(0.0f, 0.0f, 0.0f, 1.0f); // Set background color to black and opaque
	glClear(GL_COLOR_BUFFER_BIT);         // Clear the color buffer (background)
	glPointSize(5.0);
	// Draw a Red 1x1 Square centered at origin
	glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 0.0f, 0.0f); // Red
	glVertex2f(-6.0f, 4.0f);    // x, y

    glColor3f(1.0f, 0.0f, 1.0f); // Violet
	glVertex2f(5.0f, 4.0f);    // x, y

	glColor3f(1.0f, 1.0f, 0.0f); // Red
	glVertex2f(-6.0f, -4.0f);    // x, y

    glColor3f(1.0f, 1.0f, 1.0f); // Violet
	glVertex2f(5.0f,-4.0f);    // x, y
	glEnd();

    glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 0.0f, 0.0f); // Red
	glVertex2f(-6.0f, 4.0f);    // x, y

    glColor3f(1.0f, 1.0f, 0.0f); // Red
	glVertex2f(-6.0f, -4.0f);    // x, y
    glEnd();

    glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 0.0f); // Red
	glVertex2f(-6.0f, -4.0f);    // x, y

    glColor3f(1.0f, 0.0f, 1.0f); // Violet
	glVertex2f(5.0f, -4.0f);    // x, y
    glEnd();

    glBegin(GL_LINES);
    glColor3f(1.0f, 0.0f, 1.0f); // Violet
	glVertex2f(5.0f, -4.0f);    // x, y

	glColor3f(1.0f, 1.0f, 1.0f); // Violet
	glVertex2f(5.0f, 4.0f);    // x, y
    glEnd();

    glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 1.0f); // Violet
	glVertex2f(5.0f, 4.0f);    // x, y

	glColor3f(1.0f, 0.0f, 0.0f); // Red
	glVertex2f(-6.0f, 4.0f);    // x, y
	glEnd();

	glFlush();  // Render now
}


void task2() {
	glClearColor(0.0f, 0.0f, 0.0f, 1.0f); // Set background color to black and opaque
	glClear(GL_COLOR_BUFFER_BIT);         // Clear the color buffer (background)
	glPointSize(5.0);
	// Draw a Red 1x1 Square centered at origin
	glBegin(GL_POLYGON);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 0.0f, 0.0f); // Red
	glVertex2f(-3.0f, 2.0f);    // x, y

    glColor3f(1.0f, 0.0f, 0.0f); // Violet
	glVertex2f(-6.0f, -4.0f);    // x, y

	glColor3f(1.0f, 0.0f, 0.0f); // Red
	glVertex2f(5.0f, -4.0f);    // x, y

    glColor3f(1.0f, 0.0f, 0.0f); // Violet
	glVertex2f(2.0f, 2.0f);    // x, y
	glEnd();

	glFlush();  // Render now
}

void task3() {
	glClearColor(0.0f, 0.0f, 0.0f, 1.0f); // Set background color to black and opaque
	glClear(GL_COLOR_BUFFER_BIT);         // Clear the color buffer (background)
	glPointSize(5.0);
	// Draw a Red 1x1 Square centered at origin
	glBegin(GL_POLYGON);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 0.0f, 0.0f); // A
	glVertex2f(-2.0f, 0.8f);    // x, y

    glColor3f(1.0f, 0.0f, 0.0f); // C
	glVertex2f(-2.0f, -0.8f);    // x, y

	glColor3f(1.0f, 0.0f, 0.0f); // D
	glVertex2f(-1.0f, -2.0f);    // x, y

    glColor3f(1.0f, 0.0f, 0.0f); // H
	glVertex2f(1.0f, -2.0f);    // x, y

	glColor3f(1.0f, 0.0f, 0.0f); // G
	glVertex2f(2.0f, -0.8f);    // x, y

	glColor3f(1.0f, 0.0f, 0.0f); // F
	glVertex2f(2.0f, 0.8f);    // x, y

	glColor3f(1.0f, 0.0f, 0.0f); // B
	glVertex2f(1.0f, 2.0f);    // x, y

	glColor3f(1.0f, 0.0f, 0.0f); // E
	glVertex2f(-1.0f, 2.0f);    // x, y
	glEnd();

	glFlush();  // Render now
}


void task4()
{
	glClearColor(255.0f, 255.0f, 255.0f, 1.0f); // Set background color to black and opaque
	glClear(GL_COLOR_BUFFER_BIT);         // Clear the color buffer (background)
	glLineWidth(5);
	// Draw a Red 1x1 Square centered at origin
	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.0f, 0.0f); // Red

	glVertex2f(0.0f, 0.0f);    // x, y
	glVertex2f(1.0f, 0.0f);    // x, y

	glVertex2f(0.0f, 0.0f);    // x, y
	glVertex2f(0.0f, 1.0f);    // x, y

    glVertex2f(0.0f, 0.0f);    // x, y
	glVertex2f(-1.0f, 0.0f);    // x, y

	glVertex2f(0.0f, 0.0f);    // x, y
	glVertex2f(0.0f, -1.0f);

	glEnd();

	glFlush();  // Render now
}

/* Main function: GLUT runs as a console application starting at main()  */
int main(int argc, char** argv) {
	glutInit(&argc, argv);                 // Initialize GLUT
	glutCreateWindow("OpenGL Setup Test"); // Create a window with the given title
	glutInitWindowSize(320, 320);   // Set the window's initial width & height
	glutReshapeWindow (1024,720);
	glutDisplayFunc(task4); // Register display callback handler for window re-paint
	gluOrtho2D(-10,10,-10,10);
	glutMainLoop();           // Enter the event-processing loop
	return 0;
}
