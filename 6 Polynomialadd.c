#include<stdio.h>
struct poly{
    int coeff;
    int exp;

};

void main(){
    int n1,n2,i,j=0,k=0;
    struct poly x1[10],x2[10],x3[20];
    
    printf("Enter the size of the first polynomial:");
    scanf("%d",&n1);
    for(i=0;i<n1;i++){
        printf("coefficient of term %d",i+1);
        scanf("%d",&x1[i].coeff);
        printf("exponent of term %d",i+1);
        scanf("%d",&x1[i].exp);

    }
    for(i=0;i<n1;i++){
        printf("%dX%d+",x1[i].coeff,x1[i].exp);

    }
       printf("Enter the size of the second polynomial:");
    scanf("%d",&n2);
    for(i=0;i<n2;i++){
        printf("coefficient of term %d",i+1);
        scanf("%d",&x2[i].coeff);
        printf("exponent of term %d",i+1);
        scanf("%d",&x2[i].exp);

    }
     for(i=0;i<n2;i++){
        if(i==n2-1)
        printf("%dX%d",x2[i].coeff,x2[i].exp);
        else
        printf("%dX%d+",x2[i].coeff,x2[i].exp);
        
    }
    printf("\n");
   i=0;
    while(1){
        if(i==n1){
            if(j==n2){
                break;
            }
            else{
                x3[k].coeff=x2[j].coeff;
                x3[k].exp=x2[j].exp;
                k++;
                j++;
            }
        }
        else if(j==n2){
            if(i==n1){
                break;
            }
            else{
                x3[k].coeff=x1[i].coeff;
                x3[k].exp=x1[i].exp;
                k++;
                i++;
            }
        }
        else if(x1[i].exp==x2[j].exp){
            x3[k].coeff=x1[i].coeff+x2[j].coeff;
            x3[k].exp=x2[j].exp;
            j++;
            k++;
            i++;

        }
        else if(x1[i].exp>x2[j].exp){
            x3[k].coeff=x1[i].coeff;
            x3[k].exp=x1[i].exp;
            k++;
            i++;

        }
        else if(x1[i].exp<x2[j].exp){
            x3[k].coeff=x2[j].coeff;
            x3[k].exp=x2[j].exp;
            k++;
            j++;
            
        }
    }
    for(i=0;i<n2;i++){
        if(i==n2-1)
        printf("%dX%d",x3[i].coeff,x3[i].exp);
        else
        printf("%dX%d+",x3[i].coeff,x3[i].exp);
        
    }
}
