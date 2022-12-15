#include<stdio.h>

void main(){
    int s[10][10],trip[10][3],r,c,i,j,count,x=1,y=1;
    printf("Enter the row of the sparse matrix:");
    scanf("%d",&r);
    printf("Enter the column of the sparse matrix:");
    scanf("%d",&c);
    printf("Enter the elements of the sparse matrix\n");
    for(i=0;i<r;i++){
   	 printf("Enter the element of row %d:",i+1);
   	 for(j=0;j<c;j++){
   		 scanf("%d",&s[i][j]);   	 
   	    }    
    }
    for(i=0;i<r;i++){
    
   	 for(j=0;j<c;j++){
   		 if(s[i][j]){
   			 count++;
   			 trip[x][2]=s[i][j];
   			 trip[x][0]=i;
   			 trip[x][1]=j;
   			 x++;   		 
   		    }
   	    }    
    }
    trip[0][0]=r;
    trip[0][1]=c;
    trip[0][2]=x-1;

    for(i=0;i<x;i++){
   	 
   	 for(j=0;j<3;j++){
   		 printf("%d ",trip[i][j]);
   	    }
        printf("\n");    
    }
}
