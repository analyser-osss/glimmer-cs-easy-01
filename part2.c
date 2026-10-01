#include <stdio.h>

int main()
{
    int age;
    char name[20];
    int count =0;
    char choice;

    while(1)
    {
        printf("请输入你的年龄");
        scanf("%d",&age);
        printf("请输入你的名字");
        scanf("%s",name);
        printf("年龄：%d,姓名：%s",age,name);
        count++;
        printf("是否继续");
        scanf(" %c",&choice);
        if(choice=='n')
        {
            printf("总共输入了%d次",count);
            break;
        }
    }
    return 0;
}