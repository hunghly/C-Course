#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>

#define SIZE 3
#define PLAYER_1 1
#define PLAYER_2 2

void drawBoard(char board[SIZE][SIZE], int size);
int checkInput(char input);
void makeMove(char board[SIZE][SIZE], int size, int player, char choice);
int checkWin(char board[SIZE][SIZE]);

int main()
{
    char game[SIZE][SIZE] = {
        {'1', '2', '3'},
        {'4', '5', '6'},
        {'7', '8', '9'}};
    bool isGameOver = false;
    int history[SIZE * SIZE]; // History of all the moves
    int historyCount = 0;
    int currentPlayer = PLAYER_1; // Current turn
    char choice;                  // Player decision
    bool isValidInput;
    bool draw = false;

    drawBoard(game, SIZE);
    // makeMove(game, SIZE, 1, 1);
    do
    {
        printf("\n===========================================\n");
        do
        {
            printf("PLAYER %d's turn. Please make a choice [1-9]: ", currentPlayer);
            scanf(" %c", &choice);
            isValidInput = checkInput(choice);
        } while (!isValidInput);
        printf("\n===========================================\n");
        printf("Your input is valid: %d\n", isValidInput);
        printf("\nYou chose %c...\n", choice);
        printf("\n===========================================\n");
        printf("\nMaking moves...\n");
        makeMove(game, SIZE, currentPlayer, choice);
        // update history count with choice
        history[historyCount] = choice;
        historyCount += 1;
        printf("\n===========================================\n");
        printf("\nPrinting new board...\n");
        drawBoard(game, SIZE);
        // Check win condition
        isGameOver = checkWin(game);
        draw = (historyCount == 9) && !isGameOver;
        if (isGameOver || draw)
        {
            if (draw)
            {
                printf("\nThe game ended in a draw.\n");
                isGameOver = true;
            }
            else
            {
                printf("\nThe game is over! PLAYER %d WINS!\n", currentPlayer);
            }
        }
        currentPlayer = (currentPlayer == PLAYER_1) ? PLAYER_2 : PLAYER_1; // update next player
    } while (!isGameOver);

    drawBoard(game, SIZE);
}

int checkInput(char input)
{
    if (!isdigit(input))
    {
        printf("\nYour choice %c is not a valid input.\n", input);
        return 0;
    }
    return 1;
}

/* This function prints out the board of the tic tac toe game */
void drawBoard(char board[SIZE][SIZE], int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            // if first column or last column, don't print the left and right bars
            if (j == 0 || (j == (size - 1)))
            {
                printf(" %c ", board[i][j]);
            }
            else
            {
                printf("| %c |", board[i][j]);
            }
        }
        if (i != size - 1)
        {
            printf("\n---|---|---\n");
        }
    }
    printf("\n\n");
}

void makeMove(char board[SIZE][SIZE], int size, int player, char choice)
{
    switch (choice)
    {
    case '1':
        board[0][0] = ((player == PLAYER_1) ? 'x' : 'o');
        break;
    case '2':
        board[0][1] = ((player == PLAYER_1) ? 'x' : 'o');
        break;
    case '3':
        board[0][2] = ((player == PLAYER_1) ? 'x' : 'o');
        break;
    case '4':
        board[1][0] = ((player == PLAYER_1) ? 'x' : 'o');
        break;
    case '5':
        board[1][1] = ((player == PLAYER_1) ? 'x' : 'o');
        break;
    case '6':
        board[1][2] = ((player == PLAYER_1) ? 'x' : 'o');
        break;
    case '7':
        board[2][0] = ((player == PLAYER_1) ? 'x' : 'o');
        break;
    case '8':
        board[2][1] = ((player == PLAYER_1) ? 'x' : 'o');
        break;
    case '9':
        board[2][2] = ((player == PLAYER_1) ? 'x' : 'o');
        break;
    default:
        printf("Error reading input.\n");
        break;
    }
}

int checkWin(char board[SIZE][SIZE])
{
    // WIN CONDITIONS
    if (
        // PLAYER_1 WIN CONDITIONS
        (board[0][0] == 'x' && board[0][1] == 'x' && board[0][2] == 'x') || // top row
        (board[1][0] == 'x' && board[1][1] == 'x' && board[1][2] == 'x') || // middle row
        (board[2][0] == 'x' && board[2][1] == 'x' && board[2][2] == 'x') || // bottom row
        (board[0][0] == 'x' && board[1][0] == 'x' && board[2][0] == 'x') || // left column
        (board[0][1] == 'x' && board[1][1] == 'x' && board[2][1] == 'x') || // middle column
        (board[0][2] == 'x' && board[1][2] == 'x' && board[2][2] == 'x') || // right column
        (board[0][0] == 'x' && board[1][1] == 'x' && board[2][2] == 'x') || // cross left-right
        (board[0][2] == 'x' && board[1][1] == 'x' && board[2][0] == 'x') || // cross right-left
        // PLAYER_2 WIN CONDITIONS
        (board[0][0] == 'o' && board[0][1] == 'o' && board[0][2] == 'o') || // top row
        (board[1][0] == 'o' && board[1][1] == 'o' && board[1][2] == 'o') || // middle row
        (board[2][0] == 'o' && board[2][1] == 'o' && board[2][2] == 'o') || // bottom row
        (board[0][0] == 'o' && board[1][0] == 'o' && board[2][0] == 'o') || // left column
        (board[0][1] == 'o' && board[1][1] == 'o' && board[2][1] == 'o') || // middle column
        (board[0][2] == 'o' && board[1][2] == 'o' && board[2][2] == 'o') || // right column
        (board[0][0] == 'o' && board[1][1] == 'o' && board[2][2] == 'o') || // cross left-right
        (board[0][2] == 'o' && board[1][1] == 'o' && board[2][0] == 'o')    // cross right-left
    )
    {
        return 1;
    }
    return 0;
}
