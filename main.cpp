#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
// Node structure for linked list
typedef struct node
{
    int data;
    struct node *next;
} Node;
// Add new node to the beginning of the list
Node *fillLList(Node *head, int d)
{
    Node *newNode = (Node *)malloc(sizeof(Node));
    newNode->data = d;
    newNode->next = head;
    return newNode;
}
// Display binary representation and free memory
void displayBinaryLL(Node *head, int i)
{
    Node *temp = head;
    printf("Binary representation of %d is: ", i);
    while (temp != NULL)
    {
        printf("%d", temp->data);
        temp = temp->next;
    }
    // free memory
    Node *current = head;
    Node *next;
    while (current != NULL)
    {
        next = current->next;
        free(current);
        current = next;
    }
}
// Convert integer to binary using recursion then fill the linked list
Node *intToBin(int i, Node *head = NULL)
{
    if (i == 0 || i == 1)
        return fillLList(head, i);
    else
    {
        head = fillLList(head, i % 2);
        return intToBin(i / 2, head);
    }
}

int main()
{
    // Get user input
    int intNum;
    printf("Enter a decimal number: ");
    scanf("%d", &intNum);
    // Convert to binary and display result
    displayBinaryLL(intToBin(intNum), intNum);
    return 0;
}
