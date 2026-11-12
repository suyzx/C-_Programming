#include<stdio.h>

void Pattern(int iNo)
{
    int iCnt = 0;

    for(iCnt = 'A'; iCnt <= ('A'+iNo-1); iCnt ++)
    {
        printf("%c\t",iCnt);
    }

}

int main()
{
    int iValue = 0;

    printf("Enter Number : \n");
    scanf("%d",&iValue);

    Pattern(iValue);

    return 0;
}