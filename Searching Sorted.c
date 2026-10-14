#include<stdio.h>
#include<stdlib.h>

struct node {
    int data;
    struct node *next;
};

int main()
{
    int num, item, value;
    struct node *start = NULL, *newnode, *temp, *prev;

    printf("Enter the total number of nodes: ");
    scanf("%d", &num);

    for(int i = 0; i < num; i++)
    {
        newnode = (struct node*)malloc(sizeof(struct node));
        printf("\nEnter the %d Node Data = ", i + 1);
        scanf("%d", &value);
        newnode->data = value;
        newnode->next = NULL;

        // Insertion in sorted order
        if(start == NULL || value < start->data)
        {
            newnode->next = start;
            start = newnode;
        }
        else
        {
            temp = start;
            while(temp->next != NULL && temp->next->data < value)
            {
                temp = temp->next;
            }
            newnode->next = temp->next;
            temp->next = newnode;
        }
    }

    temp = start;
    printf("\nSorted Link List Element = ");
    while(temp != NULL)
    {
        printf("%d  ", temp->data);
        temp = temp->next;
    }

    printf("\n");
    printf("\nEnter search item = ");
    scanf("%d", &item);
    temp = start;

    while(temp != NULL)
    {
        if(item == temp->data)
        {
            printf("\nSearching item Found\n");
            break;
        }
        temp = temp->next;
    }

    if(temp == NULL)
        printf("\nSearching item NOT FOUND\n");

    printf("\n");
    return 0;
}
