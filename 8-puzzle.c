#include <stdio.h>

#define PUZZLESIZE 8

int currentMove = 0; // global currentMove counter
int listOfMoves[200] = { 0 }; // initialize move list to all zeros

static int initialState[3][3] = {
    {1, 2, 6},
    {5, 8, 4},
    {3, 7, 0}
};

int GoalState[3][3] = {
    {1, 2, 3},
    {8, 0, 4},
    {7, 6, 5}
};

int main() {


}



