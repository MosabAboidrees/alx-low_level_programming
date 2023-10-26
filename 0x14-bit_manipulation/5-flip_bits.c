#include "main.h"
/**
 * flip_bits - a function that returns the number of bits
 * you would need to flip to get from one number to another.
 * number to another.
 * @n: The first number.
 * @m: The second number.
 * Return: The number of bits needed to flip.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int diff = n ^ m;
	unsigned int count = 0;

	/* Counting the number of set bits in the XOR value */
	while (diff)
	{
		/*if the least significant bit of diff is 1.increments the count by 1.*/
		count += diff & 1;
		/*Right-shifts the diff value by 1 bit to move to the next bit*/
		diff >>= 1;
	}
	return (count);
}
