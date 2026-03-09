#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *prev;
    struct node *next;
};

struct node *head = NULL;

void create()
{
    int choice = 1;
    struct node *newnode, *temp;

    while(choice)
    {
        newnode = (struct node*)malloc(sizeof(struct node));

        printf("Enter data: ");
        scanf("%d", &newnode->data);

        newnode->prev = NULL;
        newnode->next = NULL;

        if(head == NULL)
        {
            head = temp = newnode;
        }
        else
        {
            temp->next = newnode;
            newnode->prev = temp;
            temp = newnode;
        }

        printf("Add another node? (1/0): ");
        scanf("%d", &choice);
    }
}

void reverse()
{
    struct node *current = head;
    struct node *temp = NULL;

    while(current != NULL)
    {
        temp = current->prev;
        current->prev = current->next;
        current->next = temp;

        current = current->prev;
    }

    if(temp != NULL)
        head = temp->prev;
}

void display()
{
    struct node *temp = head;

    while(temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }
}

int main()
{
    create();

    printf("Original List: ");
    display();

    reverse();

    printf("\nReversed List: ");
    display();

    return 0;
}