#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};

int main()
{
    int n,num,item,value,insdata,pos;
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

     printf("\nEnter the Insert node position = ");
     scanf("%d",&n);

     printf("\nInsert before %d Node\n",n);
     temp =start;
     newnode =(struct node*)malloc(sizeof(struct node));
     printf("\nInsert the new node value = ");
     scanf("%d",&insdata);
     newnode->data =insdata;
     newnode->next=NULL;

     for(int i=1; i<n-1;i++)
     {
         temp = temp->next;
     }

     newnode->next=temp->next;
     temp->next=newnode;
     temp=start;

     printf("\nAll other components including new insert elements = ");
     while(temp != NULL)
     {
         printf("%d  ",temp->data);
         temp=temp->next;
     }
     printf("\n");

     int snum,post;
     printf("\nEnter the delete Position number : ");
     scanf("%d",&post);

     temp = start;
     for(int i=1;i<post-1;i++)
     {
         if(temp->next!=NULL)
            temp = temp->next;
     }

     temp->next = temp->next->next;
     temp=start;
     printf("\nExcept for the delete element, the rest of the elements = ");
     while(temp != NULL)
     {
         printf("%d  ",temp->data);
         temp=temp->next;
     }
     printf("\n");
     return 0;
}


