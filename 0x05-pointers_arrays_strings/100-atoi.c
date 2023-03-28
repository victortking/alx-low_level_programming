/**
 * _atoi - converts a string to an integer
 * @s: string to convert
 *
 * Return: converted integer
 */
int _atoi(char *s)
{
	signed int sign = 1;
	signed int num = 0;
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == '-')
			sign *= -1;

		if (s[i] >= '0' && s[i] <= '9')
			num = num * 10 + (s[i] - '0');

		if (num > 0 && (s[i] < '0' || s[i] > '9'))
			break;

		i++;
	}

	return (num * sign);
}
