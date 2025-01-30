//  WAP to read an alphabet from the user and convert it into uppercase if the entered alphabet is in lowercase otherwise display an appropriate message. (If else) //

#include <stdio.h>

int main() 
{
    char ch;
    printf("Enter an alphabet: ");
    scanf(" %c", &ch);

    if (ch >= 97 && ch <= 122) 
    {
        char c= ch-32;
        printf("Uppercase alphabet: %c\n",c);
    } 
    else 
    {
        printf("The entered alphabet is not in lowercase.\n");
    }

    return 0;
}

