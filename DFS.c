#include<stdio.h>
int G[20][20];
int visited[20]={0};
int num;
void DFS(int i)
{
    int j;
    printf("\t%d",i);
    visited[i]=1;
    for(j=0;j<num;j++)
    {
        if(!visited[j]&&G[i][j]==1)
            DFS(j);
    }
}

int main()
{
    int i,j;
    printf("Enter number of Vertices : ");
    scanf("%d",&num);
    printf("\nEnter Adjecency Matrix of the Graph :\n\n");
    for(i=0;i<num;i++)
    {
        printf("\t\t");
        for(j=0;j<num;j++)
        {
            scanf("%d",&G[i][j]);
        }
    }
    for(i=0;i<num;i++)
    {
        visited[i]=0;
    }
    printf("Traversal start from any vertex\n");
    DFS(0);
}
