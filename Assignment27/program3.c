#include<stdio.h>

///////////////////////////////////////////////////////////////////
//
//  Function Name   : CountSmall
//  Input           : Character 
//  Description     : difference betn frequency of small character and capital character
//  Date            : 19/11/2026
//  Author          : Suyash Babasaheb Zaware
//
///////////////////////////////////////////////////////////////////

int CountSmall(char *str)
{
      int iCnt = 0;
      int iCnt1 = 0;

      while (*str != '\0')
      {
            if((*str >= 'a') && (*str <= 'z'))
            {
                iCnt++;
            }
            if((*str >= 'A') && (*str <= 'Z'))
            {
                iCnt1++;
            }
            str++;
      }
      
      return iCnt - iCnt1;
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


    iRet = CountSmall(arr);

    printf("%d",iRet); 
    
    return 0;
}