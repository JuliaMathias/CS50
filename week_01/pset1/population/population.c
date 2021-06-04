#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // TODO: Prompt for start size
    int start_size;
    do
    {
      start_size = get_int("How many Lhamas do you want to start your population with? ");
    }
    while (start_size < 9);

    // TODO: Prompt for end size
    int end_size;
    do
    {
      end_size = get_int("How many Lhamas do you want to end your population with? ");
    }
    while (start_size >= end_size);

    // TODO: Calculate number of years until we reach threshold

    // TODO: Print number of years
}