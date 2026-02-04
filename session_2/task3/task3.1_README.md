# Activity 3: Number Guessing Game

## Objective
Create an interactive number guessing game that demonstrates combining loops with conditionals and input processing. This activity brings together the concepts from the previous exercises in a fun, interactive program.

## File Included
- `task1.3.c` - Number guessing game implementation

## Exercise Instructions

In this activity, we'll create a number guessing game where:

1. The program generates a random number between 1 and 100
2. The person playing must guess the number
3. After each guess, the program provides feedback ("Too high", "Too low")
4. The game tracks the number of attempts
5. The game offers hints after multiple failed attempts
6. When the correct number is guessed, the program congratulates the player and offers to play again

## Implementation Steps

1. **Set up the random number generation**:
   - Use the `rand()` function from `stdlib.h` to generate a random number
   - Use `srand(time(NULL))` from `time.h` to seed the random number generator
   - Generate a number within a specific range (e.g., 1-100)

2. **Create the main game loop**:
   - Use an appropriate loop structure that continues until the player decides to quit
   - Implement a nested loop for the guessing process
   - Track the number of attempts for each game

3. **Handle human input**:
   - Use `fgets()` to safely read input
   - Convert string input to integers using `atoi()` (from `stdlib.h`)
   - Validate input to ensure it's a valid number within the allowed range

4. **Implement game logic**:
   - Compare each guess to the target number
   - Provide appropriate feedback ("Too high", "Too low", "Correct!")
   - Track and display the number of attempts
   - Offer a hint after a certain number of failed attempts
   - Ask if the person wants to play again after guessing correctly

## Key Concepts to Practice

- Main game loop (for playing multiple rounds)
- Guessing loop (for multiple attempts within one game)
- Input validation with appropriate feedback
- Conditional logic for comparing guesses
- Random number generation
- Counting and tracking attempts

## Extension Tasks

If you finish early, and/or in personal study time, consider implementing these additional features:

1. Add difficulty levels (Easy: 1-50, Medium: 1-100, Hard: 1-250)
2. Implement a scoring system based on number of attempts
3. Add a limited number of attempts (e.g., 10 guesses maximum)
4. Create a "hot/cold" hint system that tells how close the guess is
5. Save and display the best (lowest) number of attempts across multiple games
