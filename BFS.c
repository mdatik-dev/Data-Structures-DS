#include<stdio.h>
int a[20][20];
int q[20]={0};
int visited[20]={0};
int num,i,j;
int front=0;
int rear=-1;
void BFS(int v)
{
    for(i=0;i<num;i++)
        if(a[v][i] && visited[i]==0)
            q[++rear]=i;
        if(front<=rear)
        {
            visited[q[front]] =1;
            BFS(q[front++]);
        }
}
int main()
{
    int v;
    printf("Enter the Number of vertices : ");
    scanf("%d",&num);
    printf("\nEnter Graph data in matrix form : \n");
    for(i=0;i<num;i++)
    {
        printf("\t\t");
        for(j=0;j<num;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("\nEnter the starting vertex : ");
    scanf("%d",&v);
    BFS(v);
    printf("\nThe node which are reachable are : \n");
    for(i=0;i<num;i++)
    {
        if(visited[i])
            printf("%d\t",i);
        else{
            printf("\nBreadth First Search (BFS) in not possible, NOt all nodes are reachable");
            break;
        }
    }
    printf("\n");
}
