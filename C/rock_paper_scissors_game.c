#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point of the program.
 * 
 * This program implements a Rock, Paper, Scissors game where the user plays against the computer.
 * The computer randomly selects one of the options and the user inputs their choice.
 * The program then determines the winner and displays the result.
 * 
 * Return: 0 if the program finishes correctly, or an error message if an invalid choice is made.
 */
int main()
{
    int player, computer;
    
    // Initialize the random number generator with the current time as seed
    srand(time(NULL));
    
    // Generate a random choice for the computer (0 - Rock, 1 - Paper, 2 - Scissors)
    computer = rand() % 3;
    
    printf("++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
    printf("Hello, welcome to rock, paper, scissors GAME!!!\n");
    printf("++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
    printf("what's your choice? \n");
    printf("0-rock, 1-paper or 2-scissors\n");
    
    // Read the user's choice
    scanf("%i", &player);

    // Check if the user's choice is valid
    if (player < 0 || player > 2)
    {
        printf("Invalid choice, restart the program to try again.");
        return 0;
    }

    // Display the user's choice
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

    // Display the computer's choice
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

    // Determine the result of the game
    if (player == computer)
    {
        printf("\n\nYou and the computer chose the same object and tied!!!");
        return 0;
    }

    // Check if the player wins
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