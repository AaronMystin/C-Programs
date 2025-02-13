// WAP to ask the user to guess a random number//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() 
{
    int a, guess;
    srand(time(0));
    a = rand()%100;
    printf("Guess the number between 1 and 100:\n");
    do 
    {
        printf("Enter your guess: ");
        scanf("%d", &guess);
        if (guess > a) 
        {
            printf("Too high! Try again.\n");
        } 
        else if (guess < a) 
        {
            printf("Too low! Try again.\n");
        }
    } 
    while (guess != a);
    printf("Congratulations! You guessed the number %d correctly.\n",a);

    return 0;
}
