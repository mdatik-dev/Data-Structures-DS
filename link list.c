#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};

int main()
{
    int n,num,item,value;
    struct node *temp,*start,*nextnode;
    printf("Enter the total number of nodes: ");
    scanf("%d",&num);
    start =(struct node*)malloc(sizeof(struct node));
    printf("\nEnter the First Node Data = ");
    scanf("%d",&n);
    start->data = n;
    start->next=NULL;
    temp =start;

    for(int i=1;i<=num-1;i++)
    {
        nextnode=(struct node*)malloc(sizeof(struct node));
        printf("\nEnter the %d Node Data = ",i+1);
        scanf("%d",&value);
        nextnode->data = value;
        nextnode->next=NULL;
        temp->next = nextnode;
        temp=temp->next;
    }
     temp = start;
     printf("\nLink List Element = ");

     while(temp!=NULL)
     {
         printf("%d  ",temp->data);
         temp=temp->next;
     }
     printf("\n");
     printf("\nEnter search item = ");
     scanf("%d",&item);
     temp = start;

     while(temp!=NULL)
     {
         if(item==temp->data)
         {
             printf("\nSearching item Found\n");
             break;
         }
         temp=temp->next;
     }
     if(temp==NULL)
        printf("\nSearching item NOT FOUND\n");
     printf("\n");
     return 0;
}
