#include  <cs50.h>
#include  <stdio.h>

bool validate(long long card);
int find_length(long long digits);
bool checksum(long long card_number);
void reveal_brand(long long card_number);


int main(void)
{
    long long card;

    // gets card from the user
    do
    {
        card = get_long_long("Number: ");

    }
    while (card < 0);

    if (validate(card))
    {
        reveal_brand(card);
    }
    else
    {
        printf("INVALID\n");
    }

}

// valides that the card number has the right length and the checksum is correct
bool validate(long long card)
{
    int length = find_length(card);
    return (length == 13 || length == 15 || length == 16) && checksum(card);
}

// logic to find the length of the card
int find_length(long long digits)
{
    int length;
    for (length = 0; digits != 0; digits /= 10, length++);
    return length;
}

// logic to check if the card number is valid
bool checksum(long long card_number)
{
    // gets sum
    int sum = 0;
    int i = 0;
    for (i = 0; card_number != 0; i++, card_number /= 10)
    {
        if (i % 2 == 0)
        {
            sum += card_number % 10;
        }
        else
        {
            int digit = 2 * (card_number % 10);
            sum += digit / 10 + digit % 10;
        }
    }
    return (sum % 10) == 0;
}

// logic to discover the card's brand
void reveal_brand(long long card_number)
{
    if ((card_number >= 34e13 && card_number < 35e13) || (card_number >= 37e13 && card_number < 38e13))
    {
        printf("AMEX\n");
    }
    else if (card_number >= 51e14 && card_number < 56e14)
    {
        printf("MASTERCARD\n");
    }
    else if ((card_number >= 4e12 && card_number < 5e12) || (card_number >= 4e15 && card_number < 5e15))
    {
        printf("VISA\n");
    }
    else
    {
        printf("INVALID\n");
    }
}