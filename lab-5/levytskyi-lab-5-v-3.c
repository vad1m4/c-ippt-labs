#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(
    char *argv[], int argc)
{
    srand(time(NULL));
    float r = rand() % 100;
    int attempt = 1;
    float user_input;
    puts("(c) vad1m4");
    puts("Vadym Levytskyi, Group KNMS-11. Lab #5");

    while (1)
    {
        if (!(attempt > 5))
        {
            printf("Attempt #%d\n", attempt), puts("Guess the number!"), scanf("%f", &user_input);
            attempt += 1;
            if (user_input > r)
                puts("Go lower!");
            else if (user_input < r)
                puts("Go higher!");
            else
            {
                printf("You're right! The number was %f\n", r);
                system("PAUSE");
                break;
            }
        }
        else
        {
            printf("You ran out of attempts! The number was %f\n", r);
            system("PAUSE");
            break;
        }
    };
};