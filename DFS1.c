#include<stdio.h>
int a[10][10],n,w,count=0,visited[20];
void dfs(int v)
{
count++;
visited[v]=count;
for(w=0;w<n;w++)
{
if(visited[w]==0 && a[v][w]==1)
dfs(w);
}
}
void main()
{
int i,j;
printf("Enter number of vertices");
scanf("%d",&n);
printf("Enter matrix elements:");
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
{
scanf("%d",&a[i][j]);
}
}
printf("The matrix is:\n");
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
{
printf("\t%d\t",a[i][j]);
}
printf("\n");
}
for(i=0;i<n;i++)
visited[i]=0;
dfs(0);
if(count==n)
{
printf("Graph is connected");
}
else
{
printf("Graph is not connected");
}
}

