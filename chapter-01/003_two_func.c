// tow_func.c
#include <stdio.h>
void butler(void); // 函数原型，函数声明  prototype，一种声明形式，告知编译器正在使用某个函数，

int main()
{
    printf("i will summon the butler function.\n");
    butler(); //函数调用
    printf("Yes ,Bring me some tea and writeable DVDs.\n");

    return 0;
}

void butler(void) /* 函数定义 */
{
    printf("You rang, Sir?\n");
}