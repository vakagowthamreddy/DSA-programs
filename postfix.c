#include <stdio.h>
#include <ctype.h>

int stack[100];
int top = -1;

void push(int value) {
    stack[++top] = value;
}

int pop() {
    return stack[top--];
}

int main() {
    char postfix[100];
    int i, a, b;

    printf("Enter postfix expression: ");
    scanf("%99s", postfix);

    for (i = 0; postfix[i] != '\0'; i++) {
        if (isdigit((unsigned char)postfix[i])) {
            push(postfix[i] - '0');
        } else {
            b = pop();
            a = pop();

            switch (postfix[i]) {
                case '+':
                    push(a + b);
                    break;
                case '-':
                    push(a - b);
                    break;
                case '*':
                    push(a * b);
                    break;
                case '/':
                    if (b == 0) {
                        printf("Error: Division by zero\n");
                        return 1;
                    }
                    push(a / b);
                    break;
                default:
                    printf("Invalid operator\n");
                    return 1;
            }
        }
    }

    printf("Result = %d\n", pop());

    return 0;
}
