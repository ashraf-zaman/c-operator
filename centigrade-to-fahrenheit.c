#include <stdio.h>
int main()
{
    float c, f;

    printf("Enter Centigrade : ");
    scanf("%f",&c);

    f = (c*1.8) + 32;

    printf("The Fahrenheit = %.2f F",f);

    getch();
    return 0;
}
