#include<stdio.h>

int main()
{
    int a[200];
    int num,swap=0;

    printf("Enter the total number of input  = ");
    scanf("%d",&num);

    printf("\nEnter the number = ");

    for(int i=0;i<num;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<num;i++)
    {
        for(int j=i+1; j<num; j++)
        {
            if(a[i]>a[j])
            {
                swap=a[i];
                a[i]=a[j];
                a[j]=swap;
            }
        }
    }

    printf("\nSorted in Ascending Order = ");
    for(int i = 0;i<num;i++)
    {
        printf("%d  ",a[i]);
    }
    printf("\n");

    return 0;
}
