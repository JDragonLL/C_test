#include<stdio.h>
int Add(int x,int y)
{
    return x+y;
}
void test(int *(p)[5]){}
int main()
{
int arr[3][5]={0};
test(arr);
int (*p)(int ,int )=Add;
printf("%p\n",Add);
printf("%p\n",&Add);
printf("%p\n",p);
printf("%d\n",(*p)(2,3));
return 0;
}