#include <cs50.h>
#include <stdio.h>
void draw (char hash, int height)

int main(void)
{
    
    int height;
    int direction = 0;
    
    // Prompt user for height
    do
    {
        height = get_int("Height: ");
    }
    while (height < 1 || height > 8);

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

void draw (char hash, int height)
{
    for (int i = 0; i < height; i++)
    {
        draw("%c", c)
    }
}