#include <stdio.h>

#define MAX 100

int stack[MAX];
int top = -1;

// Push
void push(int x) {
    if (top == MAX - 1) {
        // Overflow (not required in question, but safe)
        return;
    }
    stack[++top] = x;
}

// Pop
void pop() {
    if (top == -1) {
        printf("Stack Underflow\n");
        return;
    }
    printf("%d\n", stack[top--]);
}

// Display (top to bottom)
void display() {
    if (top == -1) {
        return;
    }
    for (int i = top; i >= 0; i--) {
        printf("%d ", stack[i]);
    }
    printf("\n");
}

int main() {
    int n, type, value;
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%d", &type);

        if (type == 1) {        // push
            scanf("%d", &value);
            push(value);
        } 
        else if (type == 2) {   // pop
            pop();
        } 
        else if (type == 3) {   // display
            display();
        }
    }

    return 0;
}
