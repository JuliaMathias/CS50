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

int main(void)
{
    // Get input text
    string text = get_string("Text: ");


    //TODO: calculate the number of letters in the text
    int letterCount = getLetterCount(text);

    //TODO: calculate the number of words in the text
    int wordCount = getWordCount(text);

    //TODO: calculate the number of sentences in the text
    int sentenceCount = getSentenceCount(text);

    //TODO: calculate the grade level
    int gradeLevel = getGradeLevel(letterCount, sentenceCount, wordCount);

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

int getWordCount(string text)
{
    int wordCount = 0;
    for (int i = 0; i < strlen(text); i++)
    {
        if (text[i] == ' ')
        {
            wordCount += 1;
        }
    }
    return wordCount + 1;
}

int getGradeLevel(int letterCount, int sentenceCount, int wordCount)
{
    float sentenceAverage = (sentenceCount / (float)wordCount) * 100;

    float letterAverage = (letterCount / (float)wordCount) * 100;

    return round(0.0588 * letterAverage - 0.296 * sentenceAverage - 15.8);
}

void printGradeLevel(int gradeLevel)
{
    if (gradeLevel <= 1)
    {
        printf("Before Grade 1\n");
    }
    else if (gradeLevel >= 16)
    {
        printf("Grade 16+\n");
    }
    else
    {
        printf("Grade %i\n", gradeLevel);
    }
}