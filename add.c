#include <stdio.h>

int main() {
    // Define an array of integers
    int numbers[] = {1, 2, 3, 4, 5};
    int length = sizeof(numbers) / sizeof(numbers[0]);

    int sum = 0;

    // Loop through the array and add each element to the sum
    for (int i = 0; i < length; i++) {
        sum += numbers[i];
    }

    // Print the result
    printf("The sum of the array is: %d\n", sum);

    return 0;
}