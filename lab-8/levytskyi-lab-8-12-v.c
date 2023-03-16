#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int main(char *argv[], int args)
{
    char user_input[50];
    int length;
    puts("Input your string:");
    fgets(user_input, 50, stdin);
    int len = strlen(user_input);

    if (user_input[strlen(user_input) - 1] == '\n')
    {
        user_input[strlen(user_input) - 1] = '\0';
    };

    for (int i = 0, j = 0; i < len; i++)
    {
        if (user_input[i] != 97 && user_input[i] != 111 &&
            user_input[i] != 65 && user_input[i] != 79)
        {
            user_input[j++] = user_input[i];
        }
    };

    puts("(c) vad1m4");
    puts("Vadym Levytskyi, Group KNMS-11. Lab #8");

    printf("Result: %s\n", user_input);

    system("PAUSE");
    return 0;
};