#include <cs50.h>
#include <stdio.h>
void draw (char hash, int height)

int main(void)
{
    int height;

    // Prompt user for height
    do
    {
        height = get_int("Height: ");
    }
    while (height < 1 || height > 8);

    printf("Stored: %i\n", height);

    for (int i = 0; i < height; i++)
    {
        // draw a line of the piramid
        draw(' ', height - 1 - i);
        draw('#', i + 1);
        draw(' ', 2);
        draw('#', i + 1);

        // go to the next line
        printf("\n")
    }
}

// function that draws the blocks
void draw (char char, int height)
{
    for (int i = 0; i < height; i++)
    {
        printf("%c", char)
    }
}