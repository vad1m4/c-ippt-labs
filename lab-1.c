#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    float a, b;
    char opr;
    double result;

    puts("(c) vad1m4");
    puts("Vadym Levytskyi, Group KNMS-11. Lab #1");

    puts("Zdijsnitj vvedennya danyh za formatom: operand1 operaciya operand2 <Enter>");
    puts("Dlya zakinchennya roboty natysnitj klavishu q");

    while (puts("Vvid->"), scanf("%f  %c  %f", &a, &opr, &b) || getchar() != 'q')
    {
        switch (opr)
        {
        case '+':
            result = a + b;
            break;
        case '-':
            result = a - b;
            break;
        case '*':
            result = a * b;
            break;
        case '/':
            if (b == 0)
            {
                puts("\a\n\rPomylka: dilennya na nulj!!\a\n\r");
                continue;
            }
            else
            {
                result = a / b;
                break;
            }

        default:
            puts("\a\n\rPomylka: nedopystymtj kod operaciyig !!\a\n\r");
            continue;
        }

        printf("=%f\n\r", result);
    }

    system("PAUSE");
    return 0;
}
