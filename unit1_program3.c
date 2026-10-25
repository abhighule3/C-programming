#include <stdio.h>

int main(void)
{
    float first, second, third, average;

    printf("Enter three numbers: ");
    scanf("%f %f %f", &first, &second, &third);

    average = (first + second + third) / 3.0f;

    printf("Average = %.2f\n", average);

    return 0;
}
