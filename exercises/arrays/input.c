// Saves a 5 length array and prints it out

#include <stdio.h>

int main() {
    int arrlen = 5;
    int arr[arrlen];

    printf("Enter %d numbers: ", arrlen);
    for (int i = 0; i < arrlen; i++) {
        scanf("%d", &arr[i]);
    }

    printf("\nArray: ");

    for (int i = 0; i < arrlen; i++) {
        printf("%d ", arr[i]);
    }

    printf("\n");

    return 0;
}
