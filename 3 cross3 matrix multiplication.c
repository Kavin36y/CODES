
#include<stdio.h>
int main()
{
int arr1[3][3],arr2[3][3],result [3][3];
int i, j, k;
//1st
printf("Enter the Elements of Array 1: \n");
for(int i=0;i<3;i++)
{
for(int j=0;j<3;j++)
scanf("%d", &arr1[i][j]);
}
//2nd
printf("Enter the Elements of Array 2: \n");
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
scanf("%d", &arr2[i][j]);
}
//output
printf("Output Matrix:\n");
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
result [i][j]=0;
for(k=0;k<3;k++)
result [i][j]=arr3[i][j]+(arr1[i][k]*arr2[k][j]);
printf("%d ", arr3[i][j]);
}
printf("\n");
}
return 0;
}
