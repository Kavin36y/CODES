#include <stdio.h>
#include <stdlib.h>
int add(int a,int b);
int main()
{
int n1=5,n2=3,sum;
sum=add(n1,n2);
printf("sum=%d\n",sum);
    return 0;}
int add(int a,int b)
{
return (a + b);
}
