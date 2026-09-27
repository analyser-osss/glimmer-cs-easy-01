#include <stdio.h>

int a,b;
char op;

int main()
{
    scanf("%d %c %d",&a,&op,&b);
    switch(op)
    {
        case '+':
        {
            printf("%d",a+b);
            break;
        }
        case '-':
        {
            printf("%d",a-b);
            break;
        }
        case '*':
        {
            printf("%d",a*b);
            break;
        }
        case '/':
        {
            if(b==0)
            {
                printf("除数不能为0");
            }
            else
            {
                printf("%d",a/b);
            }
            break;
        }
        default:
        {
            printf("输入错误");
            break;
        }
    }
    return 0;
}