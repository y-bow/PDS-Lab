#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *prev;
    struct node *next;
};

struct node *head=NULL;

void display_forward(){
    struct node *temp=head;

    while(temp!=NULL){
        printf("%d ",temp->data);
        temp=temp->next;
    }
}

void display_backward(){
    struct node *temp=head;

    while(temp->next!=NULL){
        temp=temp->next;
    }

    while(temp!=NULL){
        printf("%d ",temp->data);
        temp=temp->prev;
    }
}

int main(){
    display_forward();
    display_backward();
}