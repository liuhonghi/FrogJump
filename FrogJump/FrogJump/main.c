//
//  main.c
//  FrogJump
//
//  Created by HiLau on 2023/6/7.
//

#include <stdio.h>

//经典递归问题:青蛙跳台阶问题
//一阶 - 1种 - 1
//二阶 - 2种 - 1+1/2
//三阶 - 3种 - 1+1+1/1+2/2+1
//四阶 - 5种 - 1+1+1+1/1+1+2/2+1+1/1+2+1/2+2
//转化为斐波那契数列问题，但斐波那契数列问题用递归的算法效率低，因为要重复运算，循环的方式效率高
//斐波那契数列问题在后面有介绍

//方法2: while循环
//重点，int c = n


 int Fac(int n)
{
    int a = 1;
    int b = 2;
    int c = n; //此处赋予n是因为当n = 1和n = 2时，返回值都为n
    while(n>2)
     {
       c = a+b;
       a = b;
       b = c;
       n--;
     }
    return c;
}

int main()
{
    int i = 0;
    int ret = 0;
    printf("请输入台阶数:");
    scanf("%d",&i);
    ret = Fac(i);
    printf("共有%d跳法\n",ret);
    return 0;
}
 
//方法1:递归
/*
int Fac(int n)
{
    if(n == 1)
    {
        return n;
    }
   else if(n ==2 )
    {
        return n;
    }
    else
    {
        return Fac(n-1)+Fac(n-2);
    }
}

int main()
{
    int i = 0;
    int ret = 0;
    printf("请输入台阶数:");
    scanf("%d",&i);
    ret = Fac(i);
    printf("共有%d跳法\n",ret);
    return 0;
}
*/



//求斐波那契数列 1 1 2 3 5 8 13 ...
//方法1（递归）: 缺点：进行了大量的重复计算，效率低，此处使用递归不合适
//int count = 0;
/*
int Fib1(int n)
{
    //if(n == 3)
    //{
    //    count++;
    //}
    if(n<=2)
        return 1;
    else
        return Fib1(n-1)+Fib1(n-2);
}
//方法2（循环）:  速度更快
int Fib2(int n)
{
    int a = 1;
    int b = 1;
    int c = 1;
    
    while(n>2)
    {
        c = a+b;
        a = b;
        b = c;
        n--;
    }
    return c;
}
int main()
{
    int num = 0;
    int ret = 0;
    scanf("%d",&num);
    //TDD - 测试驱动开发
    ret = Fib2(num);
    printf("ret = %d\n",ret);
    //printf("count = %d\n",count);
    return 0;
}

