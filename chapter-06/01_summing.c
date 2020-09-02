#include<stdio.h>

int main(void) 
{
    long num;
    long sum = 0L;
    int status;

    printf("please enter a integer to be  summed. (q to quit):");
    status = scanf("%ld", &num);
    while (status == 1)
    {
        sum += num;
        printf("please enter a integer to be  summed. (q to quit):");
        status = scanf("%ld", &num);
    }

    printf("those integers sum to %ld .\n", sum);
    


    return 0;
}