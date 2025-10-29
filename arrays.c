#include <stdio.h>

int main() {
    int n[5], even[5], odd[5];
    int evenCount = 0, oddCount = 0;
    int totalSum = 0, totalProduct = 1;
    int evenSum = 0, evenProduct = 1;
    int oddSum = 0, oddProduct = 1;

    printf("Enter 5 numbers:\n");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &n[i]);
        totalSum += n[i];
        totalProduct *= n[i];

        if (n[i] % 2 == 0) {
            even[evenCount++] = n[i];
            evenSum += n[i];
            evenProduct *= n[i];
        } else {
            odd[oddCount++] = n[i];
            oddSum += n[i];
            oddProduct *= n[i];
        }
    }

    printf("\nEven numbers: ");
    for (int i = 0; i < evenCount; i++) {
        printf("%d", even[i]);
        if (i < evenCount - 1) printf(", ");
    }

    printf("\nOdd numbers: ");
    for (int i = 0; i < oddCount; i++) {
        printf("%d", odd[i]);
        if (i < oddCount - 1) printf(", ");
    }

    printf("\n\nSum of all numbers = %d", totalSum);
    printf("\nProduct of all numbers = %d", totalProduct);
    printf("\nSum of even numbers = %d", evenSum);
    printf("\nProduct of even numbers = %d", evenProduct);
    printf("\nSum of odd numbers = %d", oddSum);
    printf("\nProduct of odd numbers = %d\n", oddProduct);

    return 0;
}
