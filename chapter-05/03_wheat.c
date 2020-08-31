#include<stdio.h>
#define SQUARES 64

int main(void) 
{
    const double CROP = 2e16; //世界年产谷粒数

    double current, total ;
    int count = 1 ;
    printf("square \tgrains \ttotal ");
    printf("\t fraction of \n");
    printf("added grains ");
    printf("world total \n");
    total = current = 1.0;
    printf("%4d %13.2e %12.2e %12.2e \n", count, current, total, total/CROP);

    while (count < SQUARES)
    {
        count = count + 1 ;
        current = 2.0 * current; //下一方格谷粒翻倍
        total = total + current; //更新总数

        printf("%4d %13.2e %12.2e %12.2e \n", count, current, total, total/CROP);
    }

    printf("That's all.\n");
    return 0;
}