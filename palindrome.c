#include<stdio.h>
int main()
{
int x,reverse =0,orginal,remainder;
printf("Enter:");
scanf("%d",x);
orginal=x;
while(x!=0)
{
    remainder=x%10;
    reverse=reverse*10+remainder;
    x= x/10;

}
printf("%d",reverse);


return 0;
}
