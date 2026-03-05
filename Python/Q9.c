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

void delete_begin()
{
    struct node *temp = head;

    if(head == NULL)
        return;

    head = head->next;

    if(head != NULL)
        head->prev = NULL;

    free(temp);
}

void delete_end()
{
    struct node *temp = head;

    while(temp->next != NULL)
        temp = temp->next;

    temp->prev->next = NULL;

    free(temp);
}

void delete_position()
{
    int pos, i = 1;
    struct node *temp = head;

    printf("Enter position: ");
    scanf("%d", &pos);

    while(i < pos)
    {
        temp = temp->next;
        i++;
    }

    temp->prev->next = temp->next;

    if(temp->next != NULL)
        temp->next->prev = temp->prev;

    free(temp);
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

    delete_begin();
    delete_end();
    delete_position();

    printf("List after deletion: ");
    display();

    return 0;
}