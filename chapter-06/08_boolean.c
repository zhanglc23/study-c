#include<stdio.h>
int main(void) 
{
    long num;
    long sum = 0L;
    _Bool imput_is_good;

    printf("please enter a integer to be summed(q to quit):");
    imput_is_good = (scanf("%ld" , &num)) == 1;

    while (imput_is_good)
    {
        sum = sum + num;
        printf("please enter a integer to be summed(q to quit):");
        imput_is_good = (scanf("%ld" , &num)) == 1;
    }
    printf("those integers sum to %ld.\n", sum);
    return 0;
}