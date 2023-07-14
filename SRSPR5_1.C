//Q.1 Write a Program to find all the negative elements from a given 1D array.


#include<stdio.h>

void main ()
{

int r,s;

printf("Enter array size =  ");
scanf("%d",&s);

int a[s];

printf("Enter array A's elemets \n");

    for(r=0;r<s;r++)
	{
        printf("a[%d]= ",r);
        scanf("%d",&a[r]);
    }

printf("The negative elemets is : ");

    for(r=0;r<s;r++)
	{
    if(a[r]<0)
	    {
        printf("%d",a[r]);
        }
    }
}
