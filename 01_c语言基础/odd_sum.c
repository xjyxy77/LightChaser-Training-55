#include <stdio.h>//预处理引入标准输入输出函数库
int main()//主函数
{
    int i,all;//声明变量
    all=0;//用all作为加法计和器
    for(i=1;i<100;i++){
        if(i%2==0){
            continue;//如果能被2整除就是偶数，跳过继续执行
        }else{
            all=all+i;//用all计所有奇数的和
        }
    }
    printf("%d",all);//输出奇数和
    return 0;//返回值
}