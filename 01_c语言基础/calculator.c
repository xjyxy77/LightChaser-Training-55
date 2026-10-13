#include <stdio.h> //通过预处理，声明一个标准输入输出函数库
int main(void) //主函数
{
    double a,b;//定义a,b的数据类型为double，以达到进行小数运算的目的
    char operator;//定义operator(运算符)
    scanf("%lf%c%lf",&a,&operator,&b);//输入算式
    switch(operator)//通过switch循环对+-*/四种情况进行分别计算
    {
        case '+':
            printf("=%.6g",a+b);
            break;
        case '-':
            printf("=%.6g",a-b);
            break;
        case '*':
            printf("=%.6g",a*b);
            break;
        case '/':
            if(b==0){
                printf("0不能做除数");//排除0做除数的情况
                break;
            }else{    
            printf("=%.6g",a/b);
            break;
            }//此处我用的是break，因为简单计算我默认仅两数的四则运算。这种情况下，在执行一种情况后计算就结束了，用break直接跳出循环，减少执行时间
        default:
            printf("本程序仅支持+-*/运算");//对非四则运算输出提示       
    };
    return 0;//返回值   
}