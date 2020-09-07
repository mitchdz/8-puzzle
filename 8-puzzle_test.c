#include <stdio.h>
#include "8-puzzle.h"
void test_get_blank_pos()
{
    //Arrange
    uint8_t *test_puzzle = *example_start_8_puzzle_v1;
    uint8_t current_blank_pos[2] = { 0, 0 };

    //Act
    find_current_blank_position(current_blank_pos, test_puzzle);

    //Assert
    if (current_blank_pos[0] == 3 && current_blank_pos[1] == 3)
        printf("test_get_blank_pos passed");
    else
        printf("test_get_blank_pos failed");

}

int main()
{
    test_get_blank_pos();
    return 0;
}
