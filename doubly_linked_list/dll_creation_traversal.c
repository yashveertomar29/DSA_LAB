#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *prev;
    struct Node *next;
};

int main() {
    struct Node *head = NULL, *tail = NULL, *newNode;
    int n, i;

    printf("Enter number of nodes: ");
    scanf("%d", &n);

    // Creation
    for (i = 0; i < n; i++) {
        newNode = malloc(sizeof(struct Node));

        printf("Enter data: ");
        scanf("%d", &newNode->data);

        newNode->prev = tail;
        newNode->next = NULL;

        if (head == NULL)
            head = newNode;
        else
            tail->next = newNode;

        tail = newNode;
    }

    // Forward Traversal
    printf("Forward: ");
    newNode = head;

    while (newNode != NULL) {
        printf("%d ", newNode->data);
        newNode = newNode->next;
    }

    // Backward Traversal
    printf("\nBackward: ");
    newNode = tail;

    while (newNode != NULL) {
        printf("%d ", newNode->data);
        newNode = newNode->prev;
    }

    return 0;
}