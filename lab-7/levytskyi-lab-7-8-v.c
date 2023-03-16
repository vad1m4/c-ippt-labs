#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(char *argv[], int args)
{
    int randint()
    {
        int random = rand() % 100;
        return random;
    }
    srand(time(NULL));
    int arr[2][5] = {{randint(), randint(), randint(), randint(), randint()}, {randint(), randint(), randint(), randint(), randint()}};
    int largest = arr[0][0];
    int smallest = arr[0][0];
    int max_i;
    int max_j;
    int min_i;
    int min_j;

    puts("(c) vad1m4");
    puts("Vadym Levytskyi, Group KNMS-11. Lab #7");

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("%d\n", arr[i][j]);
            if (arr[i][j] > largest)
            {
                largest = arr[i][j];
                max_i = i;
                max_j = j;
            };
            if (arr[i][j] < smallest)
            {
                smallest = arr[i][j];
                min_i = i;
                min_j = j;
            };
        };
    };

    printf("Largest: %d, largest's index: %d %d. Smallest: %d, smallest's index: %d %d.", largest, max_i, max_j, smallest, min_i, min_j);

    system("PAUSE");
    return 0;
}