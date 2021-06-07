#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // TODO: Prompt for start size
    int height;
    do
    {
      height = get_int("Height: ");
    }
    while (!(height >= 1 && height <= 8) );

    printf("Stored: %i\n", height);

    // for (int i = 0; i < 3; i++)
    // {
    //     for (int j = 0; j < 3; j++)
    //     {
    //         printf("#");
    //     }
    //     printf("\n");
    // }
}