/*
 * Sem 2, week 5
 *
 * Portfolio submission: Hexadecimal to Decimal Converter
 * Name: Nadine ElGamal 
 * ID: 201962580
 */

#include <stdio.h>
#include <string.h>

int main(void){
	long decimal=0;
	char hex[9]; // max length is 8 character and there is one added for the terminator ("\0")
	int i;
	int digit; // the value of each hexadecimal digit from 0-15
	
	printf("Enter a hexadecimal:");
	scanf("%8s", hex); // ensures that no more than 8 characters are read - hence preventing overflow 

	// the for loop allows the program through each character in the string 
	for (i=0; i<strlen(hex); i++){
		char character = hex[i]; // the current hex digit
		
		if (character >= '0' && character <= '9') {
			digit = character - '0'; // 0-9 remains 0-9 
		} else if(character >= 'a' && character <= 'f'){
			digit = character - 'a' + 10; // a-f changes to 10-15
		} else if(character >= 'A' && character <= 'F') {
			digit = character - 'A' + 10; // A-F chnaged to 10-15 
		} else {
			printf("Error: Invalid Hexadecimal\n"); // if input contains invalid hex digit
			return 1;
		}
		decimal = decimal * 16 + digit; // multiplying the current number by 16 and adds the new digit to build the final value 
	}
	
	// print the decimal result
	printf("decimal:%ld\n", decimal);
	
	return 0;
}