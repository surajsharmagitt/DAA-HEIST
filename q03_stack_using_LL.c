#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

struct Node *top = NULL;

// Push operation
void push(void)
{
    struct Node *newNode;
    int value;

    printf("Enter the value to push: ");
    scanf("%d", &value);

    newNode = (struct Node *)malloc(sizeof(struct Node));

    if (newNode == NULL)
    {
        printf("Memory allocation failed!\n");
        return;
    }

    newNode->data = value;
    newNode->next = top;
    top = newNode;

    printf("%d pushed into stack.\n", value);
}

// Pop operation
void pop(void)
{
    struct Node *temp;

    if (top == NULL)
    {
        printf("Stack is empty!\n");
        return;
    }

    temp = top;

    printf("Popped element: %d\n", top->data);

    top = top->next;

    free(temp);
}

// Display operation
void display(void)
{
    struct Node *temp;

    if (top == NULL)
    {
        printf("Stack is empty!\n");
        return;
    }

    temp = top;

    printf("Stack elements are: ");

    while (temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }

    printf("\n");
}

int main(void)
{
    int choice;

    do
    {
        printf("\n--- Stack Operations ---\n");
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Display\n");
        printf("4. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                push();
                break;

            case 2:
                pop();
                break;

            case 3:
                display();
                break;

            case 4:
                printf("Exiting program.\n");
                break;

            default:
                printf("Invalid choice!\n");
        }

    } while (choice != 4);

    return 0;
}
