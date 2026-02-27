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
	char hex[9];
	int i;
	int digit;
	
	printf("Enter a hexadecimal:");
	scanf("%8s", hex);

	for (i=0; i<strlen(hex); i++){
		char character = hex[i];
		
		if (character >= '0' && character <= '9') {
			digit = character - '0';
		} else if(character >= 'a' && character <= 'f'){
			digit = character - 'a' + 10;
		} else if(character >= 'A' && character <= 'F') {
			digit = character - 'A' + 10;
		} else {
			printf("Error: Invalid Hexadecimal\n");
			return 1;
		}
		decimal = decimal * 16 + digit;
	}
	// if input contains invalid hex digit
	// printf("Error: Invalid Hexadecimal\n");
	
	// print the decimal result
	printf("decimal:%ld\n", decimal);
	
	return 0;
}