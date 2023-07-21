#include <stdio.h>

#define ARRAY_SIZE 5

int main() {
    // Step 1: Declare the array and initialize it
    int myArray[ARRAY_SIZE];

    // Step 2: Initialize the array elements
    printf("Enter %d elements:\n", ARRAY_SIZE);
    for (int i = 0; i < ARRAY_SIZE; i++) {
        scanf("%d", &myArray[i]);
    }

    // Step 3: Access elements of the array and perform operations
    printf("\nAccessing elements of the array:\n");
    for (int i = 0; i < ARRAY_SIZE; i++) {
        printf("Element at index %d: %d\n", i, myArray[i]);
    }

    // Step 4: Modify an element
    int indexToModify;
    int newValue;
    printf("\nEnter the index to modify (0 to %d): ", ARRAY_SIZE - 1);
    scanf("%d", &indexToModify);
    
    if (indexToModify >= 0 && indexToModify < ARRAY_SIZE) {
        printf("Enter the new value: ");
        scanf("%d", &newValue);

        myArray[indexToModify] = newValue;

        printf("\nAfter modifying element at index %d:\n", indexToModify);
        printf("Element at index %d: %d\n", indexToModify, myArray[indexToModify]);
    } else {
        printf("Invalid index.\n");
    }

    // Step 5: Find the maximum and minimum values
    int max = myArray[0];
    int min = myArray[0];

    for (int i = 1; i < ARRAY_SIZE; i++) {
        if (myArray[i] > max) {
            max = myArray[i];
        }
        if (myArray[i] < min) {
            min = myArray[i];
        }
    }

    printf("\nMaximum value: %d\n", max);
    printf("Minimum value: %d\n", min);

    // Step 6: Calculate the average of array elements
    int sum = 0;
    for (int i = 0; i < ARRAY_SIZE; i++) {
        sum += myArray[i];
    }

    double average = (double)sum / ARRAY_SIZE;
    printf("\nAverage value: %.2f\n", average);

    return 0;
}
