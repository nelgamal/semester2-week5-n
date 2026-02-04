// Week 5, session 1

/* Task 3.3
 * Write a C program that checks a customer's eligibility for a bank loan
 * based on personal and financial details.
 *
 * Input:
 * - An integer representing the loan type:
 *   1 → Home Loan
 *   2 → Car Loan
 *   3 → Personal Loan
 * - An integer representing the customer's age.
 * - A floating-point number representing the customer's monthly income.
 * - An integer representing the customer's credit score.
 *
 * Output:
 * - Print "Loan status: Rejected (Age not eligible)" for age less 
 *   than 21 or greater than 80, and end the program.
 * - Print "Invalid loan type" for invalid loan type and exit the program.
 * - If loan approved, print 
 * 		Loan type: xxx
 * 		Loan status: xxx
 * 		Maximum loan amount: xxx
 * - If loan rejected, print "Loan status: Rejected (Criteria not met)"
 *
 * Notes:
 * - Use a switch statement to determine loan-specific rules.
 * - Requirements to approve loan for those with eligible age:
 *   Home Loan: Income ≥ 5000, Credit Score ≥ 700
 *   Car Loan: Income ≥ 3000, Credit Score ≥ 650
 *   Personal Loan: Income ≥ 2000, Credit Score ≥ 600
 * - Max loan calculation:
	 Car Loan: income * 20
	 House Loan: income * 60
	 Personal Loan: income * 10
 *
 * Example:
 * Enter loan type (1-Home, 2-Car, 3-Personal): 2
 * Enter age: 30
 * Enter monthly income: 4500
 * Enter credit score: 720
 *
 * Output:
 * Loan type: Car Loan
 * Loan status: Approved
 * Maximum loan amount: 20000.00
 */
 
#include <stdio.h>
#include <stdbool.h>

int main(void) {
    int loan_type;
    int age;
    int credit_score;
    double income;
    double max_loan = 0.0;
    bool approved = false;

    /* Input */
    printf("Enter loan type (1-Home, 2-Car, 3-Personal): ");
    scanf("%d", &loanType);

    printf("Enter age: ");
    scanf("%d", &age);

    printf("Enter monthly income: ");
    scanf("%f", &income);

    printf("Enter credit score: ");
    scanf("%d", &creditScore);

    /* subtask1: Age eligibility check */
	// Complete your code here



    /* subtask 2: Loan-specific checks using switch*/
	// Complete your code here
    switch (loan_type) {
        case 1:
            break;

        default:
            printf("Invalid loan type\n");
            return 0;
    }

    /* subtask 3: Output result */
	// Complete your code here
	if (approved) {
		// todo
	}


    return 0;
}