#include<stdio.h>
#define N_VALUES 5
int my_strlen(char* str)//利用指针计算字符串长度
{
    char* start=str;
    char* end=str;
    while ( *end!='\0')
    {
        end++;
    }
    return end-start; 
}
int main()
{
    char* str="bit";
    int len=my_strlen(str);
    printf("%d\n",len);
    float values[N_VALUES];
    values[0]=1;
    float *vp;
    /*for(vp=&values[N_VALUES-1];vp>=&values[0];vp--)可以编译但不满足语法，指针只能和之后的比较
    {
        *vp=0;
    }*/
    for(vp=&values[N_VALUES];vp>&values[0];)
    {
        *--vp=0;
    }
    printf("%f\n",values[0]);
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    int (*p)[10];
    printf("%p\n",arr);//数组首元素地址
    printf("%p\n",&arr[0]);//数组首元素地址
    printf("%p\n",&arr);//整个数组地址
    int a =10;
    int *pa=&a;
    int **ppa=&pa;//ppa就是二级指针
    return 0;
}

