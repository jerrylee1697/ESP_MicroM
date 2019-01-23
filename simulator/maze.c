/*************************/
/* Micromouse Simulator  */
/* Maze (Data Structure) */
/*                       */
/* Jigar Hira, Dylan Kao */
/* Version 0.1           */
/*************************/

#include "maze.h"
#include "Constants.h"


/* Creates new maze data structure */
MAZE *CreateMaze()
{
	MAZE *maze = (MAZE *)malloc(sizeof(MAZE));	/* Allocate memory for maze data */
	if (maze == NULL)
	{
		return NULL;
	}

	maze->mouseX = 0;
	maze->mouseY = 0;
	maze->mouseDirection = 0;

	return maze;	
}


/* Deletes a maze structure */
void DeleteMaze(MAZE *maze)
{
	/* Check if the maze exists */
	assert(maze);

	/* Free the memory */
	free(maze);
	maze = NULL;
}

void LoadMazeFromFile(MAZE *maze)
{
	/* Check if the maze exists */
	assert(maze);



}

/* EOF */
