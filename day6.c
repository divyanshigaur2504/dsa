#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    if (n == 0) return 0; // Edge case: empty array

    int lastUnique = arr[0];
    printf("%d", lastUnique);

    for (int i = 1; i < n; i++) {
        if (arr[i] != lastUnique) {
            lastUnique = arr[i];
            printf(" %d", lastUnique);
        }
    }
    printf("\n");

    return 0;
}
