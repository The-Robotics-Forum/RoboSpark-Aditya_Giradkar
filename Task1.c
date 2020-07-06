#include<stdio.h>
#include<stdlib.h>

typedef struct Queue
{
    int arr[10];
    int front,rear;
}Queue;

void initialize(Queue* q){
    q->front=0;
    q->rear=0;

}


void enqueue(Queue* q,int x){
    q->arr[q->rear++]=x;

}

int dequeue(Queue* q){
    return q->arr[q->front++];
}

int isEmpty(Queue* q){
    return q->front==q->rear;
}

void print(Queue* q){
    if(isEmpty(q)){
        //cout<<"Queue is Empty..!\n";
        printf("Queue is empty\n");
        return;
    }

    //cout<<"Front-->";
    printf("front ");
    for(int i=q->front;i<q->rear;i++){
        //cout<<q->arr[i]<<" ";
        printf("%d ",q->arr[i]);
    }
    //cout<<"<--Rear";
    printf("Rear\n");
    //cout<<"\n";
}


int main(){
    Queue* q1=(Queue*)malloc(sizeof(Queue));
    initialize(q1);
    enqueue(q1,10);
    enqueue(q1,20);
    enqueue(q1,30);
    enqueue(q1,40);
    enqueue(q1,50);

    print(q1);
    dequeue(q1);
    print(q1);
    dequeue(q1);
    print(q1);
    enqueue(q1,60);
    print(q1);
    printf("%d",dequeue(q1));

}