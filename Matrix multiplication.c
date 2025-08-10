#include<stdio.h>
int main()
{
float a[2][2];

//a
printf("Enter the elements of a:\n");
for(int  i=0;i<2;++i)
{
for(int j=0;j<2;++j)
{
printf("Enter a[%d][%d]:",i+1,j+1);
scanf("%f",&a[i][j]);
}
}

return 0;
}
