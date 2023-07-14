//Q.4 Write a Program to print and find the sum of all elements of a given row & column from a 2D array.

#include<stdio.h>

  main(){

  int r,s,t,u;

   printf("Enter the size of Row :   ");
   scanf("%d",&r);

       printf("Enter the size of column :   ");
       scanf("%d",&s);

  int a[r][s];

   printf("Enter the array A's elements\n");
   for(t=0;t<r;t++){
    for(u=0;u<s;u++){
    
     printf("a[%d][%d] =  ",t,u);
     scanf("%d",&a[t][u]);
     }
}

int p,q,s=0,sum=0;
 printf("Enetr row number : ");
 scanf("%d",&p);

  printf("Elements of row %d: ",p);
  for(t=0;t<r;r++){
    if(t==p){
      for(u=0;u<s;u++){ 
    
       printf("%d ",a[t][u]);
           sum = sum + a[t][u];
      }
   }
}
printf("\nThe sum of %d row is : %d\n",p,sum );

  printf("Enter the column number : ");
  scanf("%d",&q);

   printf("Elements of coloum %d: ",q);

    for(u=0;u<s;u++){
    if(u==q){
        for(t=0;t<r;t++){ 
    
        printf("%d ",a[t][u]);
        s = s + a[t][u];
        }
    }
}
printf("\nThe sum of %d raw is : %d",q,s);

}
