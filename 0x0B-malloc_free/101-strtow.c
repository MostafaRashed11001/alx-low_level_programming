#include "main.h"
#include <stdlib.h>

/**
 * is_space - Checks if a character is a whitespace character.
 * @c: The character to check.
 *
 * Return: 1 if the character is whitespace, 0 otherwise.
 */
int is_space(char c)
{
	return (c == ' ' || c == '\t' || c == '\n');
}
/**
 * count_words - Counts the number of words in a string.
 * @str: The input string.
 *
 * Return: The number of words in the string.
 */
int count_words(char *str)
{
	int count = 0;
	int in_word = 0;

	while (*str)
	{
		if (is_space(*str))
			in_word = 0;
		else if (!in_word)
		{
			in_word = 1;
			count++;
		}
		str++;
	}
	return (count);
}
/**
 * get_next_word - Extracts the next word from a string.
 * @str: A pointer to a pointer to the input string.
 *
 * Return: A dynamically allocated string containing the next word.
 *         NULL if no more words or memory allocation fails.
 */
char *get_next_word(char **str)
{
	char *word = NULL;
	char *word_start = NULL;
	char *word_end = NULL;
	int word_length, i;

	while (**str)
	{
		if (is_space(**str) && word_start == NULL)
			(*str)++;
		else if (!is_space(**str) && word_start == NULL)
		{
			word_start = *str;
			(*str)++;
			word_end = word_start;
		}
		else if (!is_space(**str) && word_start != NULL)
		{
			word_end = *str;
			(*str)++;
		}
		else if (is_space(**str) && word_start != NULL)
			break;
	}
	if (word_start == NULL)
		return (NULL);
	word_length = word_end - word_start + 1;
	word = (char *)malloc(sizeof(char) * (word_length + 1));
	if (word == NULL)
		return (NULL);
	for (i = 0; i < word_length; i++)
		word[i] = word_start[i];
	word[word_length] = '\0';
	return (word);
}
/**
 * strtow - Splits a string into words.
 * @str: The input string.
 *
 * Return: An array of strings containing the words.
 *         NULL if str == NULL or str == "" or if memory allocation fails.
 */
char **strtow(char *str)
{
	int num_words, i, j;
	char **word_array = NULL;
	char *word = NULL;

	if (str == NULL || *str == '\0')
		return (NULL);
	num_words = count_words(str);
	if (num_words == 0)
		return (NULL);
	word_array = (char **)malloc(sizeof(char *) * (num_words + 1));

	if (word_array == NULL)
		return (NULL);
	for (i = 0; i < num_words; i++)
	{
		word = get_next_word(&str);

		if (word == NULL)
		{
			for (j = 0; j < i; j++)
			{
				free(word_array[j]);
			}
			free(word_array);
			return (NULL);
		}
		word_array[i] = word;
	}
	word_array[num_words] = NULL;
	return (word_array);
}

