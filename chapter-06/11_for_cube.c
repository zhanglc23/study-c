#include<stdio.h>
int main(void) 
{
    int num;
    printf("\t n\t\tn cubed \n");
    for (num = 1; num <= 6; num++)
        printf("\t %d\t\t %d \n", num, num * num * num);
    
    return 0;
}