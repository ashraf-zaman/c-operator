#include <stdio.h>
int main()
{
    int num1 = 10, num2 = 5, tamp;

    tamp = num1;
    num1 = num2;
    num2 = tamp;

    printf("num1 = %d\nnum2 = %d",num1, num2);

    getch();
    return 0;
}
