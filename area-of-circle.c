#include <stdio.h>

int main()
{
    float area, radi,PI=3.1416;

    printf("Enter Radius : ");
    scanf("%f",&radi);

    area = PI*radi*radi;

    printf("The are of circle = %.2f",area);

    getch ();
    return 0;
}
