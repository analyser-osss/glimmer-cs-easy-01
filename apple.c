#include <stdio.h>
int main()
{
    // char只能存单个字符
    char a = 'x';
    printf("%c\n", a); 
    //字符数组可存单词
    char b[]="apple";
    printf("%s\n",b);
    return 0;
}
