#include <stdio.h>
#include "2048.h"
#include <unistd.h>
#include <stdlib.h>
#include <time.h>

int main(int argc,char **argv)
{
  // Randomise random unmber generator initial state.
  srandom(time(0));
  
  int board_size=4;
  int **board=board_create(board_size);
  if (!board) {
    printf("failed to create board.\n");
    exit(0);
  }

  while(1) {
    board_display(board_size,board);
    printf("Next move? "); fflush(stdout);
    int action=read_input();
    switch(action) {
    case GO_LEFT:
      break;
    case GO_RIGHT:
      break;
    case GO_UP:
      break;
    case GO_DOWN:
      break;
    case GO_NOWHERE:
      break;
    case INVALID_INPUT:
    default:
      printf("Invalid input. Type l, r, u or d to tilt board.\n");
      break;
    }
  }
}
