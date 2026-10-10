#include <stdio.h>

int addition(int Value1, int Value2){
int resu=0;
resu=Value1+Value2;
return resu;
}

int main()
{
 int No1;
 int No2;
 int Ans;
 printf("Enter a number 1: \n");
 scanf("%d",&No1);
 printf("Enter a number 2: \n");
 scanf("%d",&No2);
 Ans=addition(No1,No2);
 printf("The addition is : %d",Ans);
    return 0;
}