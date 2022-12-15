#include<stdio.h>
#include<ctype.h>
#include<math.h>
int top=-1;
float stack[20];
float number[20];
void push(float item){
if(top>=19)
printf("Stack is full");
else{
top++;
stack[top]=item;
}
}
float pop(){
float p;
if(top==-1){
printf("Stack is empty");
}
else {
p=stack[top];
top--;
}
return p;
}
float s_eval(char p_fix[20],float num[20]){
float opA,opB;
float res;
int i=0;
while(p_fix[i]!='\0'){
if(isalpha(p_fix[i])){
push(num[i]);
}
else{
opA=pop();
opB=pop();
switch(p_fix[i]){
case '+': push(opA+opB);break;
case '-': push(opA-opB);break;
case '/': push(opA/opB);break;
case '*': push(opA*opB);break;
case '^': push(pow(opA,opB));break;
}
}
i++;
}
res=pop();
return res;
}
void main(){
char exp[20];
int i=0;
float res;
printf("Enter the postfix expression:");
gets(exp);
while(exp[i]!='\0'){
if(isalpha(exp[i])){
printf("Enter the number for %c :",exp[i]);
scanf("%f",&number[i]);
}
i++;
}
res=s_eval(exp,number);
printf("Result:%.2f\n",res);
}
