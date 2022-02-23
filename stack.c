#include<stdio.h>
#define MAXSIZE 100
int stack[MAXSIZE],top=-1
void push(int ele)
{
  if(top == MAXSIZE-1)
  {
printf("Stack is full");
    exit(0);
  }
  stack[++top]=ele;
}
int pop()
{
if(top==-1)
{
printf("Stack is empty");
  exit (0);
}
ele=stack[top--];
  return ele;
}
void display()
{
  int i;
  for(i=0;i<=top;i++)
    printf("%d",stack[i]);
  if(top==-1)
    printf("Stack is empty");
}
void main()
{
  int ch;
  printf("\n1.Push\n2.Pop\n3.Display");
  printf("Enter your choice");
  scanf("%d",&ch);
  while(True)
  {
    switch(ch)
    {
      case 1: printf(Enter the element to be inserted");
                     scanf("%d",&ele);
                     push(ele);
                     break;
                     case 2:pop();
                     break;
                     case 3:display();
                     break;
                     default:printf("Wrong Choice");
                     exit(0);
                     }
                     }
                    printf("Do you want to continue Y/N");
                     scanf("%d",&yn);
                     if(yn=='Y')
                     {
                       
