#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *next;
};

struct node *head=NULL;

void insert_begin(){
    struct node *newnode;
    newnode=(struct node*)malloc(sizeof(struct node));

    printf("Enter data: ");
    scanf("%d",&newnode->data);

    newnode->next=head;
    head=newnode;
}

void insert_end(){
    struct node *newnode,*temp=head;

    newnode=(struct node*)malloc(sizeof(struct node));

    printf("Enter data: ");
    scanf("%d",&newnode->data);

    newnode->next=NULL;

    while(temp->next!=NULL){
        temp=temp->next;
    }

    temp->next=newnode;
}

void insert_pos(){
    int pos,i=1;
    struct node *newnode,*temp=head;

    printf("Enter position: ");
    scanf("%d",&pos);

    newnode=(struct node*)malloc(sizeof(struct node));

    printf("Enter data: ");
    scanf("%d",&newnode->data);

    while(i<pos-1){
        temp=temp->next;
        i++;
    }

    newnode->next=temp->next;
    temp->next=newnode;
}

int main(){
    insert_begin();
    insert_end();
    insert_pos();
}