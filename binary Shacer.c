#include<stdio.h>

int main()
{
    int a[100],num;
    int beg=0,end,mid,s_num;

    printf("Enter the total number of input = ");
    scanf("%d",&num);

    printf("\nEnter the number = ");
    for(int i=0;i<num;i++)
    {
        scanf("%d",&a[i]);
    }

    printf("\nEnter search item = ");
    scanf("%d",&s_num);


    end = num-1;
    mid = (int)(beg + end)/2;

    while(beg <= end)
    {
        if(a[mid] == s_num)
        {
            printf("\n%d Found\n",s_num);
            break;
        }
        else if(a[mid]<s_num)
        {
            beg = mid + 1;
            mid = (int)(beg + end)/2;

        }
        else if(a[mid]>s_num)
        {
            end = mid - 1;
            mid = (int)(beg + end)/2;
        }
    }
    if(beg > end)
        printf("\n%d Not Found\n",s_num);

    return 0;


}
