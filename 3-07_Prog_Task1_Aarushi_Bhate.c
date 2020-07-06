#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int i,roll;
struct Queue
{
    int roll;
    int st[100],front,rear;
    char name[100];
};
struct students
{
    int roll;
    char name[100];
};

void initialize(struct Queue* q){
    q->front=0;
    q->rear=0;

}
void enqueue(struct Queue* q, struct students* s){
    int i,n;
    
    q ->st[q -> rear] = roll;
    q -> rear = (q -> rear) + 1;
    for(i=1;i<=n;i++){
    printf("%d",q -> roll );
    }
}

int dequeue(struct Queue* q){
    if ((q -> roll)%2==0)
    {
    printf("%d",q -> roll);
    }
    else
    {
        return 0;
    }
    
}

int isEmpty(struct Queue* q){
    return q->front==q->rear;
}

void print(struct Queue* q){
    if(isEmpty(q)){
        //cout<<"Queue is Empty..!\n";
        printf("Queue is empty\n");
    }

    //cout<<"Front-->";
    printf("front ");
    for(int i=q->front;i<q->rear;i++){
        //cout<<q->arr[i]<<" ";
        printf("%d ",q->st[i]);
    }
    //cout<<"<--Rear";
    printf("Rear\n");
    //cout<<"\n";
}

int main(){
    int st[100],i,n;

    {
    struct Queue* q1 = (struct Queue*)malloc(sizeof(struct Queue));
    struct students* s1 = (struct students*)malloc(sizeof(struct students));
    initialize(q1);
    printf("Enter the strength of students: ");
    scanf("%d",&st[100]);
    {
    enqueue(q1,s1);
    }
    dequeue(q1);
    }
    return 0;

}
