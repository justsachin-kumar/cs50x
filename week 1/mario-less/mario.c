#include <cs50.h>
#include <stdio.h>

int main(void)
{
    while (true)
    {
        int n = get_int("Hights:");
        if (n > 0)
        {
            for (int i = 1; i <= n; i++)
            {
                for (int j = 1; j <= n - i; j++)
                {
                    printf(" ");
                }
                for (int j = n - i + 1; j <= n; j++)
                {
                    printf("#");
                }
                printf("\n");
            }
            break;
        }
    }
}
