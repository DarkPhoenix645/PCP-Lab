/*

Author Info
===================
Nilanjan B. Mitra
2023IMG-039
ABV-IIITM

*/

#include <stdio.h>
#include "wordle.c"
#include "tic-tac-toe.c"

int main () {
    printf("===========================================================\n");
    printf("Welcome to a menu based program made by Nilanjan B. Mitra\n");
    printf("===========================================================\n");

    input:
        int option;

        printf("\nYou have the following options:\n");
        printf("1. Play Wordle on the command line\n");
        printf("2. Play Tic-Tac-Toe against a friend\n");
        printf("3. Stop playing\n");
        printf("Choose an option: ");
        scanf("%d", &option);

        switch (option)
        {
        case 1:
            wordle();
            goto input;
            break;
        
        case 2:
            ticTacToe();
            goto input;
            break;

        case 3:
            goto end;

        default:
            printf("Please choose a valid option\n");
            goto input;
        }
    end:
        printf("\n======================\n");
        printf("Thanks for playing!!!\n");
        printf("======================\n");
        return 0;
}