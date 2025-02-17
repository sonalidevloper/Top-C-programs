//c program to reverse a stack using recursion 
#include <stdio.h>

#define MAX 100  

int stack[MAX], top = -1;
void push(int value) {
    stack[++top] = value;
}
int pop() {
    return stack[top--];
}
void insertAtBottom(int item) {
    if (top == -1) {
        push(item);
        return;
    }
    int temp = pop();
    insertAtBottom(item);
    push(temp);
}

void reverseStack() {
    if (top == -1) return;
    int temp = pop();
    reverseStack();
    insertAtBottom(temp);
}

void printStack() {
    for (int i = 0; i <= top; i++)
        printf("%d ", stack[i]);
    printf("\n");
}

int main() {
    push(1);
    push(2);
    push(3);
    push(4);

    printf("Original Stack: ");
    printStack();

    reverseStack();

    printf("Reversed Stack: ");
    printStack();

    return 0;
}
