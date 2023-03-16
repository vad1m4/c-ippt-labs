#include <stdio.h>
#include <stdlib.h>

int main(
    int argc, char *argv[])
{
    int amount;
    int price;
    float result;

    puts("(c) vad1m4");
    puts("Vadym Levytskyi, Group KNMS-11. Lab #3");
    puts("Input the amount of items:");
    scanf("%d", &amount);
    puts("Input the overall cost:");
    scanf("%d", &price);
    if (amount < price)
        result = (float)price / amount;
    else
        result = (float)amount / price;
    printf("Price: %f\n", result);
    
    system("PAUSE");
    return 0;
}