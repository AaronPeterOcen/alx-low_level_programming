#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * main - generate a key depending on a username for crackme5
 * @ac: number of arguments passed
 * @av: arguments passed to main
 * Return: 0 on success, 1 on error
 */
int main(int ac, char *av[])
{
    unsigned int a, c;
    size_t length, adding;
    char *l = "A-CHRDw87lNS0E9B2TibgpnMVys5XzvtOGJcYLU+4mjW6fxqZeF3Qa1rPhdKIouk";
    char p[7] = "      ";

    if (ac != 2)
    {
        printf("Correct usage: ./keygen5 username\n");
        return (1);
    }
    length = strlen(av[1]);
    p[0] = l[(length ^ 59) & 63];
    for (a = 0, adding = 0; a < length; a++)
        adding += av[1][a];
    p[1] = l[(adding ^ 79) & 63];
    for (a = 0, c = 1; a < length; a++)
        c *= av[1][a];
    p[2] = l[(c ^ 85) & 63];
    for (c = av[1][0], a = 0; a < length; a++)
        if ((char)c <= av[1][a])
            c = av[1][a];
    srand(c ^ 14);
    p[3] = l[rand() & 63];
    for (c = 0, a = 0; a < length; a++)
        c += av[1][a] * av[1][a];
    p[4] = l[(c ^ 239) & 63];
    for (c = 0, a = 0; (char)a < av[1][0]; a++)
        c = rand();
    p[5] = l[(c ^ 229) & 63];
    printf("%s\n", p);
	return (0);
}
