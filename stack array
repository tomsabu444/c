#include<stdio.h>
#include<stdlib.h>
void push();
void pop();
void display();
int a[20],max;
int top=-1;
void main()
{
 int c;
 printf("Enter the Maximum Size of the Stack\n");
 scanf("%d",&max);
 while(1)
 {
 printf ("Select Your Choice\n");
 printf("1.Push an Element\n");
 printf("2.Pop an element\n");
 printf("3.Display Elements\n");
 printf("4.Exit Program\n\n");
 scanf("%d",&c);
 switch(c)
 {
 case 1: push();
 break;
 case 2: pop();
 break;
 case 3: display();
 break;
 case 4: exit(0);
 default:printf("You have Entered a Wrong Choice\n");
 }
 }
}
void push()
{
 int e;
 if(top==max)
 printf("Stack is Full\n");
 else
 {
 printf("Enter the element\n");
 scanf("%d",&e);
 top++;
 a[top]=e;
 }
}
void pop()
{
 if(top==-1)
 printf("The Stack is Empty\n");
 else
 {
 printf("%d is popped from the stack\n",a[top]);
 top--;
 }
}
void display()
{
 int i;
 if(top==-1)
 printf("There are no elements to print\n");
 else
 {
 printf("Elements in the Stack are:\n");
 for(i=top;i>=0;i--)
 printf("%d\n",a[i]);
 }
}
