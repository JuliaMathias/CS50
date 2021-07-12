#include <ctype.h>
#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

int getLetterCount(string text);
int getWordCount(string text);
int getSentenceCount(string text);
int getGradeLevel(int letterCount, int sentenceCount, int wordCount);
void printGradeLevel(int gradeLevel);

int main(int argc, string argv[])
{
    // Get input text
    string text = get_string("Text: ");


    //TODO: calculate the number of letters in the text
    int letterCount = getLetterCount(text);
    //TODO: calculate the number of words in the text
    int wordCount = getWordsCount(text);
    //TODO: calculate the number of sentences in the text
    int sentenceCount = getSentenceCount(text);
    //TODO: calculate the grade level
    int gradeLevel = int getGradeLevel(int letterCount, int sentenceCount, int wordCount);
    // TODO: Print the readability level
    printGradeLevel(gradeLevel);
}

int getLetterCount(string text)
{
    int letterCount = 0;
    for (int i = 0; i < strlen(text); i++)
    {
        if (isalpha(text[i]))
        {
            letterCount += 1;
        }
    }
    return letterCount;
}

int getSentenceCount(string text)
{
    int sentenceCount = 0;
    for (int i = 0; i < strlen(text); i++)
    {
        if (text[i] == '.' || text[i] == '!' || text[i] == '?')
        {
            sentenceCount += 1;
        }
    }
    return sentenceCount;
}
