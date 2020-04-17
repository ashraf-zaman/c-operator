#include <stdio.h>
int main()
{
    float base, height, area;

    printf("Base = ");
    scanf("%f", &base);

    printf("Height = ");
    scanf("%f", &height);

    area = 0.5*base*height;
    //area = (float)1/2*base*height;//alternative

    printf("Area = %.2f", area);

    getch();
    return 0;
}
