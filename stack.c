#include <stdio.h>

#define SIZE 5

int st[SIZE];
int top = -1;

void push(int num);
void pop();
void display();

int main() {
    int choice, value;
    int start = 1;

    do{
        printf("\n1. Push\n2. Pop\n3. Display\n0. Exit\n");
        printf("\nEnter choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                printf("\nEnter value to push: ");
                scanf("%d", &value);
                push(value);
                break;

            case 2:
                pop();
                break;

            case 3:
                display();
                break;

            case 0:
                start = 0;
                printf("Program Closed.");
                break;

            default:
                printf("Invalid choice!\n");
        }

    }while(start);

    return 0;
}

void push(int num) {
    if(top == SIZE - 1) {
        printf("Stack Overflow!\n");
    } else {
        top++;
        st[top] = num;
        printf("%d pushed into stack.\n", num);
    }
}

void pop() {
    if(top == -1) {
        printf("Stack Underflow!\n");
    } else {
        printf("%d popped from stack.\n", st[top]);
        top--;
    }
}

void display() {
    if(top == -1) {
        printf("\nStack is empty.\n");
    } else {
        printf("\nStack elements:\n");
        for(int i = top; i >= 0; i--) {
            printf("%d ", st[i]);
        }
    }
}