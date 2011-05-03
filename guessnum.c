#include <stdio.h>
#include <stdlib.h>


void greeting (void);
void failguess(void);


int main() {
    greeting();
    srand(time(NULL));
    int number = 0;
    int guess = 0;
    int tries;
    tries = 0;
    int remain = 10;
    number = 1 + rand() % 100;
    while (guess != number) {

        scanf("%d", &guess);
        system("clear");
        tries = tries +1;
        remain = remain - 1;
        printf("Guess the number between 1 and 100!\nNumber of tries so far: %d\nYou have %d tries left!\n",tries, remain);

        if(remain < 1) {
            printf("You ran out of tries!\n");
            break;
        }
        if(guess > 100 || guess < 1)
            failguess();
        if(guess > number)
            printf("Your guess is higher than the number\n\n");
        else if(guess <number)
            printf("Your guess is lower than the number\n\n");
        else {
            printf("You guessed the number correctly!\n\n");

        }

    }

    return 0;
}


void greeting (void) {

    system("clear");
    printf("Guess the number between 1 and 100\n\n\n");
}

void failguess(void) {
    printf("Try to guess a number that is actually between 1 and 100 please\n");

}
