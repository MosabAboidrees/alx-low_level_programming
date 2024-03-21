#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main -  Generates and prints a valid key for
 * the crackme5 executable based on a given username.
 * @argc: The number of command line arguments
 * @argv: The command line arguments
 *
 * Return: 0 (Success)
 */
int main(int argc, char *argv[])
{
	if (argc != 2) /* Validate input */
	{
		printf("Correct usage: ./keygen5 username\n");
		return (1);
	}

	char password[7];  /* Array to store the generated password */
	const char *ch_set =
	"A-CHRDw87lNS0E9B2TibgpnMVys5XzvtOGJcYLU+4mjW6fxqZeF3Qa1rPhdKIouk";

	int username_length = strlen(argv[1]);
	int sum = 0, product = 1, max_ascii = 0, squares_sum = 0;

	password[0] = ch_set[((username_length ^ 59) & 63)];
	for (int i = 0; i < username_length; ++i)
	{
		char current_char = argv[1][i];

		sum += current_char;
		product *= current_char;
		if (current_char > max_ascii)
		{
			max_ascii = current_char;
		}
		squares_sum += current_char * current_char;
	}
	password[1] = ch_set[((sum ^ 79) & 63)];
	password[2] = ch_set[((product ^ 85) & 63)];
	srand(max_ascii ^ 14);
	password[3] = ch_set[rand() & 63];
	password[4] = ch_set[((squares_sum ^ 239) & 63)];
	for (int i = 0; i < argv[1][0]; ++i)
	{
		rand();  /*Discard some random values for more variability*/
	}
	password[5] = ch_set[(rand() ^ 229) & 63];
	password[6] = '\0';
	printf("%s", password);
	return (0);
}
