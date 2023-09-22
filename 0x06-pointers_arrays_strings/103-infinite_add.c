#include "main.h"
/**
 * reverse_string - Reverses a null-terminated string in-place.
 * @str: The input string to be reversed.
*/
void reverse_string(char *str)
{
	int i = 0, j = 0;
	char temp;

	while (str[j] != '\0') /*Calculate the length of the strin*/
		j++;
	j--;/*Adjust to point to the last character*/
	while (i < j)
		temp = str[i];
		str[i] = str[j];
		str[j] = temp;
		i++;
		j--;
}
/**
 * infinite_add - Adds two numbers represented as strings.
 * @n1: first number.
 * @n2: second number.
 * @r: buffer for storing.
 * @size_r: The size of the buffer.
 * Return: A pointer to the result (in `r`) or 0 if the result can't be stored.
*/
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int len1 = 0, len2 = 0, carry = 0, sum;
	int num1 = 0, num2 = 0, k = 0;

	while (n1[len1] != '\0')
		len1++;
	while (n2[len2] != '\0')
		len2++;
	len1--;
	len2--;
	if (size_r <= len1 || size_r <= len2)
		return (0);
	while (len1 >= 0 || len2 >= 0 || carry == 1)
	{
		if (len1 >= 0)
			num1 = n1[len1] - '0';
		else
			num1 = 0;
		if (len2 >= 0)
			num2 = n2[len2] - '0';
		else
			num2 = 0;
		sum = num1 + num2 + carry;
		if (sum >= 10)
			carry = 1;
		else
			carry = 0;
		if (k >= (size_r - 1))
			return (0);
		r[k] = (sum % 10) + '0';
		len1--;
		len2--;
		k++;
	}
	if (k == size_r)
		return (0);
	r[k] = '\0';
	reverse_string(r);
	return (r);
}
