// Week 5, Session 2

/* Task 2.1
 * Temperature conversion with input validation
 * Converts temperatures between Celsius and Fahrenheit with error checking
 */

#include <stdio.h>
#include <string.h>
#include <ctype.h>  // For toupper function

int main(void) {
    char input[50];
    float temperature;
    char scale;
    int valid_input = 0;
    float converted_temp;
    
    printf("=== Temperature Converter ===\n");
    
    // TODO: Keep asking until valid input is provided
    // Use an appropriate loop structure
    // TODO: Use fgets to read the input
    // TODO: Remove the newline character from input
    // Hint: input[strcspn(input, "\n")] = 0;


    while (!valid_input){
        printf("Enter temperature with scale (e.g., 23.5C or 75F): ");
        if (fgets(input, sizeof(input), stdin) == NULL) {
            printf("Error reading input.\n");
            continue;
        }

        input[strcspn(input, "\n")] = 0;
    
        
        // TODO: Parse the input to extract temperature and scale
        // Hint: Use sscanf(input, "%f%c", &temperature, &scale);
        // Advanced: Consider handling input with a degree symbol (°)
    
        int result = sscanf(input, "%f%c", &temperature, &scale);
        if (result != 2) {
            printf("Invalid format.");
            continue;
        }

        // TODO: Validate the scale (must be 'C', 'c', 'F', or 'f')
        // Convert scale to uppercase for easier comparison
        // Hint: scale = toupper(scale); // toupper() converts 'c' to 'C', 'f' to 'F'
        // Note: In Python, you'd use string method: scale = scale.upper()
    
        scale = toupper(scale); 
        if (scale != 'C' && scale != 'F') {
            printf("Invalid unit. Use C or F. \n");
            continue;
        }

        // TODO: If input is valid, set valid_input = 1
        // If invalid, print an error message
        valid_input = 1;
    }  
    // TODO: Perform conversion based on the input scale
    // - If Celsius, convert to Fahrenheit: F = C * 9/5 + 32
    // - If Fahrenheit, convert to Celsius: C = (F - 32) * 5/9
    // - Print the result with appropriate formatting, including the degree symbol (°)
    //   Hint: Use printf("%.1f°C is equal to %.1f°F\n", temperature, converted_temp);
    if (scale == 'C') {
        converted_temp = temperature * 9.0f / 5.0f +32.0f;
        printf("%.1f°C is equal to %.1f°F\n", temperature, converted_temp);
    } else {
         converted_temp = (temperature - 32.0f) * 5.0f / 9.0f;
        printf("%.1f°F is equal to %.1f°C\n", temperature, converted_temp);
    }

    return 0;
}
