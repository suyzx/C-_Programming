#include <stdio.h>
int addittion(int no1,int no2)
{
    int result=0;
    result= no1+no2; //Bussiness logic
    return result;
}


int main()
{
   int value1=0, value2=0, ans=0;
   printf("enter first number\n");
   scanf("%d",&value1);

    printf("enter second number\n");
   scanf("%d",&value2);
 
    ans = addittion(value1,value2);

    printf("Addittion is %d\n",ans);
    return 0;
}
