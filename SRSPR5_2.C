//Q.2 Write a Program to find the largest element from a given 2D array.


#include<stdio.h>

 main()
{

    int r,s,t,u,sum=0;

    printf("Enter the row size of array : ");
    scanf("%d",&s);
    printf("Enetr the colum size of array : ");
    scanf("%d",&r);

    int a[s][r];

    for(t=0;t<s;t++)
    {
        for(u=0;u<r;u++)
        {
            printf("a[%d][%d] : ",t,u);
            scanf("%d",&a[t][u]);
        }
    }

    for(t=0;t<s;t++)
    {
      for(u=0;u<r;u++)
      {
          if(a[t][u]>sum)
          {
             sum = a[t][u];
             }
         }
     }

      printf("Largest element : %d",sum);
}
