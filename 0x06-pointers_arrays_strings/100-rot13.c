#include "main.h"
char *rot13(char *s)
{
	int i = 0, j = 0;
	char string_rot13[] = "NnOoPpQqRrSsTtUuVvWwXxYyZzAaBbCcDdEeFfGgHhIiJjKkLlMm";
	char string_alpha[] = "AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsTtUuVvWwXxYyZz";

	while (s[i] != '\0')
	{
		do {
			if (s[i] == string_alpha[j])
			{
				s[i] = string_rot13[j];
				break;
			}
			j++;
		} while (string_alpha[j] != '\0');
		j = 0;
		i++;
	}

	return (s);
}
