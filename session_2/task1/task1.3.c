//Week 5, Session 2

# include <stdio.h>

int main(void){
/* Task 1.3
 * You have to decide which type of loop (for, while, do...while) to use.
 * Write a C program to read a series of integers from the user and sum them
 * until a 0 (zero) is entered. Print the sum at the end.
 */
    int number;
    int sum = 0;

    printf("Enter an interger (0 to stop):");
    scanf("%d", &number);

    while (number != 0) {
        sum += number; 
        printf("Enter an interger (0 to stop):");
        scanf("%d", &number);
    }

    printf("Sum = %d\n", sum); 

    return 0;
}