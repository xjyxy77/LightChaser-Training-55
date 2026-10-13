#include <stdio.h>
struct jieguoti//声明结构体类型名，关键字是struct
{
    char name[20];
    float score;//结构体成员的定义方式：类型名 成员名；
};//结构体的定义，可以放在main()内或外，这里展示在main()外的写法，使主函数程序看起来更加简洁；注意：结构体类型一定是先声明后使用。
struct jieguoti cjb[3]={{"xie",700.9},{"huang",600.8},{"yao",689.4}};//定义结构体数组并赋值。要求的用结构体在存储姓名+成绩已完成；下面展示输出。
int main()//主函数
{
    int i;
    for(i=0;i<=2;i++){
        printf("姓：%s   分数：%lf分\n",cjb[i].name,cjb[i].score);//结构体数组的引用格式为：数组名[元素序号].结构体成员名。其中，"."是成员运算符。
    }//通过for循环依次输出各个结构体数组元素
}