// Week 5, Session 2

/* Task 3.1
 * Number Guessing Game
 * A program where the computer selects a random number and the person tries to guess it
 */

#include <stdio.h>
#include <stdlib.h>  // For rand(), srand(), atoi()
#include <time.h>    // For time()
#include <string.h>  // For strcspn()

int main(void) {
    char input[20];      // Buffer for input
    int guess;           // The person's guess
    int target;          // The random number to guess
    int num_guesses;     // Counter for number of guesses
    int min = 1;         // Minimum value for random number
    int max = 100;       // Maximum value for random number
    int playing = 1;     // Flag to control the main game loop
    
    // Seed the random number generator
    srand(time(NULL));
    
    printf("=== Number Guessing Game ===\n");
    printf("I'm thinking of a number between %d and %d\n", min, max);
    
    // TODO: Generate a random number between min and max
    // Hint: target = min + rand() % (max - min + 1);
    target = min + rand() % (max - min + 1);
    
    while(playing) {
    // TODO: Implement the main game loop
    // This should continue until the person decides to quit
    
        // Reset number of guesses for a new game
        num_guesses = 0;
        target = min + rand() % (max - min + 1);

        
        // TODO: Implement the guessing loop
        // This should continue until the correct number is guessed
        while(1) {
            printf("Enter your guess: ");
            
            // TODO: Read and process the input
            // Use fgets() to read input
            // Use atoi() to convert to integer
            
            if (fgets(input, sizeof(input), stdin) == NULL) {
                printf("Input error. \n");
                continue;
            }

            input[strcspn(input, "\n")] = 0;
            guess = atoi(input);
            
            // TODO: Check if the guess is correct, too high, or too low
            // Provide appropriate in-game feedback

            if (guess < min || guess > max){
                printf("Please enter a number between %d and %d.\n", min, max); 
                continue;
            }

            num_guesses++;

            if (guess < target) {
                printf("Too low!\n");
            } else if( guess > target) {
                printf("Too high!\n");
            } else {
                printf("Correct! You got it in %d guesses.\n", num_guesses);
                break; 
            }
                        
            // TODO: Offer a hint after several failed attempts
            if (num_guesses == 5) {
                if (target <= (min + max) / 2) {
                    printf("Hint: It's between %d and %d.\n", min, (min + max) / 2);
                } else{
                    printf("Hint: It's between %d and %d.\n", (min + max) / 2 + 1, max);
                }
            }
        }
        // TODO: Ask if the person wants to play again
        // Update the 'playing' flag based on the answer
        printf("Play again? (y/n): ");
        if (fgets(input, sizeof(input), stdin) == NULL) {
            playing = 0;
        } else {
            input[strcspn(input, "\n")] = 0;
            if (input[0] != 'y' && input[0] != 'Y') {
                playing = 0;
            } else {
                printf("\nI'm thinking of a new number between %d and %d\n", min, max);
            }
        }
    }
    printf("\nThanks for playing!\n");
    return 0;
}
