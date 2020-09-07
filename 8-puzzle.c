#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <stdint.h>
#include "8-puzzle.h"

#define PUZZLESIZE 8
#define matrixSizeX 3
#define matrixSizeY 3


/******************************************************************************/
/* globals */
uint8_t currentMove = 0;          // global currentMove counter 
uint8_t listOfMoves[200] = { 0 }; // initialize move list to all zeros

/******************************************************************************/
/******************************************************************************/
/* headers */
int run_program();
void print_puzzle(uint8_t *state, uint8_t puzzleNSize);
void generate_puzzle();
/******************************************************************************/
/******************************************************************************/
/* program */
int main(int argc, char *argv[]) {
        if ( argc == 1)
                run_program();
        else if ( argc == 2) {
                //TODO: sanitize input
        }
        else {
                printf("wrong number of inputs!");
                return EXIT_FAILURE;
        }
}

void find_current_blank_position(uint8_t *out_pos, uint8_t *puzzle) {
        uint8_t i = 0, j = 0;
        uint8_t current_pos[2] = {0, 0};

        for (i = 0; i < matrixSizeX; i++) {
            for (j = 0; j < matrixSizeY; j++) {
                if (puzzle[j+i] == 0) {
                    out_pos[0] = i;
                    out_pos[1] = j;
                    goto end;
                }
            }
        }
end:
        return;
}

void move_blank(enum Movement direction) {
        uint8_t current_blank_pos[2] = { 0, 0 };
        //find_current_blank_position(current_blank_pos);
        //printf("%d, %d\n", current_blank_pos[0], current_blank_pos[1]);

        switch(direction){
                case UP:
                        break;
                case RIGHT:
                        break;
                case DOWN:
                        break;
                case LEFT:
                        break;
        }
}

int run_program() {
        //TODO: change puzzle to user input
        uint8_t *active_puzzle = *example_start_8_puzzle_v1;

        uint8_t current_blank_pos[2] = { 0, 0 };
        find_current_blank_position(current_blank_pos, active_puzzle);
        printf("%d, %d\n", current_blank_pos[0], current_blank_pos[1]);


        //move_blank(UP);
        //move_blank(RIGHT);
        //move_blank(DOWN);
        //move_blank(LEFT);


cleanup:
        return EXIT_SUCCESS;
}

//TODO: handle printing when digits are more than one character
// determine largest character count required for the matrix, and
// print that matrix.
void print_puzzle(uint8_t *state, uint8_t puzzleNSize) {
        uint8_t matrixSize = log2(puzzleNSize);
        uint8_t i = 0, j = 0, k = 0;

        // printing ┌───┬───┬───┐
        printf("┌");
        for (i = 0; i < matrixSize -1; i++) {
                for (j = 0; j < matrixSize; j++) printf("─");
                printf("┬");
        }
        for (j = 0; j < matrixSize; j++) printf("─");
        printf("┐\n");

        //          ├───┼───┼───┤
        // printing │ 1 │ 2 │ 3 │
        //          ├───┼───┼───┤
        for (i = 0; i < matrixSize; i++) {
                for (j = 0; j < matrixSize; j++) {
                        printf("│ %d ", *((state+i*matrixSize) + j));
                }
                printf("│\n");

                if (i == matrixSize - 1) goto print_bottom;

                printf("├");
                for (k = 0; k < matrixSize - 1; k++) {
                        for (j = 0; j < matrixSize; j++) printf("─");
                        printf("┼");
                }
                for (j = 0; j < matrixSize; j++) printf("─");
                printf("┤\n");
        }
print_bottom:
        // printing └───┴───┴───┘
        printf("└");
        for (i = 0; i < matrixSize - 1; i++) {
                for (j = 0; j < matrixSize; j++) printf("─");
                printf("┴");
        }
        for (j = 0; j < matrixSize; j++) printf("─");
        printf("┘\n");
}



void generate_new_puzzle(uint8_t size) {
        //TODO: implement
}
