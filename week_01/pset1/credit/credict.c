#include  <cs50.h>
#include  <stdio.h>

int main(void)
{   long long card
    do
    {
    card = get_long_long("Number: ");

    } while (card < 0)

    if (validate(card))
    {
      reveal_brand(card);
    }
    else
    {
      printf("INVALID \n");
    }

    
}
bool validate(long long card)
{
    int length = find_length(card);
    return (length == 13 || length == 15 || length == 16) && checksum(card)
}

int find_length (long long digits)
{
    int length = 0
    for (int length = 0; digits !=0; digits /=10)
}