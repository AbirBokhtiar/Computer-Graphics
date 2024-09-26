#include <windows.h> // for MS Windows

#include <GL/glut.h> // GLUT, include glu.h and gl.h
#include <math.h>
#include <cmath>

/* Handler for window-repaint event. Call back when the window first appears and

whenever the window needs to be re-painted. */

int state = 1;
// Variables for leaves movement
float leafOffset = 0.0f;
float sunOffset = 0.0f;
bool isSunMoving = true; // Flag to track sun movement
// Global variable to track the current scene
int currentScene = 0; // 0 for village, 1 for main
GLfloat speed5 = 1.1f;

void displayCity();
void displayMain();

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
    glutTimerFunc(6000, timer2, value );  // Update every 30 ms
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
        glutTimerFunc(6000,change_day_night, 0 );
        state = 2;
    }
    else if (state == 2){
        state = 1;
        glutTimerFunc(6000,change_day_night, 0 );

    }
        glutPostRedisplay();
        //glutTimerFunc(2000,change_day_night, 0 );

}



// Timer function to update the sun's position
void timer3(int value) {
    if (isSunMoving) {
        sunOffset += speed5; // Update sun's position
    }
    glutPostRedisplay();
    glutTimerFunc(30, timer3, value + 1); // Update every 30 ms
}

// Keyboard Handler
void handleKeypress5(unsigned char key, int x, int y) {
    switch (key) {
        case 's': // Stop the sun
            isSunMoving = false; // Stop movement
            break;
        case 'r': // Resume the sun
            isSunMoving = true; // Resume movement
            break;
        case 'a': // Increase sun position
            sunOffset += 0.1f;
            break;
        case 'd': // Decrease sun position
            sunOffset -= 0.1f;
            break;
        case 't': // Press 't' to switch to the main scene
            currentScene = 2; // Switch to main scene
            break;
    }
    glutPostRedisplay();
}

void handleMouse5(int button, int state, int x, int y) {
	if (button == GLUT_LEFT_BUTTON)
	{	speed5 += 0.1f;
			}
if (button == GLUT_RIGHT_BUTTON)
	{speed5 -= 0.1f;   }
glutPostRedisplay();}


void display() {
    glClear(GL_COLOR_BUFFER_BIT); // Clear the color buffer

    //if (currentScene == 1) {
        // Render village scene
        if (state == 1)
            glClearColor(0.0f, 0.6f, 0.90f, 1.0f); // Set background color for day
        else if (state == 2)
            glClearColor(0.0f, 0.0f, 0.0f, 1.0f); // Set background color for night
        sun();
        two_hills();
        grass();
        renderTree();
        house_1();
        outline_house_1();
        khor_pala();
        outline_khor_pala();
        house_2();
        outline_house_2();
        boat();
    //} else if (currentScene == 2) {
        // Render main scene
        //displayCity(); // Call the main scene display function
    //}

    glFlush(); // Render now
}




// Initialization Function
void init() {
    glClearColor(0.0f, 0.0f, 0.0f, 1.0f); // Default background color (black)
    glMatrixMode(GL_PROJECTION);
    gluOrtho2D(-1000, +50, -300, 200); // Set up orthographic projection
}


// Main Function
int main(int argc, char** argv) {
    glutInitWindowSize(1020, 520); // Set the window's initial width & height
    glutInit(&argc, argv); // Initialize GLUT
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB); // Set display mode (single buffer, RGB)
    glutCreateWindow("Village Scene"); // Create a window with the given title

    init(); // Initialize OpenGL settings
    glutDisplayFunc(display); // Register display callback handler for window re-paint
    glutTimerFunc(0, timer3, 0); // Start the timer for animation
    glutKeyboardFunc(handleKeypress5); // Register keyboard callback
    glutMouseFunc(handleMouse5); // Register mouse callback
    glutTimerFunc(6000, change_day_night, 0); // Timer for day/night change
    glutTimerFunc(30, timer2, 0); // Timer for animations
    glutTimerFunc(30, timer, 0); // Timer for leaf movement

    glutMainLoop(); // Enter the event-processing loop

    return 0;
}
