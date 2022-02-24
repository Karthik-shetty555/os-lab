#include<stdio.h>
#include<string.h>
void main()
{
char a[10],b[10];
printf("enter charecter");
scanf("%s",&a);
printf("enter charecter2");
scanf("%s",&b);
strcat(a,b);
printf("concate of two char%s",a);
}
