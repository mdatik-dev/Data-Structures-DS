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
    struct node *temp,*start,*nextnode,*newnode;
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

     while(temp != NULL)
     {
         printf("%d  ",temp->data);
         temp=temp->next;
     }
     printf("\n");

     start = start->next; //
     temp = start;

     printf("\nExcept for the delete element, the rest of the elements = ");
     while(temp != NULL)
     {
         printf("%d  ",temp->data);
         temp=temp->next;
     }
     printf("\n");

    printf("\nNow insert in the head new element = 10\n");
    newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data = 10;
    newnode->next = start;//
    start = newnode;

    printf("\nAll other components including new insert elements = ");
     while(start != NULL)
     {
         printf("%d  ",start->data);
         start=start->next;
     }
     printf("\n");

     return 0;
}

