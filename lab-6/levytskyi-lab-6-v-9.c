#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(
    char *argv[], int argc)
{
    float calculateprice(float priceper, int amount)
    {
        float total = priceper * amount;
        return total;
    };
    float priceper;
    int amount;
    float result;

    puts("(c) vad1m4");
    puts("Vadym Levytskyi, Group KNMS-11. Lab #6");

    puts("Input the price per item:");
    scanf("%f", &priceper);
    puts("Input the amount of items:");
    scanf("%d", &amount);

    result = calculateprice(priceper, amount);
    printf("Your total is: %f\n", result);

    system("PAUSE");
    return 0;
};