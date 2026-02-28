#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int nums[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }
    int visited[n];
    for (int i = 0; i < n; i++) {
        visited[i] = 0;
    }

    for (int i = 0; i < n; i++) {
        if (visited[i] == 1) continue;  

        int count = 1;
        for (int j = i + 1; j < n; j++) {
            if (nums[i] == nums[j]) {
                count++;
                visited[j] = 1;  
            }
        }
        printf("%d:%d ", nums[i], count);
    }

    return 0;
}
