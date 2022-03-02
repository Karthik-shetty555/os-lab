#include<stdio.h>
#include<ctype.h>
#include<stdlib.h>
char stack[30],postfix[30];
int top=-1;
void push(char);
char pop();
int Eval_postfix();
int Eval_postfix()
{
int i=0,op1,op2;
char symbol;
while((symbol=postfix[i+1])!='/0')
{
if(isalnum(symbol))
push(symbol-'0');
else
{
op2=pop();
op1=pop();
switch(symbol)
{
case '+':push(op1+op2);
break;
case '-':push(op1-op2);
break;
case '*':push(op1*op2);
break;
case '/':if(op2!=0)
         {
         push(op1/op2);
         break;
         }else
         {
         printf("out loop");
         return 0;
}
case '^':push(op1^op2);
break;
}
}}
return(pop());
}
void push(char symbol)
{
stack[++top]=symbol;
}
char pop()
{
char symbol;
symbol=stack[top--];
return symbol;
}
void main()
{
int val;
printf("Enter Postfix expression");
scanf("%s",postfix);
val=Eval_postfix();
printf("\nEvaluated expression:%d\n",val);
}
