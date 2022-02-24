#include<stdio.h>
#include<string.h>
#include<sys/types.h>
int main()
{
int i=0,count=0;
char databits[150];
printf("enter bitchar");
scanf("%s",databits);
printf("after stuffing");
for(i=0;i<strlen(databits);i++)
{
if(databits[i]=='1')
count++;
else
count=0;
printf("%c",databits[i]);
if(count==5)
{
printf("0");
count=0;
}
}
return 0;
}
