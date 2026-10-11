#include<stdio.h>

int main()
{
    int array[50],i,j,num,min,swap;

    printf("Enter the total number of input = ");
    scanf("%d",&num);

    printf("\nEnter the number = ");
    for(i=0;i<num;i++)
    {
        scanf("%d",&array[i]);
    }

    for(i=0;i<num;i++)
    {
        min=i;
        for(j=i+1;j<num;j++)
        {
            if(array[j]<array[min])
            {
                min=j;
            }
        }
        if(min!=i)
        {
            swap=array[i];
            array[i]=array[min];
            array[min]=swap;
        }
    }

    printf("Selection Sort is = ");
    for(i=0;i<num;i++)
    {
        printf("%d ",array[i]);
    }
    printf("\n");

    return 0;
}
