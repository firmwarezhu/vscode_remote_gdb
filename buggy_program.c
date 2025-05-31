// File: buggy_program.c
#include <stdio.h>
#include <stdlib.h>

int factorial(int n) {
    if (n <= 1) {
        return 1;
    }
    return n * factorial(n - 1);  // Bug: no bounds checking
}

int divide_numbers(int a, int b) {
    return a / b;  // Bug: division by zero not handled
}

int main() {
    int numbers[] = {5, 0, -3, 10};
    int size = sizeof(numbers) / sizeof(numbers[0]);
    
    printf("Testing factorial and division:\n");
    
    for (int i = 0; i < size; i++) {
        int num = numbers[i];
        printf("Number: %d\n", num);
        
        // Calculate factorial
        int fact = factorial(num);
        printf("Factorial of %d: %d\n", num, fact);
        
        // Divide by the number
        int result = divide_numbers(100, num);
        printf("100 / %d = %d\n", num, result);
        
        printf("---\n");
    }
    
    return 0;
}
