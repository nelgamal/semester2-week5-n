//Week 5, Session 2

# include <stdio.h>

int main(void){
/* Task 1.2b
 * Convert the following Python while loop to (1) while loop (2) do...while loop in C.
 * 
 * Python code:
 * while True:
 *     choice = input("Enter 'q' to quit: ")
 *     if choice == 'q':
 *         break
 */
	char choice;
	printf("Enter 'q' to quit:");
	scanf("%s", &choice);

	// complete the rest of the code here
	do{
		printf("Enter 'q' to quit:");
		scanf("%s", &choice);

	} while(choice != 'q');
		
    return 0;
}