#include <stdio.h>
#include <stdlib.h>
void peintf_num(int num);
int main()
{
    printf("Hello world!\n");
    printf("54564564");
    peintf_num(5);
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
