// #include <ctype.h>
#include <cs50.h>
#include <stdio.h>
#include <string.h>
// #include <math.h>

bool is_valid_key(string input);

int main(int argc, string argv[])
{
    if (argc != 2)
    {
        printf("Usage: ./substitution key\n");
        return 1;
    }
    if (!is_valid_key(argc[1]))
    {
        printf("Key must contain 26 characters.\n");
        return 1;
    }

    string input = get_string("plaintext: ")
}

