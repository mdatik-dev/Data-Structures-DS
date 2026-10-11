#include<stdio.h>
int main()
{
    int array[50];
    int i,j,temp,ptr,num;

    printf("Enter the total number of input = ");
    scanf("%d",&num);

    printf("\nEnter the number = ");
    for(i=0;i<num;i++)
    {
        scanf("%d",&array[i]);
    }

    for(i=1;i<num;i++)
    {
        temp=array[i];
        ptr=i-1;
        while(temp<array[ptr])
        {
            array[ptr+1]=array[ptr];
            ptr--;
        }
        array[ptr+1]=temp;
    }

    printf("\nInsertion Sort is = ");
    for(i=0;i<num;i++)
    {
        printf("%d ",array[i]);
    }
    printf("\n");
    return 0;
}
