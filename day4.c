#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];

    // Read input array
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Two-pointer reverse
    int left = 0, right = n - 1;
    while (left < right) {
        // Swap arr[left] and arr[right]
        int temp = arr[left];
        arr[left] = arr[right];
        arr[right] = temp;

        left++;
        right--;
    }

    // Print reversed array
    for (int i = 0; i < n; i++) {
        printf("%d", arr[i]);
        if (i != n - 1) {
            printf(" ");
        }
    }
    printf("\n");

    return 0;
}
