// WAP to ask the user to guess a predetermined number//

#include <stdio.h>
int main() 
{
    int number = 69, guess;
    printf("Guess the number between 1 and 100:\n");
    do 
    {
        printf("Enter your guess: ");
        scanf("%d", &guess);
        if (guess > number) 
        {
            printf("Too high! Try again.\n");
        } 
        else if (guess < number) 
        {
            printf("Too low! Try again.\n");
        }
    } 
    while (guess != number);
    printf("Congratulations! You guessed the number %d correctly.\n", number);

    return 0;
}
