#include<stdio.h>
#include<string.h>
int main()
{
FILE *fp;
char data[10]=("hello");
fp=fopen("prg1.c","w");
if(fp==NULL)
{
printf("not opend\n");
}
else
printf("opend\n");
fclose(fp);
printf("closed\n");
}
