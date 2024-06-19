#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{

    int player, computer;
    srand(time(NULL));
    computer = rand() % 3;
    printf("++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
    printf("Hello, welcome to rock, paper, scissors GAME!!!\n");
    printf("++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
    printf("what's your choice? \n");
    printf("0-rock, 1-paper or 2-scissors\n");
    scanf("%i", &player);

    if (player < 0 || player > 2)
    {

        printf("Invalid choose, restart the program to try again.");
        return 0;
    }

    printf("\nYou chose: ");
    switch (player)
    {

    case 0:
        printf("Rock");
        break;

    case 1:
        printf("Paper");
        break;

    case 2:
        printf("Scissors");
        break;
    }

    printf("\nThe computer chose: ");
    switch (computer)
    {

    case 0:
        printf("Rock");
        break;

    case 1:
        printf("Paper");
        break;

    case 2:
        printf("Scissors");
        break;
    }

    if (player == computer)
    {
        printf("\n\nYou and the Computer choose the same object and tied!!!");
        return 0;
    }

    if ((player == 0 && computer == 2) || (player == 1 && computer == 0) || (player == 2 && computer == 1))
    {
        printf("\n\nYou beat the computer!!!");
    }
    else
    {
        printf("\n\nThe computer beat you!!!");
    }

    return 0;
}