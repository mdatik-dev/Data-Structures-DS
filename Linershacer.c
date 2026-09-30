#include<stdio.h>

int main()
{
    int a[100];
    int num,num1;

    printf("Enter the total number of input = ");
    scanf("%d",&num);
    printf("\nEnter the number = ");
    for(int i=0;  i<num;  i++)
    {
        scanf("%d", &a[i]);
    }
    printf("\nEnter search item = ");
    scanf("%d", &num1);
    for(int i=0; i<num; i++)
    {
        if(num1 == a[i])
        {
            printf("Found %d in position %d\n", num1, i+1);
            break;
        }
    }

    return 0;
}
