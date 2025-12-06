#include <stdio.h>
#include <stdlib.h>

int stack[100];
int top = -1;
int maxSize;


void push();
void pop();
void peek();
void display();

int main() {
    int choice;

    printf("\n--- STACK SIMULATION PROJECT ---");
    printf("\nEnter the maximum size of stack: ");
    scanf("%d", &maxSize);

    while (1) {
        printf("\n\n--- MENU ---");
        printf("\n1. Push");
        printf("\n2. Pop");
        printf("\n3. Peek (Top Element)");
        printf("\n4. Display Stack");
        printf("\n5. Exit");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: push(); break;
            case 2: pop(); break;
            case 3: peek(); break;
            case 4: display(); break;
            case 5: 
                printf("\nExiting program...\n");
                exit(0);
            default:
                printf("\nInvalid choice! Try again.");
        }
    }
    return 0;
}

void push() {
    int value;
    if (top == maxSize - 1) {
        printf("\nStack Overflow! Cannot push.");
        return;
    }

    printf("Enter value to push: ");
    scanf("%d", &value);

    top++;
    stack[top] = value;

    printf("\n%d pushed into the stack.", value);
}

void pop() {
    if (top == -1) {
        printf("\nStack Underflow! Cannot pop.");
        return;
    }

    printf("\n%d popped from the stack.", stack[top]);
    top--;
}

void peek() {
    if (top == -1) {
        printf("\nStack is empty! No top element.");
        return;
    }

    printf("\nTop element is: %d", stack[top]);
}

void display() {
    if (top == -1) {
        printf("\nStack is empty!");
        return;
    }

    printf("\nStack elements are: ");
    for (int i = top; i >= 0; i--) {
        printf("%d ", stack[i]);
    }
}