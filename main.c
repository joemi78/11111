#include <stdio.h>
#include <stdlib.h>
void peintf_num(int num);
int main()
{
    printf("Hello world!\n");
    printf("54564564");
    peintf_num(5);
    printf("55645456456456456456456");
    int i;
    for(i=0;i<10;i=i+1)
    {
        printf("3");
    }
    return 0;
}

void peintf_num(int num)
{
    int i;
    for(i=num;i<10;i=i+1)
    {
        printf(" %d \n",i);
    }
}
