#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct Node
{
  int roll;
  char name[30];
  struct Node* down;
};
void printll(struct Node *n)
{  while(n!=NULL)
   {
     printf("%d  %s \n",n->roll,n->name);
     n=n->down;
   }
}
int push_queue(struct Node **h,int d,char* name)
{

  if(d%2!=0)
    return -1;
  struct Node *temp,*r,*neww;
  r=*h;
  if(r==NULL)
  {
     temp=(struct Node*)malloc(sizeof(struct Node));
     temp->roll=d;
     strcpy(temp->name,name);
     temp->down=NULL;
     *h=temp;
  }
  else{

     temp=(struct Node*)malloc(sizeof(struct Node));

  while(r->down!=NULL)
  {
     neww=r;
     r=r->down;
  }
    temp->roll=d;
     strcpy(temp->name,name);
    r->down=temp;
    temp->down=NULL;

  }
return 0;

}
void pop_queue(struct Node **h)
{
   struct Node *temp,*r;
   r=*h;
   temp=r->down;
   *h=temp;

}
int main()
{ struct Node *sp,*q;

  int n,c;
  int roll;
  char na[30];
  q=(struct Node*)malloc(sizeof(struct Node));
  q=NULL;
  int i=0;
  printf("Enter the number of Students ");
  scanf("%d",&n);
  while(i!=n)
  { printf("Enter Roll Number  ");
    scanf("%d",&roll);
    printf("Enter Name  ");
    fflush(stdin);
    scanf("%s",&na);
  if(push_queue(&q,roll,na)==-1)
      {
          printf("Odd roll numbers are invalid \n");
      }
   i++;
  }
  printll(q);
}
