#include "main.h"
#include <stdio.h>

/**
 * jack_bauer - prints the time in minutes
 */
void jack_bauer(void)
{
	int hr, min;

	hr = 0;
	while (hr < 24)
	{
		min = 0;

		while (min < 60)
		{
			printf("%02d:%02d\n", hr, min);
			min++;
		}
		hr++;
	}


}
