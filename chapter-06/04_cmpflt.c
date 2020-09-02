#include<stdio.h>
#include<math.h>

int main(void) 
{
    const double ANSWER = 3.14159;
    double response;
    printf("what is the value of PI?\n");
    scanf("%lf", &response);

    while (fabs(response - ANSWER) > 0)
    {
        printf("Try again!\n");
        scanf("%lf", &response);
    }
    printf("Close enough !\n");
    

    return 0;
}