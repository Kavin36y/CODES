#include<stdio.h>
int main()
{
int number_1,number_2,temp;
printf("Enter number 1 and 2:");
scanf("%d %d",&number_1,&number_2);
temp = number_1;
number_1 = number_2;
number_2 = temp;
printf("swapped result: %d , %d",number_1,number_2);


return 0;
}