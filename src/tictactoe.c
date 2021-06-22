#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
#define MAX_SIZE 10
#define PLAYER_X 'X'
#define PLAYER_O 'O'

int count = 1;
char square[MAX_SIZE] = {
    '0',
    '1',
    '2',
    '3',
    '4',
    '5',
    '6',
    '7',
    '8',
    '9',
};
void renderBoard();
void setBoard(char trace);
int checkWinner();
void printWinner();
void askUserInput();
int main(int argc, char const *argv[])
{
    renderBoard();
    askUserInput();
    return 0;
}
int checkWinner()
{
    if (square[1] == square[2] && square[2] == square[3])
    {
        return 1;
    }
    else if (square[4] == square[5] && square[5] == square[6])
    {
        return 1;
    }
    else if (square[7] == square[8] && square[8] == square[9])
    {
        return 1;
    }
    else if (square[1] == square[4] && square[4] == square[7])
    {
        return 1;
    }
    else if (square[2] == square[5] && square[5] == square[8])
    {
        return 1;
    }
    else if (square[3] == square[6] && square[6] == square[9])
    {
        return 1;
    }
    else if (square[1] == square[5] && square[5] == square[9])
    {
        return 1;
    }
    else if (square[3] == square[5] && square[5] == square[7])
    {
        return 1;
    }

    else if ((square[1] != '1' && square[2] != '2' && square[3] != '3' && square[4] != '4' && square[5] != '5' && square[6] != '6' && square[7] != '7' && square[8] != '8' && square[9] != '9'))
    {
        return 0;
    }
    else
    {
        return -1;
    }
}

void renderBoard()
{

    system("clear");
    printf("\n\n");
    printf(" ------- ");
    printf(" ------- ");
    printf(" ------- \n");
    printf("|       |");
    printf("|       |");
    printf("|       |\n");
    printf("|   %c   |", square[1]);
    printf("|   %c   |", square[2]);
    printf("|   %c   |\n", square[3]);
    printf("|       |");
    printf("|       |");
    printf("|       |\n");
    printf(" ------- ");
    printf(" ------- ");
    printf(" ------- \n");
    printf(" ------- ");
    printf(" ------- ");
    printf(" ------- \n");
    printf("|       |");
    printf("|       |");
    printf("|       |\n");
    printf("|   %c   |", square[4]);
    printf("|   %c   |", square[5]);
    printf("|   %c   |\n", square[6]);
    printf("|       |");
    printf("|       |");
    printf("|       |\n");
    printf(" ------- ");
    printf(" ------- ");
    printf(" ------- \n");
    printf(" ------- ");
    printf(" ------- ");
    printf(" ------- \n");
    printf("|       |");
    printf("|       |");
    printf("|       |\n");
    printf("|   %c   |", square[7]);
    printf("|   %c   |", square[8]);
    printf("|   %c   |\n", square[9]);
    printf("|       |");
    printf("|       |");
    printf("|       |\n");
    printf(" ------- ");
    printf(" ------- ");
    printf(" ------- \n");
    printf("\n");
}

void setBoard(char trace)
{
    printf("\n%c trace\n", trace);
    for (int i = 1; i < MAX_SIZE; i++)
    {
        if (trace == square[i] && count % 2 == 0)
        {
            square[i] = PLAYER_X;
            ++count;
        }
        else if (trace == square[i] && count % 2 != 0)
        {
            square[i] = PLAYER_O;
            ++count;
        }
    }
    renderBoard();
    int gameState = checkWinner();
    if (gameState == -1)
    {
        askUserInput();
    }
    else if (gameState == 0)
    {
        printf("=======  DRAW ======= \n");
    }
    else
    {
        printWinner();
    }
}
void printWinner()
{
    int countX = 0;
    int countO = 0;
    for (int i = 0; i < MAX_SIZE; i++)
    {
        if (square[i] == PLAYER_O)
        {
            ++countO;
        }
        else if (square[i] == PLAYER_O)
        {
            ++countX;
        }
    }
    if (countX > countO)
    {
        printf("\n Player X  won!\n");
    }
    else if (countO > countX)
    {
        printf("\n Player O  won!\n");
    }
}
void askUserInput()
{
    char choice;
    if (count % 2 == 0)
    {
        printf("player X turn: \n");
        scanf("%c", &choice);
    }
    else
    {
        printf("player O turn: \n");
        scanf("%c", &choice);
    }
    setBoard(choice);
}