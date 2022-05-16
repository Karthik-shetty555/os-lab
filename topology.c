#include<stdio.h>
int a[10][10],n,w,count=0,visited[20],top[10],k=0;
void dfs(int v)
{
int w;
count++;
visited[v]=count;
for(w=0;w<n;w++)
{
if(visited[w]==0 && a[v][w]==1)
dfs(w);
}
top[k++]=v;
printf("%d\t",v);
}
void main()
{
int i,j;
printf("Enter number of vertices");
scanf("%d",&n);
printf("Enter adjacency matrix elements:");
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
printf("------dfs-------\n");
for(i=0;i<n;i++)
visited[i]=0;
for(i=0;i<n;i++)
if(visited[i]==0)
dfs(i);
printf("\nTopological sorting\n");
for(i=n-1;i>=0;i--)
{
printf("%d\t",top[i]);
}
}
