
#include <stdio.h>

#define MAX 100

int stack[MAX];
int top = -1;

// Push operation
void push(int x) {
    stack[++top] = x;
}

// Pop operation
void pop() {
    if (top >= 0)
        top--;
}

int main() {
    int n, m, i, x;

    // Input number of elements
    scanf("%d", &n);

    // Push elements
    for(i = 0; i < n; i++) {
        scanf("%d", &x);
        push(x);
    }

    // Number of pops
    scanf("%d", &m);

    // Perform pop operations
    for(i = 0; i < m; i++) {
        pop();
    }

    // Display remaining stack (top to bottom)
    for(i = top; i >= 0; i--) {
        printf("%d ", stack[i]);
    }

    return 0;
}
