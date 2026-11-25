#include <stdio.h>

// ============================================================
// ACTIVITY 1: PASS-BY-VALUE
// The swap that doesn't swap
// ============================================================

void swapByValue(int a, int b) {

    printf("  Inside function - Before swap: a = %d, b = %d\n", a, b);

    // Temporary variable
    int temp = a;

    // Swap the values
    a = b;
    b = temp;

    printf("  Inside function - After swap:  a = %d, b = %d\n", a, b);
}

// ============================================================
// CHALLENGE: FIX THE SWAP USING POINTERS
// Pass-by-reference equivalent in C
// ============================================================

void swapByPointer(int *a, int *b) {

    // Store the original value of a
    int temp = *a;

    // Swap using pointers
    *a = *b;
    *b = temp;

    printf("  Inside pointer function: a = %d, b = %d\n", *a, *b);
}

// ============================================================
// MAIN FUNCTION
// ============================================================

int main() {

    int x = 10;
    int y = 20;

    // PART 1: PASS-BY-VALUE

    printf("====================================\n");
    printf("       PASS-BY-VALUE SWAP\n");
    printf("====================================\n");

    printf("Before calling swapByValue:\n");
    printf("  x = %d, y = %d\n", x, y);

    swapByValue(x, y);

    printf("After calling swapByValue:\n");
    printf("  x = %d, y = %d\n", x, y);

    printf("\nExplanation:\n");
    printf("The function received COPIES of x and y.\n");
    printf("The original variables remain unchanged.\n");


    // PART 2: PASS-BY-POINTER

    printf("\n====================================\n");
    printf("       SWAP USING POINTERS\n");
    printf("====================================\n");

    printf("Before calling swapByPointer:\n");
    printf("  x = %d, y = %d\n", x, y);

    // Pass the addresses of x and y
    swapByPointer(&x, &y);

    printf("After calling swapByPointer:\n");
    printf("  x = %d, y = %d\n", x, y);

    printf("\nExplanation:\n");
    printf("Pointers access the original variables.\n");
    printf("Therefore, the original values are swapped.\n");

    return 0;
}