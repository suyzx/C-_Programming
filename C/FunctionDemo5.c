#include <stdio.h>
void addittion(int no1,int no2)
{
    int result=0;
    result= no1+no2; //Bussiness logic
    printf("addittion is : %d\n", result);
}


int main()
{
   int value1=0, value2=0;
   printf("enter first number\n");
   scanf("%d",&value1);

    printf("enter second number\n");
   scanf("%d",&value2);
 
    addittion(value1,value2);
    return 0;
}
