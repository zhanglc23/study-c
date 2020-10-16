#include<stdio.h>
#include<ctype.h>
// lpha()

int main(void) 
{
    char ch;
    ch = getchar();

    while ((ch = getchar()) != '\n')
    {
        if (isalpha(ch))
        {
            putchar(ch + 1);
        }
        else
        {
            putchar(ch);
        }
    }
    putchar(ch);

    return 0;
}