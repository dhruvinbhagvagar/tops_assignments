#include <stdio.h>
#include <string.h>
int main()
{
    char songs[] = {"Believer","Perfect","ShapeOfYou"};
    char guess[];
    int

    printf(" Guess the Song Game :");
    scanf("%s",&songs);
    

    do{
        printf("Guess the song: ");
        scanf("%s", &guess);

        if (strcmp(guess, songs[random]) == 0)
        {
            printf("Correct! You guessed the song.\n");
        }
        else
        {
            printf("Wrong guess! Try again.\n");
        }

    } while (strcmp(guess, songs[random]) != 0);
}
