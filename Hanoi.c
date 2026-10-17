#include<stdio.h>

void tower_of_hanoi(int n,char BEG,char AUX,char END)
{
    if(n>0)
    {
        tower_of_hanoi(n-1,BEG,END,AUX);
        printf("\n%c to %c",BEG,END);
        tower_of_hanoi(n-1,AUX,BEG,END);
    }
}
int main()
{
    int num;
    printf("Enter the number of disks = ");
    scanf("%d",&num);
    tower_of_hanoi(num,'A','B','C');
    return 0;
}
