#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *prev;
    struct node *next;
};

struct node *head=NULL;

void create(){
    int choice=1;
    struct node *newnode,*temp;

    while(choice==1){
        newnode=(struct node*)malloc(sizeof(struct node));

        printf("Enter data: ");
        scanf("%d",&newnode->data);

        newnode->prev=NULL;
        newnode->next=NULL;

        if(head==NULL){
            head=temp=newnode;
        }
        else{
            temp->next=newnode;
            newnode->prev=temp;
            temp=newnode;
        }

        printf("Press 1 to continue: ");
        scanf("%d",&choice);
    }
}

int main(){
    create();
}