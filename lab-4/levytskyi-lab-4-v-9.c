#include <stdio.h>

int main(
    char *argv[], int argc)
{
    float height;
    float weight;
    float rec_weight;

    puts("(c) vad1m4");
    puts("Vadym Levytskyi, Group KNMS-11. Lab #4");

    puts("Input you height:");
    scanf("%f", &height);
    puts("Input your weight:");
    scanf("%f", &weight);
    rec_weight = (float)height - 100;
    if (rec_weight > weight)
        printf("You should eat more! Your recommended weight is %f\n", rec_weight);
    else if (rec_weight < weight)
        printf("You should eat less! Your recommended weight is %f\n", rec_weight);
    else
        printf("Your weight mactches your recommended weight! It's %f\n", rec_weight);
};