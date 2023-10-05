#include <stdlib.h>
#include <stdbool.h>
#include "main.h"

/**
 * count_Words - This function calculate number of words in a string.
 * @str: The input string.
 * Return: Number of words in the string.
*/
int count_Words(const char *str)
{
	int count = 0;
	bool IsWord = false;

	while (*str)
	{
		if (*str != ' ')
		{
			if (!IsWord)
			{
				count++;
				IsWord = true;
			}
		}
		else
		{
			IsWord = false;
		}
		str++;
	}
	return (count);
}
/**
 * word_Length - compute the length of a word.
 * @str: The input string containing a word.
 * Return: The length of the word.
*/
int word_Length(const char *str)
{
	int length = 0;

	while (*str && *str != ' ')
	{
		length++;
		str++;
	}
	return (length);
}
/**
 * copy_Word - Copies a word from source to destination.
 * @dest: The destination buffer.
 * @src: The source string containing the word.
 * @length: The length of the word to copy.
*/
void copy_Word(char *dest, const char *src, int length)
{
	int i;

	for (i = 0; i < length; i++)
	{
		dest[i] = src[i];
	}
	dest[length] = '\0'; /* null-terminator*/
}
/**
 * strtow - a function that splits a string into words.
 * @str: input string.
 * Return: A dynamically allocated array of words or NULL on failure.
*/
char **strtow(char *str)
{
	int W_Count, WIdx = 0, word_leng, i;
	char **Sp_words;

	if (str == NULL || *str == '\0')
		return (NULL);
	W_Count = count_Words(str);
	if (W_Count == 0)
		/*If there are no words, return NULL*/
		return (NULL);
	Sp_words = malloc((W_Count + 1) * sizeof(char *));
	if (Sp_words == NULL)
		return (NULL);
	while (*str)
	{
		if (*str != ' ')
		{
			word_leng = word_Length(str);
			Sp_words[WIdx] = (char *)malloc((word_leng + 1) * sizeof(char));
			if (Sp_words[WIdx] == NULL)
			{
				/*Free allocated memory if an allocation fails*/
				for (i = 0; i < WIdx; i++)
				{
					free(Sp_words[i]);
				}
				free(Sp_words);
				return (NULL);
			}
			copy_Word(Sp_words[WIdx], str, word_leng);
			WIdx++;
			str += word_leng;
		}
		else
		{
			str++;
		}
	}
	Sp_words[WIdx] = NULL; /*NULL pointer at the end*/
	return (Sp_words);
}
