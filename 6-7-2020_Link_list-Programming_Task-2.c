//Deletion of Node-2

#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node* next;

};

int main(){

    struct node* head = (struct node*)malloc(sizeof(struct node));
    head -> data = 100;
    head -> next = NULL;
    

    struct node* second_link = (struct node*)malloc(sizeof(struct node));
    second_link -> data=110;
    second_link -> next=NULL;

    head -> next = second_link;

    struct node* third_link = (struct node*)malloc (sizeof(struct node));
    third_link -> data = 120;
    third_link -> next = NULL;

    second_link -> next = third_link;

    // Deletion of node

    struct node* temp = head;
    while(temp -> next != NULL)
    {
    printf("%d->",temp -> data);
    temp = temp -> next;
    }

printf("%d->NULL",temp -> data);

struct node *prev = head;
struct node *current = second_link;

prev -> next = current -> next;
current -> next = NULL;

free(current); // freeing from the node
temp = head;

while(temp -> next!= NULL)
{
    printf("%d -> ",temp->data);
    temp=temp->next;

}
printf("%d-> NULL ",temp->data);

}
