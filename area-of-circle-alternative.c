#include <stdio.h>
#include <math.h>
int main()
{
    float area, radi;

    printf("Enter Radius : ");
    scanf("%f",&radi);

    area = M_PI*radi*radi;//Using the M_PI function

    printf("The are of circle = %.2f",area);

    getch ();
    return 0;
}
