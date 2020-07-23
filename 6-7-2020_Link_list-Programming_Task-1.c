// Insertion between first node and second node

#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data ;
    struct node *next; 
};

int main ()
{
    struct node *head = (struct node *)malloc(sizeof(struct node));
    head -> data = 100;
    head-> next = NULL;

    struct node *second_link = (struct node *)malloc(sizeof(struct node));
    second_link -> data = 200;
    second_link -> next = NULL;
    head -> next = second_link;

    struct node *fourth_link = (struct node *)malloc(sizeof(struct node));
    fourth_link -> data = 400;
    fourth_link -> next = NULL;
    second_link -> next = fourth_link;
    

    struct node *temp = head ;
    while(temp->next !=NULL)
    {
        printf("%d ->",temp ->data);
        temp = temp->next ;
    }
    printf("%d ->NULL",temp ->data);
    
//insertion of a node called new node
    struct node *new_node = (struct node *)malloc(sizeof(struct node));
    new_node -> data = 300;
    head ->next = new_node;
    new_node ->next = second_link;
    second_link -> next = NULL;

    
    fourth_link -> data = 400;
    fourth_link -> next = NULL;
    second_link -> next = fourth_link;
    

     struct node *temp1 = head ;
    while(temp1->next !=NULL)
    {
        printf("%d ->",temp1 ->data);
        temp1 = temp1->next ;
    }
    printf("%d ->NULL",temp1 ->data);
}