#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
void push(char);
char pop();
char stack[100];
int max=100;
int top=-1;
char postfix[100];
void push(char item)
{if(top==max-1)
{ printf("Stack is full");
   }
   else
   { top=top+1;
      stack[top]=item;
   }
   }
char pop()
{char p;
if(top==-1)
{printf("Stack is empty");
}
else
{   p=stack[top];
top=top-1;
return p;
}
}
int op(char sym)
{if(sym=='^'||sym=='*'||sym=='/'||sym=='+'||sym=='-')
{
return 1;
}
else
{return 0;
}
}
int pre(char sym)
{if(sym=='^')
{
return(3);
}
else if(sym=='*'||sym=='/')
{return(2);
}
else if(sym=='+'||sym=='-')
{return(1);
}
else
{return(0);
}
}
void infixtopostfix(char infix[],char postfix[])
{int i,j;
char item;
char x;
push('(');
strcat(infix,")");
i=0;
j=0;
item=infix[i];;
while(item!='\0')
{if(item=='(')
{push(item);
}
else if(isdigit(item)||isalpha(item))
{postfix[j]=item;
j++;
}
else if(op(item)==1)
{x=pop();
while(op(x)==1&&pre(x)>=pre(item))
{postfix[j]=x;
j++;
x=pop();
}
push(x);
push(item);
}
else if(item==')')
{
x=pop();
while(x!='(')
{
postfix[j]=x;
j++;
x=pop();
}
}
else
{printf("\n INVALID\n");
getchar();
exit(1);
}
i++;
item=infix[i];
}
postfix[j]='\0';
}
void main()
{char infix[100];
printf("Enter the infix expression");
scanf("%s",infix);
puts(infix);
infixtopostfix(infix,postfix);
puts(postfix);
}
