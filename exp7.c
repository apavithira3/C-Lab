#include<stdio.h>
#include<stdlib.h>
/*Callby value*/
int addByvalue(int a,int b)
{
 int res;
 res=a+b;
 return res;
}
/*CALL BY reference*/
 void swapByReference(int *a,int*b)
{
 int temp;
 temp=*a;
 *a=*b;
 *b=temp;
}
int main()
{
 int a,b,res;
 int*ptr;
 int*arr;
 int n,i,sum;
 printf("Enter the first number:");
 scanf("%d",&a);
 printf("Enter the second number:");
 scanf("%d",&b);
 /*Pointer demonstration*/
 ptr=&a;
 printf("\nPointer Demonstration:");
 printf("\nValue of a=%d",*ptr);
 printf("\nAddress of a =%p",(void*)ptr);
 /*call by value*/
 res=addByvalue(a,b);
 printf("\n\nCall by value:");
 printf("\nsum=%d",res);
 /*callBy reference*/
 swapByReference(&a,&b);
 printf("\n\nCallByReference:");
 printf("\nafter swapping first number=%d",a);
 printf("\nAfter swapping,second number=%d",b);
 /*Dynamic Memory allocation*/
 printf("\n\nDynamic memory allocation");
 printf("\nEnter the number of elements:");
 scanf("%d",&n);
 arr=(int*)malloc(n*sizeof(int));
 if(arr==NULL){
 printf("Memory allocation failed.");
 return 0;
 }
 printf("Enter %d elements:\n",n);
 for(i=0;i<n;i++)
 {
 scanf("%d",&arr[i]);
 }
 sum=0;
 for(i=0;i<n;i++)
 {
 sum=sum+arr[i];
 }
 printf("sum of dynamically allocated array=%d",sum);
 free(arr);
 return 0;                                                                    }








