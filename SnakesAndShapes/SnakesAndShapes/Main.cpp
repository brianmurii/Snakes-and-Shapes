#include <GL/glut.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

void init()
{
	glClearColor(0.0, 0.0, 0.2, 0.0);
}

void splashScreen()
{
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	glRasterPos3d(-0.3, 0.6, 0);
	glColor3f(1.0, 1.0, 1.0);
	char message[]="WELCOME TO SNAKES AND SHAPES";
	for (int i = 0;i < strlen(message);i++) {
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, message[i]);

	}
	glRasterPos3d(-0.3, 0.5, 0.0);
	glColor3f(0.7, 0.5, 0.1);
	char message2[] = "A FUN EDUCATIONAL GAME TO HELP KIDS LEARN ALL ABOUT SHAPES";
	for (int i = 0;i < strlen(message2);i++) {
		glutBitmapCharacter(GLUT_BITMAP_HELVETICA_12, message2[i]);
	}
	
	
	glRasterPos3d(-0.25, -0.7, 0.0);
	glColor3f(0.5, 0.6, 0.1);
	char message3[] = "PRESS 'x' TO START PLAYING!";
	for (int i = 0;i < strlen(message3);i++) {
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, message3[i]);
	}

	
		
	glutSwapBuffers();
}


/*void keys(unsigned char key, int x, int y)
{
	if (key == 'x')
	{
		glutDisplayFunc(display);
	}
	glutPostRedisplay();
}

void timer(int value)
{
	glutDisplayFunc(display);
	glutPostRedisplay();
} */

int main(int argc, char** argv)
{
	glutInit(&argc, argv); //Initialize glut library
	glutInitDisplayMode(GLUT_DOUBLE|GLUT_RGB|GLUT_DEPTH);
	glutCreateWindow("Snakes and Shapes"); //Create the display window
	glutInitWindowSize(500, 500); //Set size of diplay window
	glutInitWindowPosition(100, 100); //Set the position of the display window
	glutDisplayFunc(splashScreen);//Dispaly callback for the current window
	//glutKeyboardFunc(keys);
	//glutTimerFunc(2000, timer, 0);
	init();
	glutMainLoop(); //Keep calling display functions
	return 0;
	
}

