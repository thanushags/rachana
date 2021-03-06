#include<stdio.h>
#include<ctype.h>
#define MAXSIZE 50
char stack[MAXSIZE];
int top=-1;
char infix[50],postfix[50];
void push(char item)
{
  stack[++top]=item;
}
char pop()
{
  return(stack[top--]);
}
int precendence(char symbol)
{
  if(symbol=='^')
  {
    return(3);
  }
  else if(symbol=='*' || symbol=='/')
  {
    return(2);
  }
  else if(symbol=='+' || symbol=='-')
  {
   return(1);
  }
  else
  {
     return(0);
  }
}
void infix_postfix()
{
  char ch,elem;
  int i=0,k=0;
  while((ch=infix[i++])!='\0')
  {
    if(ch=='(')push(ch);
    else 
     if(isalnum(ch))postfix[k++]=ch;
   else
   if(ch==')')
   {
     while(stack[top]!='(')
     postfix[k++]=pop();
     elem=pop();
   }
   else
   {
     while(precendence(stack[top])>=precendence(ch))
     postfix[k++]=pop();
     push(ch);
   }
 }
 while(stack[top]!='$')
 postfix[k++]=pop();
 postfix[k]='\0';
}
void main()
{
printf("enter infix expression:");
scanf("%s",infix);
push('$');
infix_postfix();
printf("\n postfix expression=%s\n",postfix);
}
    
    
       
