#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *next;
};

struct node *head = NULL;

void create(){
    int choice=1;
    struct node *newnode,*temp;

    while(choice==1){
        newnode=(struct node*)malloc(sizeof(struct node));

        printf("Enter data: ");
        scanf("%d",&newnode->data);
        newnode->next=NULL;

        if(head==NULL){
            head=temp=newnode;
        }
        else{
            temp->next=newnode;
            temp=newnode;
        }

        printf("Press 1 to continue: ");
        scanf("%d",&choice);
    }
}

void display(){
    struct node *temp=head;

    while(temp!=NULL){
        printf("%d ",temp->data);
        temp=temp->next;
    }
}

void count(){
    int c=0;
    struct node *temp=head;

    while(temp!=NULL){
        c++;
        temp=temp->next;
    }

    printf("\nTotal nodes = %d",c);
}

int main(){
    create();
    display();
    count();
}