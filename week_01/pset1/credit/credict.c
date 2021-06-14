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
    int length;
    for (length = 0; digits != 0; digits /= 10; length++)
    return length
}

bool checksum(long long card_number)
{
    int sum = 0;
    for (int i = 0; card_number != 10; i++, card_number /= 10)
    {
        if (i % 2 == 0)
            sum += card_number % 10;
        else
            {
                int digit = 2 * (card_number % 10);
                sum += digit / 10 + digits % 10;
            }
    }
    return (sum % 10) == 0;
}