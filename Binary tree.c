#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *left;
    struct node *right;

}*root;

void insert(int data)
{
    struct node *newnode = (struct node*)malloc(sizeof(struct node));
    struct node *p;
    struct node *q;

    newnode->data = data;
    newnode->left = NULL;
    newnode->right = NULL;

    if(root == NULL)
    {
        root = newnode;
    }
    else
    {
        {
            p = root;
            q = NULL;
        }
        while(1)
        {
            q = p;

            if(data < q->data)
            {
                p = p ->left;

                if(p == NULL)
                {
                    q ->left= newnode;
                    break;
                }

            }
            else
            {
                p = p->right;

                if(p == NULL)
                {
                    q->right = newnode;
                    break;
                }
            }
        }
    }
}

void search(int data)
{
    struct node *p;
    p = root;

    while(p->data!=data)
    {
        if(p != NULL)
        {
            if(p->data > data)
            {
                p = p->left;
            }
            else
            {
                p = p->right;
            }
            if(p == NULL)
            {
                printf("NOT Found\n");
            }
        }
    }
    printf("Found\n");
}

int main()
{
    int num,num1,i,sr;

    printf("Enter the total number of nodes : ");
    scanf("%d",&num1);

    for(i=1;i<=num1;i++)
    {
        scanf("%d",&num);
        insert(num);
    }

    while(1)
    {
        printf("Search : ");
        scanf("%d",&sr);
        search(sr);
    }


    return 0;
}
