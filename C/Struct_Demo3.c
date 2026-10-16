#include <stdio.h>
#pragma pack(1)

// 1,2,4,8 inside pragma pack.
struct Demo
{
    int i;
    char ch;
    float f;

};

int main()
{
  printf("%d\n",sizeof(struct Demo));
    return 0;
}
