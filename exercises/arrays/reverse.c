#include <stdio.h>

int main() {
    int arrlen = 4;
    int arr[arrlen];
    int flippedarr[arrlen];
    
    printf("Enter %d numbers: ", arrlen);
    for (int i = 0; i < arrlen; i++) {
        scanf("%d", &arr[i]);
    }

    int n = arrlen;

    for (int i = 0; i < arrlen; i++) {
        n--;
        flippedarr[i] = arr[n];
    }

    printf("\nFlipped array: ");

    for (int i = 0; i < arrlen; i++) {
        printf("%d ", flippedarr[i]);
    }

    printf("\n");

    return 0;
}
