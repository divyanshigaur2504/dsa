#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

// Node for stack
struct Node {
    int data;
    struct Node* next;
};

struct Node* top = NULL;

// Push
void push(int x) {
    struct Node* temp = (struct Node*)malloc(sizeof(struct Node));
    temp->data = x;
    temp->next = top;
    top = temp;
}

// Pop
int pop() {
    if (top == NULL) return -1;

    struct Node* temp = top;
    int val = temp->data;
    top = top->next;
    free(temp);
    return val;
}

// Evaluate postfix
int evaluate(char* exp) {
    char* token = strtok(exp, " ");

    while (token != NULL) {

        // If number
        if (isdigit(token[0])) {
            push(atoi(token));
        }
        else {
            int b = pop();
            int a = pop();
            int res;

            switch (token[0]) {
                case '+': res = a + b; break;
                case '-': res = a - b; break;
                case '*': res = a * b; break;
                case '/': res = a / b; break;
            }
            push(res);
        }

        token = strtok(NULL, " ");
    }

    return pop();
}

int main() {
    char exp[100];

    // Read full line
    fgets(exp, sizeof(exp), stdin);

    // Remove newline
    exp[strcspn(exp, "\n")] = '\0';

    int result = evaluate(exp);
    printf("%d", result);

    return 0;
}
