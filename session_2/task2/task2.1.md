# Task 2: Temperature Conversion with Input Validation

## Objective
Create a temperature conversion program that safely reads and validates input using `fgets()`. 
This activity focuses on combining loops with input processing, implementing proper validation techniques, and handling different input formats.

## File Included
- `task2.1.c` - Temperature conversion program with input validation

## Exercise Instructions

In this activity, you'll implement a temperature conversion program that:

1. Safely reads input using `fgets()` rather than `scanf()`
2. Validates the input format and temperature unit (C or F)
3. Converts between Celsius and Fahrenheit
4. Handles errors gracefully

The program should:
- Accept input in the format "23.5C" or "75F" (a number followed by C or F)
- Convert Celsius to Fahrenheit (F = C * 9/5 + 32)
- Convert Fahrenheit to Celsius (C = (F - 32) * 5/9)
- Continue asking until valid input is provided
- Display the converted temperature with appropriate units

## Implementation Steps

1. **Read input with `fgets()`**:
   - Allocate a buffer of appropriate size (e.g., 50 characters)
   - Use `fgets()` to safely read input from `stdin`
   - Remove the trailing newline character from the input

2. **Parse and validate the input**:
   - Extract the temperature value and unit using `sscanf()`
   - Check if the unit is valid (C, c, F, or f)
   - Use the `toupper()` function (from ctype.h) to convert lowercase letters to uppercase for easier comparison
     - C's `toupper()` is similar to Python's `.upper()` method, but works on individual characters
     - In Python you would write: `scale = scale.upper()` 
     - In C you write: `scale = toupper(scale);`
   - Handle invalid input formats appropriately
   - Consider how to handle the degree symbol (°) if entered by the person

3. **Implement the conversion logic**:
   - Convert from Celsius to Fahrenheit or vice versa based on the input unit
   - Format the output with appropriate precision (e.g., one decimal place)
   - Include the degree symbol (°) in your output for proper temperature formatting

4. **Use a loop for input validation**:
   - Continue asking for input until valid data is provided
   - Provide helpful error messages when input is invalid

---

## Using sscanf() for Input Parsing

In this activity, we'll use `sscanf()` to parse the input string and extract the temperature value and unit. 
Since this function might be new to you, here's an overview of its usage:

### What is sscanf()?

`sscanf()` is a function from the C standard library that reads formatted data from a string 
(rather than from standard input like `scanf()`). It's particularly useful when we:

1. Need to extract specific values from a string
2. Want to parse input after safely reading it with `fgets()`
3. Need to apply more complex format patterns to string data

### Syntax

```c
int sscanf(const char *str, const char *format, ...);
```

- **str**: The input string to be parsed
- **format**: A format string (similar to what you would use with `printf` or `scanf`)
- **...**: Variable arguments where the extracted values will be stored
- **Return value**: Number of successfully assigned items, or EOF on error

### Example Usage

For our temperature conversion example, we'll use `sscanf()` to extract a float (the temperature) followed by a character (C or F):

```c
float temperature;
char scale;
int result = sscanf(input, "%f%c", &temperature, &scale);
```

This code:
1. Attempts to read a floating-point number followed by a character from the `input` string
2. Stores the floating-point number in the `temperature` variable
3. Stores the character in the `scale` variable
4. Puts the number of successfully read items in `result` (should be 2 if both were read)

### Why Use sscanf() with fgets() Instead of scanf()?

This two-step approach has several advantages:
1. **Safety**: `fgets()` prevents buffer overflow by limiting input length
2. **Flexibility**: You can validate and process the input string before parsing
3. **Retry capability**: If parsing fails, you still have the original input string
4. **Better error handling**: You can check if formatting succeeded and also provide specific error messages

### In This Activity

We'll use `sscanf()` to parse input strings like "23.5C" or "75F" into separate components:
- A floating-point temperature value
- A character representing the temperature scale

The combination of `fgets()` and `sscanf()` provides us with safety and useful parsing capabilities.

---

## Extension Tasks

If you finish early, and/or in your personal study time, consider implementing these additional features:

1. Allow input in different formats (e.g., "23.5 C", "23.5°C", "C 23.5")
2. Add validation for extreme temperatures (e.g., warn if below absolute zero)
3. Add support for Kelvin temperature scale (K)
4. Implement a menu to let the person choose what conversion they want to perform
