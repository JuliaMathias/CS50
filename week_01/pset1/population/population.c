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
    int years = 0;
    int population_size = start_size;

    while (population_size < end_size)
    {
      int births = population_size / 3;
      int deaths = population_size / 4;

      int new_population_size = population_size + births - deaths;
      population_size = new_population_size;
      years ++;
      printf("current population%i\n", population_size);
    }

    // TODO: Print number of years
    printf("Years: %i\n", years);
}