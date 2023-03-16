#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(char *argv[], int args)
{
    struct vehicle
    {
        char model[20];
        int year;
        float price;
        char color[10];
        int horsepower;
    };

    struct vehicle vehiclearr[10];

    puts("(c) vad1m4");
    puts("Vadym Levytskyi, Group KNMS-11. Lab #10");

    for (int i = 0; i < 10; i++)
    {
        printf("Input the model:\n");
        fgets(vehiclearr[i].model, sizeof(vehiclearr[i].model), stdin);
        printf("Input the year:\n");
        scanf("%d", &vehiclearr[i].year);
        printf("Input the price:\n");
        scanf("%f", &vehiclearr[i].price);
        getchar();
        printf("Input the color:\n");
        fgets(vehiclearr[i].color, sizeof(vehiclearr[i].color), stdin);
        printf("Input the horsepower:\n");
        scanf("%d", &vehiclearr[i].horsepower);
        getchar();
    };

    for (int j = 0; j < 10; j++)
    {
        if (strcmp(vehiclearr[j].color, "Red\n") == 0 && vehiclearr[j].year > 2002 && vehiclearr[j].price < (float)50000)
        {
            printf("Model: %s", vehiclearr[j].model);
            printf("Year: %d\n", vehiclearr[j].year);
            printf("Price: %f\n", vehiclearr[j].price);
            printf("Color: %s", vehiclearr[j].color);
            printf("Horsepower: %d\n", vehiclearr[j].horsepower);
        }
    };

    system("PAUSE");
    return 0;
}