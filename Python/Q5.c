#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *next;
};

struct node *head=NULL;

void reverse(){
    struct node *prev=NULL,*nextnode,*current=head;

    while(current!=NULL){
        nextnode=current->next;
        current->next=prev;
        prev=current;
        current=nextnode;
    }

    head=prev;
}

int main(){
    reverse();
}