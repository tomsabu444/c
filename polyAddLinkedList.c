#include <stdio.h>
#include<stdlib.h>
// Node structure containing power and coefficient of
// variable
struct Node {
int coeff;
int pow;
struct Node* next;};
// Function to create new node
void create_node(int x, int y, struct Node** temp)
{ struct Node *r, *z;
z = *temp;
if (z == NULL) {
r = (struct Node*)malloc(sizeof(struct Node));
r->coeff = x;
r->pow = y;
*temp = r;
r->next = (struct Node*)malloc(sizeof(struct Node));
r = r->next;
r->next = NULL;}
else {
r->coeff = x;
r->pow = y;
r->next = (struct Node*)malloc(sizeof(struct Node));
r = r->next;
r->next = NULL;}}
// Function Adding two polynomial numbers
void polyadd(struct Node* poly1, struct Node* poly2,
struct Node* poly){
while (poly1->next && poly2->next) {
// If power of 1st polynomial is greater then 2nd,
// then store 1st as it is and move its pointer
if (poly1->pow > poly2->pow) {
poly->pow = poly1->pow;
poly->coeff = poly1->coeff;
poly1 = poly1->next;}
// If power of 2nd polynomial is greater then 1st,
// then store 2nd as it is and move its pointer
else if (poly1->pow < poly2->pow) {
poly->pow = poly2->pow;
poly->coeff = poly2->coeff;
poly2 = poly2->next;}
// If power of both polynomial numbers is same then
// add their coefficients
else { poly->pow = poly1->pow;
poly->coeff = poly1->coeff + poly2->coeff;
poly1 = poly1->next;
poly2 = poly2->next;}
// Dynamically create new node
poly->next
= (struct Node*)malloc(sizeof(struct Node));
poly = poly->next;
poly->next = NULL;}
while (poly1->next || poly2->next) {
if (poly1->next) {
poly->pow = poly1->pow;
poly->coeff = poly1->coeff;
poly1 = poly1->next;}
if (poly2->next) {
poly->pow = poly2->pow;
poly->coeff = poly2->coeff;
poly2 = poly2->next;}
poly->next
= (struct Node*)malloc(sizeof(struct Node));
poly = poly->next;
poly->next = NULL;}}
// Display Linked list
void show(struct Node* node){
while (node->next != NULL) {
printf("%dx^%d", node->coeff, node->pow);
node = node->next;
if (node->coeff >= 0) {
if (node->next != NULL)
printf("+");}}}
void main()
{
struct Node *poly1 = NULL, *poly2 = NULL, *poly = NULL;
int deg1,coe1,n1,i,deg2,coe2,n2;
printf("Enter the polynomial in the descending order of degree:\n");
printf("Enter the no. of terms for the 1st polynomial:");
scanf("%d",&n1);
for(i=0;i<n1;i++){
printf("Enter the degree :");
scanf("%d",&deg1);
printf("Enter the coefficient:");
scanf("%d",&coe1);
create_node(coe1, deg1, &poly1);}
printf("Enter the no. of terms for the 2nd polynomial:");
scanf("%d",&n2);
for(i=0;i<n2;i++){
printf("Enter the degree :");
scanf("%d",&deg2);
printf("Enter the coefficient:");
scanf("%d",&coe2);
create_node(coe2, deg2, &poly2);}
printf("1st Polynomial: ");
show(poly1);
printf("\n2nd Polynomial: ");
show(poly2);
poly = (struct Node*)malloc(sizeof(struct Node));
// Function add two polynomial numbers
polyadd(poly1, poly2, poly);
// Display resultant List
printf("\nAdded polynomial: ");
show(poly);}
