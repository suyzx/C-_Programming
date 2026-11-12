#include<stdio.h>

void Pattern(int iCol)
{
    int iCnt1 = 0;


    for(iCnt1 = iCol; iCnt1 >=1; iCnt1--)
    {
        printf("%d\t#\t",iCnt1);
    }

    printf("\n");
    
}


int main()
{
    int iValue1 = 0;

    printf("Enter Number : \n");
    scanf("%d",&iValue1);


    Pattern(iValue1);

    return 0;
}