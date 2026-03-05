#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *next;
};

struct node *head=NULL;

void delete_begin(){
    struct node *temp=head;
    head=head->next;
    free(temp);
}

void delete_end(){
    struct node *temp=head,*prev;

    while(temp->next!=NULL){
        prev=temp;
        temp=temp->next;
    }

    prev->next=NULL;
    free(temp);
}

void delete_pos(){
    int pos,i=1;
    struct node *temp=head,*nextnode;

    printf("Enter position: ");
    scanf("%d",&pos);

    while(i<pos-1){
        temp=temp->next;
        i++;
    }

    nextnode=temp->next;
    temp->next=nextnode->next;

    free(nextnode);
}

int main(){
    delete_begin();
    delete_end();
    delete_pos();
}