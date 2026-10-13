#include <stdio.h>//预处理声明标准输入输出函数库
#include <stdlib.h>//预处理声明通用工具库
int main(){
    int n;
    printf("请输入数组长度:");
    scanf("%d",&n);//因为运行时才知道n是多少
    int *arr=(int*)malloc(n*sizeof(int));//动态申请n个int大小的内存
    if(arr==NULL){
        return 1;//判空，申请失败检查。return 0;表示返回值正常。return 1;表示返回异常，终止程序。
    }//判空的目的是防止后续操作空指针崩溃    
    double sum=0;//定义sum以作为求和储值器
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);//通过for循环依次输出数组元素
        sum+=arr[i];//用sum作为求和储值器,表示数组元素之和
    }
    printf("平均值：%.2f\n",sum/n);//求平均值
    free(arr);//释放内存，防止内存泄漏
    return 0;//返回值
}     