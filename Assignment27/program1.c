#include<stdio.h>

///////////////////////////////////////////////////////////////////
//
//  Function Name   : CountCapital
//  Input           : Character 
//  Description     : count no.of capital character in String
//  Date            : 19/11/2026
//  Author          : Suyash Babasaheb Zaware
//
///////////////////////////////////////////////////////////////////

int CountCapital(char *str)
{
      int iCnt = 0;

      while (*str != '\0')
      {
            if((*str >= 'A') && (*str <= 'Z'))
            {
                iCnt++;
            }
            str++;
      }
      
      return iCnt;
}

///////////////////////////////////////////////////////////////////
//
// Entry Point Function
//
/////////////////////////////////////////////////////////////////// 

int main()
{
    char arr[20];
    int iRet = 0;

    printf("Enter String\n");
    scanf("%[^'\n]s",arr);


    iRet = CountCapital(arr);

    printf("%d",iRet); 
    
    return 0;
}