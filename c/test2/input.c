#include<stdio.h>
void swap(int* pa,int* pb)
{
    int tmp=*pa;
    *pa=*pb;
    *pb=tmp;
}
int main()
{
    int a=10;
    int b=20;
    printf("%d %d\n",a,b);
    swap(&a,&b);
    printf("%d %d\n",a,b);
    return 0;
}