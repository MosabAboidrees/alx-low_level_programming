#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * argstostr -  a function that concatenates all the arguments of your program.
 * @ac: input argument count.
 * @av: input array of argument strings.
 * Return: A pointer to concatenated arguments separated by '\n'.
 * return NULL if ac is 0 or av is NULL or if memory allocation fails.
*/
char *argstostr(int ac, char **av)
{
	int total_len = 0, pos = 0, idx;
	char *concat_arg, *arg;

	if (ac == 0 || av == NULL)
		return (NULL);  /* Return NULL if ac is 0 or av is NULL*/
	/* compute the total length of the concatenated string*/
	for (idx = 0; idx < ac; idx++)
	{
		arg = av[idx]; /*current argument */
		while (*arg != '\0')
		{
			total_len++; /* length of input argument*/
			arg++;
		}
	}
	/* Allocate memory, including space for '\n' characters*/
	concat_arg = malloc((total_len + ac * sizeof(char)) + 1);
	if (concat_arg == NULL)
		return (NULL);  /* If memory allocation fails, return NULL*/
	/*Concatenate arguments with '\n' separators*/
	for (idx = 0; idx < ac; idx++)
	{
		arg = av[idx];
		while (*arg != '\0')
		{
			concat_arg[pos] = *arg;
			pos++; /* argument position tracker*/
			arg++;
		}
		concat_arg[pos] = '\n';  /*If not the last argument, add '\n'*/
	}
	concat_arg[pos] = '\0';  /*Add null-terminator at the end*/
	return (concat_arg);
}
