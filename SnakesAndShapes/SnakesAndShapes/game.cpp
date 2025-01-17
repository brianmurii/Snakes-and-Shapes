#include <glut.h>
#include <gl.h>
#include "game.h"

int gridX, gridY;

void initGrid(int x, int y) {

	gridX = x;
	gridY = y;

}

void drawGrid{
	//for loop to draw the whole grid
	for (int x = 0; x < gridX; x++) {
		for (int y = 0; y < gridY; y++) {
			unit(x, y);
		}
	}
}

void unit(int x, int y) {
	//draws one square
	//if function to set the border
	if (x == 0 || y == 0 || x == gridX - 1 || y == gridY - 1) {
		glLineWidth(3.0);
		glColor3f(1.0, 0.0, 0.0);
	}
	else {
		glLineWidth(1.0);
		glColor3f(1.0, 1.0, 1.0);
	}

	//draws one square
	glBegin(GL_LINE_LOOP);
	glVertex2f(x, y);
	glVertex2f(x+1, y);
	glVertex2f(x+1, y+1);
	glVertex2f(x, y+1);


	glEnd();
}