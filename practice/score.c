#include <stdio.h>

int main()
{


    int number;
    printf("请输入一个0~100的分数\n");
    scanf("%d",&number);
    if(number<=100&&number>=90)
    {
        printf("A");
    }
    else if(number<90&&number>=80)
    {
        printf("B");
    }
    else if(number<80&&number>=60)
    {
        printf("C");
    }
    else if(number<60&&number>=0)
    {
        printf("D");
    }
    else
    {
        printf("该数据错误");
    }
    return 0;
}
