#include <stdio.h>

//1.方差
int power(int base,int exp)
{
    int result =1;
    for(int i=0;i<exp;i++)
    {
        result =result *base;
    }
    return result;
}

//2.综合成绩
int score(int a,int b,int c)
{
    int p=(a+b+c)/3;
    int f=(power(p-a,2)+power(p-b,2)+power(p-c,2))/3;
    return 3*p-f/3 ;
}

//3排序打印
void sort(int zh1,int zh2,int zh3)
{
    if (zh1 >= zh2 && zh2 >= zh3) 
    {
      printf("小明 > 小强 > 小林");
    } 
    else if (zh1 >= zh3 && zh3 >= zh2) 
    {
      printf("小明 > 小林 > 小强");
    } 
    else if (zh2 >= zh1 && zh1 >= zh3) 
    {
      printf("小强 > 小明 > 小林");
    } 
    else if (zh2 >= zh3 && zh3 >= zh1) 
    {
      printf("小强 > 小林 > 小明");
    } 
    else if (zh3 >= zh1 && zh1 >= zh2) 
    {
      printf("小林 > 小明 > 小强");
    } 
    else 
    { // zh3 >= zh2 && zh2 >= zh1
      printf("小林 > 小强 > 小明");
    }
}


int main()
{
    int x1, x2, x3;
    int y1, y2, y3;
    int z1, z2, z3;

    printf("请输入小明的三项成绩(顺序为A B C,以一个空格为间隔）：");
    scanf("%d %d %d", &x1, &x2, &x3);
    printf("请输入小强的三项成绩(顺序为A B C,以一个空格为间隔）：");
    scanf("%d %d %d", &y1, &y2, &y3);
    printf("请输入小林的三项成绩(顺序为A B C,以一个空格为间隔）：");
    scanf("%d %d %d", &z1, &z2, &z3);

    int zh1 =score(x1,x2,x3);
    int zh2 =score(y1,y2,y3);
    int zh3 =score(z1,z2,z3);
    sort(zh1,zh2,zh3);

    return 0;
}