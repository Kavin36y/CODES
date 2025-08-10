#include <stdio.h>

int main()
{

     int a  ,b ,s,d,p,div;
     int choose;
     //frontend starts
    printf("\t\t\t\t\t\tCalculation operation");
    printf("\n\t\t\t\t\t\t\tMENU");
    printf("\n1.ADDITION");
    printf("\n2.SUBRACTION");
    printf("\n3.MULTIPLICATION");
    printf("\n4.DIVISION");
    printf("\n\t\t\t\t\t\tCHOOSE 1,2,3,4.");
    printf("\n\t\t\t\t\t\tENTER:");
    scanf("%d",&choose);
    printf("\n\t\t\t\t\t\tENTER A  :");
    scanf("%d",&a );
     printf("\n\t\t\t\t\t\tENTER B  :");
     scanf("%d",&b );
    //frontend ends
   //@@@@@@@@@@@@@@@@@@@@@@@@// 
    //logic = used else if ladder
    if(choose ==1)
    {
        s = a+b;
        printf("SUM : %d",s);
    }
        else if(choose == 2)
        {
            d = a-b;
            printf("DIFFERENCE: :%d",d);
        } else if(choose == 3)
            {
                p = a*b;
                printf("PRODUCT: :%d",p);
            }
                else if(choose == 4)
                {
                    if(b != 0 )
                    {
                        div = a/b;
                        printf("QUOTIENT : %d",div);
                    }
                    if(b == 0)
                    {
                        printf("INVALID");
                    }

                }
}
