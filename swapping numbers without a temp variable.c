#include<stdio.h>
int main()
{
int a,b;
printf("Enter number 1 and 2:");
scanf("%d %d",&a,&b);
a = a+b;
b = a-b;
a=a-b;
printf("swapped result: %d , %d",a,b);


return 0;
}
