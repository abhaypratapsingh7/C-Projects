#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int number, guess, attempts = 0;

    srand(time(NULL));
    number = rand() % 100 + 1;

    printf("Guess the number between 1 and 100!\n");

    do {
        printf("Your guess: ");
        if (scanf("%d", &guess) != 1) {
            printf("Please enter a valid number.\n");
            while (getchar() != '\n');
            continue;
        }
        attempts++;

        if (guess < number)
            printf("Too low!\n");
        else if (guess > number)
            printf("Too high!\n");
        else
            printf("Correct! You got it in %d attempts.\n", attempts);
    } while (guess != number);

    return 0;
}
