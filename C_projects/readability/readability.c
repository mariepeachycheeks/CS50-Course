#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    string text = get_int("Text: ");


}

int count_letters(string text)
{
    int letters = 0;
    for (int i = 0; i < strlen(text); i++)
    {
        if (tolower(text[i])>= 'a' && tolower(text[i])<='z')
        {
            letters++;
        }
    }
    return letters;
}

int count_words(string text)
{
    int words = 0;
    for (int k = 0; k < strlen(text); k++)
    {
        if (text[k] = ' ' )
        {
            words++;
        }
    }
    return words;
}

int count_sentences(string text)
{
    int sentences = 0;
    for (int s = 0; s < strlen(text); s++)
    {
        if (text[s] == '.' || text[s] == '!'  || text[s]== '?')
        {
            sentences++;
        }
    }
    return sentences;
}