#include<stdio.h>
int main()
{
    int num1, num2, num3, sum;
    float avg;

    printf("Enter two integer number : ");
    scanf ("%d %d %d", &num1, &num2, &num3);

    sum = num1+num2+num3;
    avg = (float)sum/3;//Typecasting

    printf("The sum is = %d\n",sum);
    printf("The sum is = %.2f",avg);

    getch();
    return 0;
}
