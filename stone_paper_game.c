#include <stdio.h>

int main() {
    int player1, player2;

    printf("----------------------------------------------------\n");
    printf("           WELCOME TO THE GAME                      \n");
    printf("----------------------------------------------------\n");

    printf("Rules:\n1 = Stone\n2 = Paper\n3 = Scissors\n");

    printf("Enter Player 1's choice: ");
    scanf("%d", &player1);

    printf("Enter Player 2's choice: ");
    scanf("%d", &player2);

    if (player1 < 1 || player1 > 3 || player2 < 1 || player2 > 3) {
        printf("Error: enter number between 1 and 3\n");
    }
    else if (player1 == player2) {
        printf("It's a draw!\n");
    }
    else if ((player1 == 1 && player2 == 3) ||
             (player1 == 2 && player2 == 1) ||
             (player1 == 3 && player2 == 2)) {
                
        printf("Player 1 is win\n");
    }
    else {
        printf("Player 2 is win\n");
    }

    return 0;
}
