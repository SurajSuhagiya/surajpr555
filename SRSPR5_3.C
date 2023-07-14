//Q.3 Write a Program to find the transpose matrix of a given 2D array.

#include<stdio.h>

 main(){

int r,s,t,sum=0;

printf("Enter SIZE of Row & colum :  ");
scanf("%d",&r);

int a[r][r];

printf("Enter the elements of array \n");
for(s=0;s<r;s++){
   for(t=0;t<r;t++){
    
      printf("a[%d][%d] =  ",s,t);
      scanf("%d",&a[s][t]);
    }
}

 for(s=0;s<r;s++){
 	
   for(t=0;t<r;t++){
   
   printf("%d",a[t][s]);
   
   }
    printf("\n");
  }
}
