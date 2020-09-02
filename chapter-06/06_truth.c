#include<stdio.h>
// 所有的0 标识false，非0 包括正数和负数 都是 true
int main(void) 
{
    int n =3;
    while (n)
        printf("%2d is true.\n", n-- );
    printf("%2d is false.\n", n);

    n = -3;
    while (n)
        printf("%2d is true.\n", n++ );
    printf("%2d is false.\n", n);
    
    

    return 0;
}