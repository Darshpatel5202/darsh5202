#include <stdio.h>

int main() {
    const int totalValues = 10;
    int numbers[totalValues];
    int oddNumbers[totalValues];
    int evenNumbers[totalValues];
    int oddCount = 0;
    int evenCount = 0;

    printf("Please enter %d values:\n", totalValues);
    for(int i=0; i< totalValues; i++) {
        printf("Value %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }

    // Separate odd and even numbers
    for (int i = 0; i < totalValues; i++) {
        if (numbers[i] % 2 == 0) {
            evenNumbers[evenCount] = numbers[i];
            evenCount++;
        } else {
            oddNumbers[oddCount] = numbers[i];
            oddCount++;
        }
    }

    // Displaying the odd numbers
    printf("\nOdd numbers: ");
    for (int i = 0; i < oddCount; i++) {
        printf("%d ", oddNumbers[i]);
    }

    // Displaying the even numbers
    printf("\nEven numbers: ");
    for (int i = 0; i < evenCount; i++) {
        printf("%d ", evenNumbers[i]);
    }

    printf("\n");
    return 0;
}

