/*Assignment name  : union
Expected files   : union.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program that takes two strings and displays, without doubles, the
characters that appear in either one of the strings.

The display will be in the order characters appear in the command line, and
will be followed by a \n.

If the number of arguments is not 2, the program displays \n.

Example:

$>./union zpadinton "paqefwtdjetyiytjneytjoeyjnejeyj" | cat -e
zpadintoqefwjy$
$>./union 
df6vewg4thras$
$>./union "rien" "cette phrase ne cache rien" | cat -e
rienct phas$
$>./union | cat -e
$
$>
$>./union "rien" | cat -e
$
$>*/

#include <unistd.h>

// NE MARCHE PAS !!

int	main(int argc, char *argv[])
{
	int	i;
	int	tab[256];

	i = 0;
	while (i < 256)
	{
		tab[i] = 0;
		i++;
	}
	if (argc == 3)
	{
		i = 0;
		while (argv[1][i] != '\0')
		{
			if (tab[(unsigned char)argv[1][i]] == 0)
			{
				tab[(unsigned char)argv[1][i]] = 1;
				write(1, &argv[1][i], 1);
			}
			i++;
		}
		i = 0;
		while (argv[2][i] != '\0')
		{
			if (tab[(unsigned char)argv[2][i]] == 0)
			{
				tab[(unsigned char)argv[2][i]] = 1;
				write(1, &argv[2][i], 1);
			}
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}