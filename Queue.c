#include<stdio.h>
#define size 5

int items[size];
int front = -1;
int rear = -1;

int isfull()
{
    if((front == rear+1)||(front == 0 && rear == size-1))
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int isempty()
{
    if(front == -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void push_data_queue(int data)
{
    if(isfull())
    {
        printf("Queue is Full!\n");
    }
    else
    {
        if(front == -1)
        {
            front=0;
        }
        rear = (rear+1)%size;
        items[rear] = data;
        printf("Insert Data = %d\n",data);
    }

}
int pop_data_queue()
{
    int data;
    if(isempty())
    {
        printf("\nQueue is Empty!\n");
        return (-1);
    }
    else
    {
        data = items[front];
        if(front == rear)
        {
            front = -1;
            rear = -1;
        }
        else
        {
            front = (front + 1)%size;
        }
        printf("\nDeleted Data : %d\n",data);
        return data;
    }
}

void display()
{
    int i;
    if(isempty())
    {
        printf("\nEmpty Queue\n");
    }
    else
    {
        printf("\nFront  = %d\n",front);
        printf("\nItems = ");
        for(i = front;i!=rear; i=(i+1)%size)
        {
            printf("%d ",items[i]);
        }
        printf("%d ",items[i]);
        printf("\nRear = %d\n",rear);
    }
}

int main()
{
    int num;

    while(1)
    {
        printf("Enter the numbers 1 for Push Data, 2 for Pop Data, 3 for Display\n\t");
        scanf("%d",&num);
        if(num==1)
        {
            int data;
            printf("Enter Push Data : ");
            scanf("%d",&data);
            push_data_queue(data);
        }
        else if(num==2)
        {
            pop_data_queue();
        }
        else if(num==3)
        {
            display();
        }
    }
    return 0;
}
