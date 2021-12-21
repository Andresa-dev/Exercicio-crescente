#include <stdio.h>

int main(int argc, char const *argv[])
{
    int X, Y;

    printf("Digite dois numeros:\n");
    scanf("%d", &X);
    scanf("%d", &Y);

    while (X != Y)
    {
        if (X < Y)
        {
            printf("CRESCENTE\n");
        }
        else
        {
            printf("DECRESCENTE\n");
        }

        printf("Digite outros dois numeros:\n");
        scanf("%d", &X);
        scanf("%d", &Y);
    }

    return 0;
}
