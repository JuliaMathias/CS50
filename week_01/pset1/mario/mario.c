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

    for (int i = 0; i < height; i++)
    {
        for (int j = height - 1; j >= 0; j --)
        {
            printf("#");
        }
        printf("\n");
    }
}