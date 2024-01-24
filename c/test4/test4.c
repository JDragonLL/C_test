#include<stdio.h>
int main ()
{
int arr[3][5]={{1,2,3,4,5},{2,3,4,5,6},{3,4,5,6,7}};//一个二维数组，期望打印每行数据。
int (*p)[5]=arr;
int i=0;
for (size_t i = 0; i < 3; i++)
{
    int j=0;
    for ( j = 0; j < 5; j++)
    {
    //printf("%d ",arr[i][j]);
    printf("%d ",*(*(p+i)+j));//不同于直接打印二维数组方式，利用数组指针，而二维数组的数组名表示第一行的首地址。
    //printf("%d ",(*(p+i))[j]);//[]优先级高于*
    //printf("%d ",*(p[i]+j));
    } 
    printf("\n");
}
return 0;
}
