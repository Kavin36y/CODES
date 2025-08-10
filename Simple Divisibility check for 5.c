#include<stdio.h>
int main()
{
int a;
printf("Enter:");
scanf("%d",&a);
if(a % 5 == 0)
{
    printf("%d is div by 5",a);
}
else
{
    printf("%d is not divisible not 5",a);
}

return 0;
}
