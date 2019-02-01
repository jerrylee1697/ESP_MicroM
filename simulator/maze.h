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
	unsigned int mazeData[2*MAZE_WIDTH + 1][2*MAZE_WIDTH + 1];	/* Two dimensional array to represent the cells and the walls of the maze */
	unsigned int mouseX, mouseY;					/* Mouse coordinates */
	unsigned int mouseDirection;					/* Mouse direction */

} MAZE;

/* Creates new maze data structure */
MAZE *CreateMaze();


/* Deletes a maze structure */
void DeleteMaze(MAZE *maze);


#endif

/* EOF */
