#include <stdio.h>

struct students
{
    int id,year;
    char name[100];
    float cgpa;
};
 int main()
{
    int i;
    struct students a[100];
   for(i=1;i<=4;i++)

   {
   printf("\nInformation of Student %d:---",i);
   printf("\nEnter the name of student= ");
   scanf("%s%s",&a[i].name);
   printf("\nEnter the ID of student= ");
   scanf("%d",&a[i].id);
   printf("\nEnter the Year of student= ");
   scanf("%d",&a[i].year);
   printf("\nEnter the CGPA of student= ");
   scanf("%f",&a[i].cgpa);
   }

   return 0;
}
