#include <stdio.h>
#include <stdbool.h>
#include <regex.h>

#define SIZE 3
#define PLAYER_1 1
#define PLAYER_2 2

void drawBoard(char board[SIZE][SIZE], int size);
void makeMove(char board[SIZE][SIZE], int size, int player, int choice, int history[SIZE * SIZE]);

int main() {


    char game[SIZE][SIZE] = {
        {'1', '2', '3'},
        {'4', '5', '6'},
        {'7', '8', '9'}
     };
     bool isGameOver = false;
     int history[SIZE * SIZE]; // History of all the moves
     int historyCount = 0;
     int currentPlayer = PLAYER_1; // Current turn
     int choice; // Player decision
     int isValidInput;

    drawBoard(game, SIZE);
    // makeMove(game, SIZE, 1, 1);
    // do {
        printf("\n===========================================\n");
        printf("PLAYER %d's turn. Please make a choice [1-9]: ", currentPlayer);
        scanf("%d", &choice);
        printf("\nYou chose %d...\n", choice);
        // makeMove(game, SIZE, currentPlayer, choice, history[SIZE * SIZE]);
        isValidInput = regcomp(&choice, "[]:number:]", 0);
        printf("Your input is valid: %d\n", isValidInput);
        // If move is valid, print new board
        printf("\nPrinting new board...\n");
        drawBoard(game, SIZE);
        printf("\n===========================================\n");
        currentPlayer = (currentPlayer == PLAYER_1) ? PLAYER_2 : PLAYER_1; // update next player
        // update history count with choice
        history[historyCount] = choice;
        historyCount += 1;
    // } while (!isGameOver);


    drawBoard(game, SIZE);
}


/* This function prints out the board of the tic tac toe game */
void drawBoard(char board[SIZE][SIZE], int size) {
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            // if first column or last column, don't print the left and right bars
            if (j == 0 || (j == (size - 1))) {
                printf(" %c ", board[i][j]);
            }
            else {
                printf("| %c |", board[i][j]);
            }
        }
        if (i != size -1) {
            printf("\n---|---|---\n");
        }
    }
    printf("\n\n");
}

void makeMove(char board[SIZE][SIZE], int size, int player, int choice, int history[SIZE * SIZE]) {

    // bool validInput = false;

    // while (!validInput) {
    //     if (choice < 0 || choice > 9) {
    //         printf("\nPlease enter a valid input [1-9].\n");
    //     }
    // }
    // for (int i = 0; i < SIZE * SIZE; i++) {
    //     if (choice == history[i]) {
    //         printf("\nPlease enter a valid input [1-9].\n");
    //     }
    // }
    switch (choice) {
        case 1:
            board[0][0] = ((player == PLAYER_1) ? 'x' : 'o');
            break;
        case 2:
            board[0][1] = ((player == PLAYER_1) ? 'x' : 'o');
            break;
        case 3:
            board[0][2] = ((player == PLAYER_1) ? 'x' : 'o');
            break;
        case 4:
            board[1][0] = ((player == PLAYER_1) ? 'x' : 'o');
            break;
        case 5:
            board[1][1] = ((player == PLAYER_1) ? 'x' : 'o');
            break;
        case 6:
            board[1][2] = ((player == PLAYER_1) ? 'x' : 'o');
            break;
        case 7:
            board[2][0] = ((player == PLAYER_1) ? 'x' : 'o');
            break;
        case 8:
            board[2][1] = ((player == PLAYER_1) ? 'x' : 'o');
            break;
        case 9:
            board[2][2] = ((player == 0) ? 'x' : 'o');
            break;
        default:
            printf("Error reading input.\n");
            break;
    }
}

void checkWin() {

}

