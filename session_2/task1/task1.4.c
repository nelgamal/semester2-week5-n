//Week 5, Session 2

# include <stdio.h>

int main(void){
/* Task 1.4
 * You have to decide which type of loop (for, while, do...while) to use.
 * Write a C program to display a menu and then ask the user to enter 
 * an option. If 0 is entered, the program terminates.
 * Menu options are:
 * 1 - Coffee
 * 2 - Tea
 * 3 - Cold drinks
 * 0 - to quit
 * When 1 is entered, print "You selected Coffee" and then redisplay the menu.
 * The same applies to other options except 0. When 0 is entered, the program terminates.
 */
    
    int choice;
    printf("Menu Options:\n");
    printf("1 - Coffee\n");
    printf("2 - Tea\n");
    printf("3 - Cold Drinks\n");

    printf("Which choice do you want? Press 0 if you would rather quit. Choice:");
    scanf("%d", &choice);

    do{
        switch(choice){
            case 1: 
                printf("You selected coffee!\n");
                printf("Menu Options:\n");
                printf("1 - Coffee\n");
                printf("2 - Tea\n");
                printf("3 - Cold Drinks\n");

                printf("Which choice do you want? Press 0 if you would rather quit. Choice:");
                scanf("%d", &choice);
                break;
            case 2: 
                printf("You selected tea!\n");
                printf("Menu Options:\n");
                printf("1 - Coffee\n");
                printf("2 - Tea\n");
                printf("3 - Cold Drinks\n");

                printf("Which choice do you want? Press 0 if you would rather quit. Choice:");
                scanf("%d", &choice);
                break;
            case 3: 
                printf("You selected cold drinks!\n");
                printf("Menu Options:\n");
                printf("1 - Coffee\n");
                printf("2 - Tea\n");
                printf("3 - Cold Drinks\n");

                printf("Which choice do you want? Press 0 if you would rather quit. Choice:");
                scanf("%d", &choice);
                break;
            default: 
                printf("Invalid Option\n");
                printf("Menu Options:\n");
                printf("1 - Coffee\n");
                printf("2 - Tea\n");
                printf("3 - Cold Drinks\n");

                printf("Which choice do you want? Press 0 if you would rather quit. Choice:");
                scanf("%d", &choice);
        }
    } while (choice != 0);

    return 0;
}