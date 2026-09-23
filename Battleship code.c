#include <stdio.h>

int main() {
    // Coordinate and game state variables
    int t_c, t_r;
    int s1_c = 4, s1_r = 3;
    int s2_c = 2, s2_r = 5;
    int s1_sunk = 0, s2_sunk = 0;
    int guess = 0, ship = 0;

    // Welcome banner and game instructions
    printf("===============\nBattleship Game\n===============\n\n");
    printf("Make your guesses and try to find the ships in minimum number of attempts!\n");
    printf("-----\nRULES\n-----\n");
    printf("=>2 ships have been placed on a 5x5 board\n");
    printf("=>The ships are point-sized.\n\n");
    printf("The ships have been placed. Let's start the game!\n\n");

    // Main game loop
    do {
        guess++;

        printf("----------------------\nColumn coordinate: ");
        scanf("%d", &t_c);

        printf("Row coordinate: ");
        scanf("%d", &t_r);

        // Vessel 1 Target Check
        if (t_c == 4 && t_r == 3) {
            if (s1_sunk == 1) {
                printf("You have already hit this ship.\n\n");
            } else {
                printf("The ship has sunk!!\n\n");
                ship = ship + 1;
                s1_sunk = s1_sunk + 1;
            }
        }
        // Vessel 2 Target Check
        else if (t_c == 2 && t_r == 5) {
            if (s2_sunk == 1) {
                printf("You have already hit this ship.\n\n");
            } else {
                printf("The ship has sunk!!\n\n");
                ship = ship + 1;
                s2_sunk = s2_sunk + 1;
            }
        }
        // Open Water Miss
        else {
            printf("Missed! Try again.\n");
        }

    } while (ship < 2);

    // Victory Banner
    printf("=============================================\n");
    printf("\t\t\t\tVICTORY!!\n");
    printf("You have sunk both ships in %d attempts!!\n", guess);
    printf("=============================================\n");

    return 0;
}