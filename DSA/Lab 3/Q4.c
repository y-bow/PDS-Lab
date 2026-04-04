#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 100

char stack[MAX];
int top = -1;

void push(char c) {
    if (top == MAX - 1) {
        printf("Stack Overflow\n");
    } else {
        top++;
        stack[top] = c;
    }
}

char pop() {
    if (top == -1) {
        return -1;
    } else {
        return stack[top--];
    }
}

int isMatching(char a, char b) {
    return ((a == '(' && b == ')') || (a == '{' && b == '}') || (a == '[' && b == ']'));
}

int isBalanced(char* expr) {
    for (int i = 0; expr[i] != '\0'; i++) {
        if (expr[i] == '(' || expr[i] == '{' || expr[i] == '[') {
            push(expr[i]);
        } else if (expr[i] == ')' || expr[i] == '}' || expr[i] == ']') {
            if (top == -1 || !isMatching(pop(), expr[i])) {
                return 0;
            }
        }
    }
    return (top == -1);
}

int main() {
    char expr[MAX];
    printf("Enter expression: ");
    scanf("%s", expr);
    if (isBalanced(expr)) {
        printf("Valid Expression\n");
    } else {
        printf("Invalid Expression\n");
    }
    return 0;
}