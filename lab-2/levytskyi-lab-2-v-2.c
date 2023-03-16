#include <stdio.h>
#include <stdlib.h>

int main(
    int argc)
{
    int money;
    int euro;
    int usd;
    puts("(c) vad1m4");
    puts("Vadym Levytskyi, Group KNMS-11. Lab #2");

    puts("Hello world! Input the amount of UAH you're interested in converting: ");
    scanf("%d", &money);
    euro = money * 40;
    usd = money * 37;
    printf("Your amount in EUR: %d. Your amount in USD: %d\n", euro, usd);
    
    system("PAUSE");
    return 0;
}