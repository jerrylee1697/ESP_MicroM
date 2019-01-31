/*************************/
/* Micromouse Simulator  */
/* Maze (Data Structure) */
/*                       */
/* Jigar Hira, Dylan Kao */
/* Version 0.1           */
/*************************/


/* Include Guards */
#ifndef _MAZE_
#define _MAZE_

#include "Constants.h"

typedef struct
{
	unsigned int walls[2* MAZE_WIDTH * (MAZE_WIDTH + 1)];	/* One dimensional array for the walls (first half for horizontal walls and second half for vertical walls) */
	unsigned int cells[MAZE_WIDTH][MAZE_WIDTH];		/* Two dimensional array for the cells */
	unsigned int mouseX, mouseY;				/* Mouse coordinates */
	unsigned int mouseDirection;				/* Mouse direction */

} MAZE;

/* Creates new maze data structure */
MAZE *CreateMaze();


/* Deletes a maze structure */
void DeleteMaze(MAZE *maze);


#endif

/* EOF */
