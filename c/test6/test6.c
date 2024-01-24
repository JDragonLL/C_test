#include<stdio.h>
#include<stdlib.h>
void qsort(void* base,//待排序数组首元素地址
size_t num,//个数
size_t width,//元素大小
int(*cmp)(const void* e1,const void* e2));//比较函数

struct Stu
{
    char name[20];
    int age;
};

int cmp_stu_age(const void* e1,const void* e2)
{
    return ((struct Stu*)e1)->age-((struct Stu*)e2)->age;
    
}

void test()
{
    struct Stu s[3]={{"zhangsan",20},{"lisi",30},{"wangwu",10}};
    int sz=sizeof(s)/sizeof(s[0]);
    qsort(s,sz,sizeof(s[0]),cmp_stu_age);
    printf("%d %d %d\n",s[0].age,s[1].age,s[2].age);
}

int main()
{
    test();//对结构体数组中年龄的大小进行排序
    return 0;
}