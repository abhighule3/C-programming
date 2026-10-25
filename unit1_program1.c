#include <stdio.h>

int main(void)
{
    int age;
    float height;
    char initial;

    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Enter your height in metres: ");
    scanf("%f", &height);

    printf("Enter the first letter of your name: ");
    scanf(" %c", &initial);

    printf("\nAge: %d years\n", age);
    printf("Height: %.2f metres\n", height);
    printf("Name initial: %c\n", initial);

    return 0;
}
