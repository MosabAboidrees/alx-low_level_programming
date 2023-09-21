/**
 * _strcmp - a function named _strcmp that is used to compare
 * two strings (s1 and s2). It returns an integer value based
 * on the comparison result.
 * @s1: This parameter represents the first string to be compared.
 * @s2: This parameter represents the second string to be compared.
 *
 * Return: 0, it means the strings are equal.
 * If r is negative, it means s1 is less than s2 (based on ASCII values).
 * If r is positive, it means s1 is greater than s2 (based on ASCII values).
*/

int _strcmp(char *s1, char *s2)
{
	int chr = 0, r;

	/**
	 * Comparison Loop: This while loop iterates through
	 * the characters of both s1 and s2 until it reaches
	 * the end of either string (i.e., until a null
	 * terminator, '\0', is encountered in either string).
	 *
	*/
	while (s1[chr] != '\0' && s2[chr] != '\0')
	{
		/**
		 * Character Comparison: Inside the loop, it
		 * compares the characters at the current
		 * position i in s1 and s2. If the characters are
		 * not equal, it calculates the difference between
		 * the ASCII values of the characters and assigns it
		 * to the variable r. The loop is then exited using break.
		*/
		if (s1[chr] != s2[chr])
		{
			r = s1[chr] - s2[chr];
			break;
		}
		/**
		 * Handling Equal Characters: If the characters at
		 * the current position are equal, it still calculates
		 * the difference and assigns it to r. This is done to
		 * keep track of the cumulative difference,
		 * but it won't break out of the loop.
		*/
		else
		{
			r = s1[chr] - s2[chr]; /* return 0 (characters are equal)  */
		}
		chr++;
	}
	return (r);
}
