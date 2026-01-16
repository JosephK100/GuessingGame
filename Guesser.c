// Joseph Kloepper
// CSS121 Number Guesser Lab

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Start of main
int main() {
    int guess;
    int answer;
    int turns = 0;
    int keepGoing = 1;

    char name[20];
    printf("What is your name?\n"); // Ask for name 
    scanf("%19s", name); // Store name 
    printf("Good tidings, %s!\n", name); // Print the greeting message

    srand(time(NULL));
    answer = rand() % 100 + 1;

    while (keepGoing) { // KeepGoing loop 
        printf("What's your guess? : ");
        scanf("%d", &guess);
        turns++; // Turn increases
        if (guess < answer) {
            printf("That's too low!\n");
        }

        if (guess > answer) {
            printf("That's too high!\n");
        }

        if (guess == answer) {
            printf("You got it!!\n");
            keepGoing = 0;
        }
    }

    printf("It took you %d turns. Great job!\n", turns); // End message
    return 0;
}


