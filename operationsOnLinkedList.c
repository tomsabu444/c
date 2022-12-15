#include<stdio.h>

#include<stdlib.h>

struct node { // creating node structure

int data;

struct node *link;

}*head=NULL,*temp=NULL,*current;

int count=0;

void insertbegin(){ //Function to insert in the beginning

temp=(struct node*)malloc(sizeof(struct node));

printf("\nEnter the data :");

scanf("%d",&temp->data);

temp->link=head;

head=temp;

count++;}

void insertend(){ //Function to insert in the end

temp=(struct node*)malloc(sizeof(struct node));

printf("\nEnter the data :");

scanf("%d",&temp->data);

temp->link=NULL;

current=head;

while(current->link!=NULL){ //Accessing last node

current=current->link; }

current->link=temp;

count++; }

void insertpos(){ //Function to insert at a position

int i,pos;

// Allocating memory to temp node

temp=(struct node*)malloc(sizeof(struct node));

printf("\nEnter the data :");

scanf("%d",&temp->data);

printf("\nEnter the position :");

scanf("%d",&pos);

if(pos>count) printf("Invalid position");

else{

current=head;

for(i=1;i<pos-1;i++){ //Accessing node just before postion

current=current->link; }

temp->link=current->link;

current->link=temp;

count++;}}

void delbegin(){ // Delete from the beginning

if(head==NULL) printf("\nEmpty list\n");

else{

temp=head;

head=head->link;

// Reassigning head to next node

printf("\nDeleted data: %d",temp->data);

free(temp);

count--;}}

void delend(){ //Delete from the end

if(head==NULL) printf("\nEmpty list\n");

else{

temp=head;

//Accessing the node just before last node

while(temp->link!=NULL){

current=temp;

temp=temp->link; }

current->link=NULL;

printf("\nDeleted data: %d",temp->data);

free(temp);

count--; }}

void delpos(){ //Delete from a specific position

int pos,i;

if(head==NULL)

printf("\nEmpty list\n");

else{

printf("\nEnter the position to be deleted:");

scanf("%d",&pos);

if(pos>count)

printf("Invalid position");

else{

current=head;

//Accessing node just before postion

for(i=1;i<pos-1;i++){

current=current->link; }

temp=current->link;

current->link=temp->link;

printf("\nDeleted data :%d",temp->data);

free(temp);

count--; } }}

void display(){

temp=head;

printf("\n list\n");

while(temp!=NULL){

printf("\n%d ",temp->data);

temp=temp->link; }}

void main(){

int ch;

while(1){

printf("\n___MENU___\n");

printf("1.Insert at beginning\n2.Insert at end\n3.Insert at position\n4.Delete at

beginning\n5.Delete at end\n6.Delete at position\n7.Display\n8.Exit\n");

scanf("%d",&ch);

switch(ch){

case 1: insertbegin();

display();

break;

case 2: insertend();

display();

break;

case 3: insertpos();

display();

break;

case 4: delbegin();

display();

break;

case 5: delend();

display();

break;

case 6: delpos();

display();

break;

case 7: display();

break;

case 8: exit(0); } }}
