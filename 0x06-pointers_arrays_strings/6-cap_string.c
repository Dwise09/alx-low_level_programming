#include "main.h"
/**
 * cap_string - capitalizes all words of a string
 * @str: the string to change the first letter of a word in uppercase
 *
 * Return: capitalizes letters
 */
char *cap_string(char *str)
{
	int s;
	int t;
	char c[] = {44, 59, 46, 33, 63, 34, 40, 41, 123, 125, 32, 10, 9};

	s = 0;

	while (str[s] != '\0')
	{
		if (s == 0 && str[s] >= 97 && str[s] <= 122)
		{
			str[s] = str[s] - 32;
		}
		t = 0;
		while (c[t] != '\0')
		{
			if (c[t] == str[t] && (str[t + 1] >= 97 && str[t + 1] <= 122))
			{
				str[t + 1] = str[t + 1] - 32;
			}
			t++;
		}
		s++;
	}
	return (str);
}
