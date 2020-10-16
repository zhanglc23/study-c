#include<stdio.h>
int main(void) 
{
    for (char i = 'a'; i < 'z'; i++)
    {
        printf("The ASCII value for %c is %d. \n", i , i );
    }
    return 0;
}