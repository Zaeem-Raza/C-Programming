#include <stdio.h>
#include <stdlib.h>
#define SIZE 100
int main(void)
{
    printf("\033[8;5Hhello"); // Move to (8, 5)
    printf("\033[XA");
    // Move up 6 lines;
    printf("\033[6B");
    // Move down 3 lines;
    // printf("\033[3C");
    // // Move right X column;
    // printf("\033[XD");
    // // Move left X column;
    // printf("\033[2J");
    // // Clear screen
    return 0;
}