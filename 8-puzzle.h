#pragma once
#include <stdint.h>

enum Movement {
        UP = 1,
        RIGHT = 2,
        DOWN = 3,
        LEFT = 4
};

uint8_t example_start_8_puzzle_v1[3][3] = {
        {1, 2, 6},
        {5, 8, 4},
        {3, 7, 0}
};

uint8_t example_8_puzzle_goal_state[3][3] = {
        {1, 2, 3},
        {8, 0, 4},
        {7, 6, 5}
};

uint8_t test15puzzle[4][4] = {
        {1,  2,  3,  4},
        {12, 13, 14, 5},
        {11, 0,  15, 6},
        {10, 9,  8,  7}
};


void find_current_blank_position(uint8_t *out_pos, uint8_t *puzzle);






