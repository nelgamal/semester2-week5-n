//Week 5, Session 2

# include <stdio.h>
# include <string.h>

int main(void){
/* Task 1.2a
 * Complete the following while loop in C to ask user input for a password 
 * until 'secure123' is entered.
 */
    char password[50];
	printf("Enter a password:");
    scanf("%s", password); 

	 // compare using strcmp(str1,str2) from week 4
	 // complete the rest of the code here
    while (strcmp(password, "secure123") != 0){
        printf("Invalid! Retry: "); 
	    scanf("%s", password); 
    }
	
    return 0;
}