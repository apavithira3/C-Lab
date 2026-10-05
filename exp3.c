#include<stdio.h>
int main()
{
int a,b,choice,res;
printf("=====BRANCHING STATEMENTS=====\n");
printf("Enter the first number:");
scanf("%d",&a);
printf("Enter the second number:");
scanf("%d",&b);
printf("\n-----MENU-----\n");
printf("1.Check Positive,Negative or zero\n");
printf("2.Check Even or odd\n");
printf("3.Find Largest of Two Numbers\n");
printf("4.Check Divisibality by 5\n");
printf("\nEnter your Choice:");
scanf("%d",&choice);
printf("\n-----RESULT-----\n");
switch(choice)
{
case 1:
  if(a>0)
    printf("%d is Positive",a);
  else if(a<0)
    printf("%d is Negative",a);
  break;
case2:
  if(a%2==0)
    printf("%d is Even",a);
  else
    printf("%d is Odd",a);
  break;
case 3:
  if(a>b)
  {
    res=a;
    printf("%d is the Largest Number",res);
  }
else if(b>a)
  {
    res=b;
    printf("%d is the Largest Number",res);
  }
  else
  {
    printf("Both Numbers are Equal");
  }
  break;
case 4:
  if(a%b==0)
    printf("%d is Divisible by 5",a);
  else
    printf("%d is Not Divisible by 5",a);
  break;
default:
    printf("Invalid choice.");
}
 return 0;
}
      




