#include <stdio.h>

int countDigits(int number)
{
    int digits = 0;

    do
    {
        digits++;
        number /= 10;
    } while (number > 0);

    return digits;
}

int isArmstrong(int number)
{
    int original = number;
    int digits;
    long long sum = 0;

    if (number < 0)
        return 0;

    digits = countDigits(number);

    do
    {
        int digit = number % 10;
        long long power = 1;

        for (int i = 0; i < digits; i++)
            power *= digit;

        sum += power;
        number /= 10;
    } while (number > 0);

    return sum == original;
}

int main(void)
{
    int number;

    printf("Input a number:");
    if (scanf("%d", &number) != 1)
    {
        printf("Invalid input.\n");
        return 1;
    }

    if (isArmstrong(number))
        printf("%d is an Armstrong number\n", number);
    else
        printf("%d is not an Armstrong number\n", number);

    return 0;
}
